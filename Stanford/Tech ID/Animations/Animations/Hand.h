#pragma once
#include "Deck.cpp"
class Hand{
private:
	vector < Card > inHand;
	Deck* fromDeck;
	public:
	Hand (Deck* d);
	void printHand ();
	void draw ();
	int handValue ();
};

