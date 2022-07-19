#pragma once
#include "Deck.cpp"
class Hand{
	private:
	vector <Card> inHand;
	Deck* fromdeck;
	public:
	Hand (Deck* d);
	void printHand ();
	void Draw ();
	int handValue ();

};

