#include "card_hands.h"

card_hands::card_hands(Deck d) {
	from_deck = d;
	in_hand[0]=from_deck.draw();
	in_hand[1] = from_deck.draw();
}

void card_hands::print_hand() {
	for (int a = 0; a < 2; a++) {
		in_hand[a].print_card();
	}
}
