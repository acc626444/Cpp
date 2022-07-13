#pragma once
#include "player.h"
class enemy:public character{
	public:
	enemy (string enteredName, string enteredDescription):character (enteredName, enteredDescription){};
	void fight (character* other);
	bool isAlive();
	void setStats (int level);
};

