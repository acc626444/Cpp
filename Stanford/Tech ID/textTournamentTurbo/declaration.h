#include <fstream>
#include <iostream>
#include <string>
#include <random>
using namespace std;

void skip (int a){
	for (int b = 0; b < a; b++){
		cout << endl;
	}
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
			cout << "you have " << points << " points assigned to character stats." << endl;
			cout << "Stats include strength, defense, armor & skill." << endl;
			//strength
			cout << "  Strength: ";
			cin >> str;
			points -= str;
			cout << "    You have " << points << " points remaining " << endl;

			//defense
			cout << "  defense: ";
			cin >> def;
			points -= def;
			cout << "    You have " << points << " points remaining " << endl;

			//Armor
			cout << "  Armor: ";
			cin >> armor;
			points -= armor;
			cout << "    You have " << points << " points remaining " << endl;

			//Skill
			cout << "  Skill: ";
			cin >> skill;
			points -= skill;
			cout << "    You have " << points << " points remaining " << endl;

			cin.ignore ();
			wins = 0;
			if (points >= 0){
				cout << "the entered stats have been accepted. " << name << " is being created!" << endl;
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
	file.open (filename, ios::out);
	file << "strength: " << str << endl;
	file << "defense: " << def << endl;
	file << "armor: " << armor << endl;
	file << "skill: " << skill << endl;
	file << "win: " << wins << endl;
	file.close ();
}