#include "Card.h"
#include "Deck.h"
#include "card_hands.h"
int main() {
	Deck d;
	d.shuffle();
	card_hands name(d);
	name.print_hand();
	name.print_hand();
	cout << "hit or stay" << endl;
	string a;
	cin >> a;
	if (a == "yes") {
		name.print_hand();
		//add card
	}
}