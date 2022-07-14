#include "declaration.h"
#include <fstream>

string readline;

/*****************************************************************************
										NOTES
*
*			CODE						  |						MEANING
*										  |
* 1)		->							  |						file of
*										  |
* ex.	other->currentHealth			  |				in other, go to the														  current health file
*										  |
*										  |
*										  |
* 2)		delayInMs					  |					delay in msec
*										  |
*										  |
*										  |
* 3)		lineCount					  |					lines to skip
*										  |
*										  |
*										  |
*****************************************************************************/
void error (int n){
	if (n != 1 || n !=2 size){
		cout << "why" << endl;
		exit (1);
	}
}
void delayScroll (int delayInMs, int lineCount){
	for (int i = 0; i < lineCount; i++){
		cout << endl;
		this_thread::sleep_for (chrono::milliseconds (delayInMs));
	}
}
character* generateEnemy (){
	string name;
	string describe;
	int level {};
	random_device rd;
	//enemy selects an item
	int enemySelect = rd () % 3;
	switch (enemySelect){
		case 0:
			name = "Umbrella";
			describe = "-A household object that keeps you dry in the rain.";
			level = 1;
			break;
		case 1:
			name = "Sunglasses";
			describe = "-Glasses tinted to protect your eyes from the light of the sun.";
			level = 2;
			break;
		case 2:
			name = "Parachute";
			describe = "-A device that slows your decent to the ground.";
			level = 3;
	}
	//creating enemy
	character* e = new enemy (name, describe);
	e->setStats (level);
	return e;
}
void encounterEnemy (character* player, character* enemy){
	//while both, player and enemy, are alive
	while (player->isAlive () && enemy->isAlive ()){
		delayScroll (1500, 1);
		//fight
		player->fight (enemy);
		if (enemy->currentHealth > 0){
			delayScroll (1500, 1);
			enemy->fight (player);
		}
	}
	//if player is dead
	if (player->isAlive () == false){
		cout << endl << "DEFEAT! Looks like " << enemy->name << "knocked out " << player->name << "!\n\n";
		cout << "Hope you still had fun! You can always play again and try to survive longer.\n";
	} else{
		cout << endl << "VICTORY! Looks like " << player->name << "knocked out " << enemy->name << "!\n\n";
		cout << "Let's continue on with the Adventure...\n";
		this_thread::sleep_for (chrono::milliseconds (0));
		delayScroll (100, 10);
	}
}
/*void decision (character* anEnemy, character* player){
	string option;
	//decision
	cout << "QUICK! MAKE A DECISION... \n1) Start a Fight \n2) Snaek Around \n3)Retreat \nENTER YOUR DICISION: ";
	getline (cin, readline);
	if (option.compare("1")){
		//fight

		cout << "You decided to start a fight, so here we go...\n";
		encounterEnemy (player, anEnemy);
	} else if (option.compare("2")){
		//try to sneak
		cout << "You decided to try to sneak around without getting caught.\n";
		delayScroll (1500, 1);
		random_device rd;
		int survive = rd () % 2;
		if (survive == 0){
			cout << "LUCKY! You successfully snuck around the " << anEnemy->name << " this time. \nLet's continue on with the adventure...\n";
			this_thread::sleep_for (chrono::milliseconds (2000));
			delayScroll (100, 10);
		} else{
			cout << "AMBUSH! You were caught and knocked out by the " << anEnemy->name << "! \nHope you still had fun! You can always play again and try to survive longer.\n";
		}
	} else if (option.compare("3")){
		//end game
		cout << endl << "GAME OVER! Hope you still had fun!You can always play again and try to survive longer.\n";
	} else{
		decision (anEnemy, player);
	}
}
void decision2 (character* anEnemy, character* player, int option){
	//decision
	cout << "QUICK! MAKE A DECISION... \n1) Start a Fight \n2) Snaek Around \n3)Retreat \nENTER YOUR DICISION: ";
	cin >> option;
	if (option==1){
		//fight
		cout << "You decided to start a fight, so here we go...\n";
		encounterEnemy (player, anEnemy);
	} else if (option==2){
		//try to sneak
		cout << "You decided to try to sneak around without getting caught.\n";
		delayScroll (1500, 1);
		random_device rd;
		int survive = rd () % 2;
		if (survive == 0){
			cout << "LUCKY! You successfully snuck around the " << anEnemy->name << " this time. \nLet's continue on with the adventure...\n";
			this_thread::sleep_for (chrono::milliseconds (2000));
			delayScroll (100, 10);
		} else{
			cout << "AMBUSH! You were caught and knocked out by the " << anEnemy->name << "! \nHope you still had fun! You can always play again and try to survive longer.\n";
		}
	} else if (option==3){
		//end game
		cout << endl << "GAME OVER! Hope you still had fun!You can always play again and try to survive longer.\n";
	} else{
		decision2 (anEnemy, player, option);
	}
}*/
void fightDecisions (character* player){
	//describe encounter
	character* anEnemy = generateEnemy ();
	cout << "You encounter ";
	anEnemy->describe ();
	cout << "The " << anEnemy->name << " appears to have " << anEnemy->currentHealth << " health and an attack that does " << anEnemy->damage << " damage. Ouch! Remember: You have " << player->currentHealth << " health remaining.\n";
	int option = 1;
	//decision
	cout << "QUICK! MAKE A DECISION... \n1) Start a Fight \n2) Snaek Around \n3)Retreat \nENTER YOUR DICISION: ";
	cin >> option;
	if (option == 1){
		//fight
		cout << "You decided to start a fight, so here we go...\n";
		encounterEnemy (player, anEnemy);
	} else if (option == 2){
		//try to sneak
		cout << "You decided to try to sneak around without getting caught.\n";
		delayScroll (1500, 1);
		random_device rd;
		int survive = rd () % 2;
		if (survive == 0){
			cout << "LUCKY! You successfully snuck around the " << anEnemy->name << " this time. \nLet's continue on with the adventure...\n";
			this_thread::sleep_for (chrono::milliseconds (2000));
			delayScroll (100, 10);
		} else{
			cout << "AMBUSH! You were caught and knocked out by the " << anEnemy->name << "! \nHope you still had fun! You can always play again and try to survive longer.\n";
		}
	} else {
		//end game
		cout << endl << "GAME OVER! Hope you still had fun!You can always play again and try to survive longer.\n";
	}
}
