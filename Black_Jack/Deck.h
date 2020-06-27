#pragma once
#include "Card.h"
class Deck {
private:
	Card cards[52];
public:
	Deck();
	void print_Deck();
	void shuffle();
};