#pragma once
#include "Chips.cpp"
class Deck{
	private:
	Card cards[52];
	int c;
	public:
	Deck ();
	void printDeck (sf::RenderWindow& w);
	void Shuffle ();
	Card Draw ();
};

