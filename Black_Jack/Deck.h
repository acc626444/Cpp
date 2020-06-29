#pragma once
#include "Card.h"
class Deck {
private:
	Card cards[52];
	int c;
public:
	Deck();
	void print_Deck();
	void shuffle();
	Card draw();
};