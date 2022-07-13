#include "declaration.h"
using namespace std;
void skip (int a){
	for (int b = 0; b < a; b++){
		cout << endl;
	}
}

int main (){
	random_device rd;
	uniform_int_distribution <int> d6 (1, 6);
	///player 1
	string name1;
	int Str1;
	int Def1;
	int Armor1;
	int Skill1;
	int Wins1;
	skip (2);
	cout << "SETTING UP PLAYER 1..." << endl << "+";
	savePlayerStats (name1, Str1, Def1, Armor1, Skill1, Wins1);
	//player 2
	string name;
	int Str;
	int Def;
	int Armor;
	int Skill;
	int Wins;
	skip (2);
	cout << "SETTING UP PLAYER 2..." << endl << "=";
	savePlayerStats (name, Str, Def, Armor, Skill, Wins);
	int Health1 = 20;
	int Health = 20;
	int turns = 0;
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
		attackRoll >= Skill1 + d6 (rd);
		if (attackRoll + 3 + Def){
			cout << name1 << "hits " << "..." << endl;
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
		cout << "ROUND RESULTS... " << endl;
		cout << "0 " << name1 << " 's Health: " << Health1 << endl;
		cout << "0 " << name << " 's Health: " << Health << endl << endl;
		turns++;
	}
	if (((Health1 > 0) && (Health > 0)) || ((Health1 <= 0) && (Health <= 0))){
		cout << "THE RESULTS ARE IN..." << endl;
		cout << "...the fight was so close that it ended in a DRAW!" << endl;
	} else if (Health1 > 0){
		cout << "THE RESULTS ARE IN..." << endl;
		cout << "...it look like" << name1 << "pulled off the win" << endl;
		Wins1++;
	} else{
		cout << "THE RESULTS ARE IN..." << endl;
		cout << "...it look like" << name << "pulled off the win" << endl;
		Wins++;
	}
	savePlayerStats (name1, Str1, Def1, Armor1, Skill1, Wins1);
	savePlayerStats (name, Str, Def, Armor1, Skill, Wins);
}
void setupPlayerStats (string& name, int& str, int& def, int& armor, int& skill, int& wins){
	fstream file;
	cout << "Name: ";
	getline (cin, name);
	if (name == ""){
		name = "No Name\n";
	}
	string filename = name + ".txt";
	file.open (filename, ios::in);
	if (file.is_open ()){
		file >> str;
		file >> def;
		file >> armor;
		file >> skill;
		file >> wins;
		file.close ();
	} else{
		bool accepted = false;
		while (accepted == false){
			int points = 20;
			cout << "you have " << points << "points assing to character stats." << endl;
			cout << "Stats include strength, defense, armor & skill." << endl;
			//strength
			cout << "  ・Strength";
			cin >> str;
			points - +str;
			cout << "    You have " << points << "points remaining " << endl;

			//defense
			cout << "  ・defense";
			cin >> def;
			points - +def;
			cout << "    You have " << points << "points remaining " << endl;

			//Armor
			cout << "  ・Armor";
			cin >> armor;
			points - +armor;
			cout << "    You have " << points << "points remaining " << endl;

			//Skill
			cout << "  ・Skill";
			cin >> skill;
			points - +skill;
			cout << "    You have " << points << "points remaining " << endl;

			cin.ignore ();
			wins = 0;
			if (points >= 0){
				cout << "the entered stats have been accepted. " << name << "is being created!" << endl;
				accepted = true;
			} else{
				cout << "Sorry, you've exceeded the stat points limit.";
				skip (2);
				cout << "Try agaion...";
			}
		}
	}
}
void savePlayerStats (string name, int str, int def, int armor, int skill, int wins){
	fstream file;
	string filename = name + ".txt";
	file.open ("test.txt", ios::out);
	if (file.is_open ());
		file >> str;
		file >> def;
		file >> armor;
		file >> skill;
		file >> wins;
		file.close ();
}
