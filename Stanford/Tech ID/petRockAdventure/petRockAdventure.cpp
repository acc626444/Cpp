#include "function.h"

int main (){
	string playerName;
	string intro =
		"            _____         \n"
		"        __ /__    \\__    \n"
		"     _ /      \\    __\\  \n"
		"    /          \\__ /  \\ \n"
		"   |   O          O   |   \n"
		"   |      ______      /   \n"
		"    \\     \\____/     /  \n"
		"     \\______________/    \n\n"
		"--------------------------\n"
		"--- PET ROCK ADVENTURE ---\n"
		"--------------------------  ";

	cout << intro << endl;
	cout << "Name Your Rock: ";
	getline (cin, playerName);
	cout << endl << "That's a great name!" << endl;

	cout << "It looks like " << playerName << " is ready for an adventure. ";
	cout << "Time to go out and explore..." << endl;
}