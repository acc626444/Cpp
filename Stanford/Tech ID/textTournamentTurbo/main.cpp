#include "declaration.h"

void setupPlayerStats (string& name, int& str, int& def, int& armor, int& skill, int& wins);
void savePlayerStats (string name, int str, int def, int armor, int skill, int wins);
int main (){
	random_device rd;
	uniform_int_distribution <int> d6 (1, 6);
	///player 1
	string name1;
	int Str1 = 0;
	int Def1 = 0;
	int Armor1 = 0;
	int Skill1 = 0;
	int Wins1 = 0;
	skip (2);
	cout << "SETTING UP PLAYER 1..." << endl << "+ ";
	setupPlayerStats (name1, Str1, Def1, Armor1, Skill1, Wins1);
	//player 2
	int Health1 = 20;
	int Health = 20;
	int turns = 0;
	string name;
	int Str = 0;
	int Def = 0;
	int Armor = 0;
	int Skill = 0;
	int Wins = 0;
	skip (2);
	cout << "SETTING UP PLAYER 2..." << endl << "0 ";
	setupPlayerStats (name, Str, Def, Armor, Skill, Wins);
	//announce
	cout << endl << "TIME TO FIGHT" << endl;
	cout << "Introducing the challenge..." << endl;
	cout << "+ " << name1 << ": " << Wins1 << " Wins" << endl;
	cout << "0 " << name << ": " << Wins << " Wins" << endl;
	//fight
	while ((Health1 > 0) && (Health > 0) && (turns < 100)){
		int attackRoll;
		int damageRoll;
		cout << " Begin Round " << turns + 1 << endl;
		//player 1's turn
		attackRoll = Skill1 + d6 (rd);
		//damage
		if (attackRoll >= 3 + Def){
			cout << name1 << " hits " <<name<< "..." << endl;
			damageRoll = Str1 + d6 (rd) - Armor;
			if (damageRoll > 0){
				Health -= damageRoll;
				cout << ".." << name << " takes " << damageRoll << " damage!" << endl;
			} else{
				cout << "..." << name << "'s armor blocks all the damage!" << endl;
			}
		} else{
			cout << name1 << " swings at" << name << "..." << endl;
			cout << "..." << name << "'s defense blocks the hit" << endl;
		}//player 1's turn
		attackRoll = Skill1 + d6 (rd);
		//damage
		if (attackRoll >= 3 + Def){
			cout << name1 << " hits " <<name<< "..." << endl;
			damageRoll = Str1 + d6 (rd) - Armor;
			if (damageRoll > 0){
				Health -= damageRoll;
				cout << ".." << name << " takes " << damageRoll << " damage!" << endl;
			} else{
				cout << "..." << name << "'s armor blocks all the damage!" << endl;
			}
		} else{
			cout << name1 << " swings at" << name << "..." << endl;
			cout << "..." << name << "'s defense blocks the hit" << endl;
		}
		//player 2's turn
		attackRoll = Skill + d6 (rd);
		//damage
		if (attackRoll >= 3 + Def1){
			cout << name << " hits " << name1 << "..." << endl;
			damageRoll = Str + d6 (rd) - Armor1;
			if (damageRoll > 0){
				Health1 -= damageRoll;
				cout << ".." << name1 << " takes " << damageRoll << " damage!" << endl;
			} else{
				cout << "..." << name1 << "'s armor blocks all the damage!" << endl;
			}
		} else{
			cout << name << " swings at" << name1 << "..." << endl;
			cout << "..." << name1 << "'s defense blocks the hit" << endl;
		}
		//health
		cout << "ROUND RESULTS... " << endl;
		cout << "+ " << name1 << "'s Health: " << Health1 << endl;
		cout << "0 " << name << "'s Health: " << Health << endl << endl;
		turns++;
	}
	//winner
	if (((Health1 > 0) && (Health > 0)) || ((Health1 <= 0) && (Health <= 0))){
		cout << "THE RESULTS ARE IN..." << endl;
		cout << "...the fight was so close that it ended in a DRAW!" << endl;
	} else if (Health1 > 0){
		cout << "THE RESULTS ARE IN..." << endl;
		cout << "...it look like " << name1 << " pulled off the win" << endl;
		Wins1++;
	} else{
		cout << "THE RESULTS ARE IN..." << endl;
		cout << "...it look like " << name << " pulled off the win" << endl;
		Wins++;
	}
	savePlayerStats (name1, Str1, Def1, Armor1, Skill1, Wins1);
	savePlayerStats (name, Str, Def, Armor1, Skill, Wins);
}