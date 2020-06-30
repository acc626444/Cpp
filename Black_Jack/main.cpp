#include "Card.h"
#include "Deck.h"
#include "card_hands.h"
#include <time.h>
int main() {
	srand(time(0));
	bool start = true;
	Deck d;
	d.shuffle();
	card_hands name(d);
	while (start&& name.hand_value() < 21) {
		name.print_hand();
		cout << "hit or stay" << endl;
		string a;
		cin >> a;
		 if (a == "hit") {
			name.draw();
		}
		else {
			start = false;
		}
	}
}