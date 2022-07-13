#include "declaration.h"
void skip (int a){
	for (int b = 0; b < a; b++){
		cout << endl;
	}
}
/*void roll (){
	random_device rd;
	uniform_int_distribution <int> d6 (1, 6);
}
void player1 (){
	string name;
	int Str;
	int Def;
	int Armor;
	int Skill;
	int Win;
	skip (2);
	cout << "SETTING UP PLAYER 1..." << endl << "+";
	savePlayerStats (name, Str, Def, Armor, Skill, Win);
}
void player2 (){
	string name;
	int Str;
	int Def;
	int Armor;
	int Skill;
	int Win;
	skip (2);
	cout << "SETTING UP PLAYER 2..." << endl << "+";
	savePlayerStats (name, Str, Def, Armor, Skill, Win);
}
void setupPlayerStats (string& name, int& str, int& def, int& armor, int& skill, int& wins){
	fstream f;
	cout << "Name: ";
	getline (cin, name);
	if (name == ""){
		name = "No Name\n";
	}
	string filename = name + ".txt";
	if
}
void savePlayerStats (string name, int str, int def, int armor, int skill, int wins){

}