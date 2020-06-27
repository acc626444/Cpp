#include "Deck.h"
Deck::Deck() {
	string suits[4] = { "diamod", "spade", "heart", "club" };
	int value[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	for (int a = 0; a < 4; a++) {
		for (int a1 = 0; a1 < 13; a1++) {
			Card s(value[a1], suits[a]);
			cards[(a * 13) + a1] = s;
		}
	}
}
void Deck::print_Deck() {
	for (int a = 0; a < 52; a++) {
		cards[a].print_card();
	}
}
void Deck::shuffle() {
	for (int a = 0; a < 52; a++) {
		int i = rand() % 52;
		Card q;
		q = cards[a];
		cards[a] = cards[i];
		cards[i] = q;
	}
}