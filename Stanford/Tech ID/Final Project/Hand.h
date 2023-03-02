#pragma once
#include "Deck.cpp"
class Hand{
	private:
	vector <Card> inHand;
	Deck* fromdeck;
	sf::Sprite deck;
	public:
	Hand (Deck* d);
	void printHand (sf::RenderWindow& w);
	void Draw ();
	int handValue ();

	vector <Card> restValue();

};

