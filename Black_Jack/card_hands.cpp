#include "card_hands.h"
card_hands::card_hands(Deck d) {
	from_deck = d;
	in_hand.push_back(from_deck.draw());
	in_hand.push_back(from_deck.draw());
}
void card_hands::print_hand() {
	for (int a = 0; a < in_hand.size(); a++) {
		in_hand.operator[](a).print_card();
	}
}
void card_hands::draw() {
	in_hand.push_back(from_deck.draw());
}
int card_hands::hand_value() {
	int s=0;
	for (int a = 0; a < in_hand.size(); a++) {
		s += in_hand.operator[](a).get_value();
	}
	return s;
}
