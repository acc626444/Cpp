#pragma once
#include "Card.h"
Card::Card(int v, string s) {
	suit = s;
	value = v;

}
Card::Card() {
	suit = "";
	value = 0;
}
int Card::get_value() {
	return value;
}
string Card::get_suit() {
	return suit;

}
void Card::print_card() {
	if (value==11) {
		cout << "the " << "J" << " " << "of " << get_suit() << "s" << endl;
	}
	else if (value==12) {
		cout << "the " << "Q" << " " << "of " << get_suit() << "s" << endl;
	}
	else if (value==13) {
		cout << "the " << "K " << "of " << get_suit() << "s" << endl;
	}
	else if (value==1) {
		cout << "the " << "A" << " " << "of " << get_suit() << "s" << endl;
	}
	else {
		cout << "the " << get_value() << " " << "of " << get_suit() << "s" << endl;
	}
}