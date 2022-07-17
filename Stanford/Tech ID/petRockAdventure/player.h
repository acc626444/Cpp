#pragma once
#include "character.h"
class player: public character{
	public:
	player (string enteredName, string enteredDescription): character (enteredName, enteredDescription){};
	void fight (character* other);
	bool isAlive ();
	void setStats (int level);
};