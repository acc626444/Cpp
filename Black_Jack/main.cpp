#include "card_hands.h"
#include <time.h>
int main() {
	srand(time(0));
	bool start = true;
	Deck d;
	d.shuffle();
	card_hands name(&d);
	card_hands name2(&d);
	cout << "player 1" << endl;
	while (start && name.hand_value() < 21) {
		name.print_hand();
		cout << "hit or stay" << endl;
		string a;
		cin >> a;
		if (a == "hit") {
			name.draw();

		}
		else if (a == "stay") {
			start = false;
		}
		else {
			cout << "try again" << endl;
		}
	}
	if (name.hand_value() > 21) {
		name.print_hand();
		cout << endl;
		cout << "BUSTED!!!" << endl;
	}
	if (name.hand_value() == 21) {
		cout << "BLACK JACK!!" << endl;
	}
	cout << endl;
	cout << endl;
	cout << "dealer" << endl;
	bool start2 = true;
	while (start2 && name2.hand_value() < 21) {
		name2.print_hand();
		if (name2.hand_value() < 17) {
			cout << endl;
			cout << endl;
			name2.draw();
		}
		else {
			start2 = false;
		}
	}
	if (name2.hand_value() > 21) {
		name2.print_hand();
		cout << endl;
		cout << "BUSTED!!!" << endl;
	}
	if (name2.hand_value() == 21) {
		cout << "BLACK JACK!!" << endl;
	}
	if (name.hand_value() <= 21 && name2.hand_value() > 21 || name.hand_value() <= 21 && name2.hand_value() > 21) {
		cout << "player 1 wins!!" << endl;
	}
	else if (name2.hand_value() > name.hand_value() || name.hand_value() > 21 || name.hand_value() > 21 && name2.hand_value() > 21) {
		cout << "Dealer wins!!!" << endl;
	}
	else if (name.hand_value() > name2.hand_value()) {
		cout << "Player 1 wins!!" << endl;
	}
	else {
		cout << "tie" << endl;
	}
}