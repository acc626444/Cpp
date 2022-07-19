#pragma once
#include "Deck.cpp"
class card_hands {
private:
	vector <Card> in_hand;
	Deck *from_deck;
public:
 card_hands(Deck *d);
	void print_hand();
	void draw();
	int hand_value();
};