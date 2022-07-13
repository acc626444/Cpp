#include "function.h"
int main (){
	/********************************************************************
	*
	*						intro image
	*
	********************************************************************/
	srand (time (NULL));
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
	/********************************************************************
	*
	*						game setup
	*
	********************************************************************/

	//name
	cout << "Name Your Rock: ";
	getline (cin, playerName);
	cout << endl << "That's a great name!" << endl;
	//creating pet rock
	character* petRock = new player (playerName, "- Just a regular rock.");
	cout << "It looks like " << playerName << " is ready for an adventure. ";
	cout << "Time to go out and explore..." << endl;
	this_thread::sleep_for (chrono::milliseconds (300));
	delayScroll (100, 10);
	cout << "To be countinued..." << endl;
}