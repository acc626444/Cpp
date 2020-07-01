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
	int s = 0;
	int b = 0;
	for (int a = 0; a < in_hand.size(); a++) {
		if (in_hand.operator[](a).get_value() == 11) {
			s += 10;
		}
		else if (in_hand.operator[](a).get_value() == 12) {
			s += 10;
		}
		else if (in_hand.operator[](a).get_value() == 13) {
			s += 10;
		}
		else if (in_hand.operator[](a).get_value() == 1) {
			s += 11;
			b += 1;
		}
		else {
			s += in_hand.operator[](a).get_value();
		}
	}
	if (b > 0 && s > 21) {
		s -= 10;
	}
	return s;
}
