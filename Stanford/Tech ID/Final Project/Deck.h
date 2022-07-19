#pragma once
#include "Card.cpp"
class Deck{
	private:
	Card cards[52];
	int c;
	public:
	Deck ();
	void printDeck ();
	void Shuffle ();
	Card Draw ();
};

