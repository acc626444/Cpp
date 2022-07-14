#include "declaration.h"
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
void delayScroll (int delayInMs, int lineCount){
	for (int i = 0; i < lineCount; i++){
		cout << endl;
		this_thread::sleep_for (chrono::milliseconds (delayInMs));
	}
}
character* geneateEnemy (){
	string name;
	string describe;
	int level;
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
void fightDecisions (character* player){
	//describe encounter
	character* anEnemy = generateEnemy ();
	cout << "You encounter ";
	anEnemy->describe ();
	cout << "The " << anEnemy->name << " appears to have " << anEnemy->currentHealth << " health and an attack that does " << anEnemy->damage << " damage. Ouch! Remember: You have " << player->currentHealth << " health remaining.\n";
	int option = 0;
	//decision
	while (option == 1 || option == 2 || option == 3){
		cout << "QUICK! MAKE A DECISION... \n1) Start a Fight \n2) Snaek Around \n3)Retreat \nENTER YOUR DICISION: ";
		cin >> option;
		switch (option){

			case 1:
				cout << "You decided to start a fight, so here we go...\n";
				encounterEnemy (player, anEnemy);
			case 2:
				cout << "You decided to try to sneak around without getting caught.\n";
				delayScroll (1500, 1);
			case 3:
				cout << endl << "GAME OVER! Hope you still had fun!You can always play again and try to survive longer.\n";
				exit (0);
		}
	}
}

