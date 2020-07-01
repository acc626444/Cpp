#pragma once
#include "Deck.h"
class card_hands {
private:
	vector <Card> in_hand;
	Deck from_deck;
public:
	card_hands(Deck d);
	void print_hand();
	void draw();
	int hand_value();
};