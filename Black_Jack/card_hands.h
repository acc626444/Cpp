#pragma once
#include "Deck.h"
class card_hands {
private:
	Card in_hand[2];
	Deck from_deck;
public:
	card_hands(Deck d);
	void print_hand();
};

