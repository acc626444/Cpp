#include "Card.h"
Card::Card(int v, string s){
	suit = s;
	value = v;
}
Card::Card(){
	suit = "";
	value = 0;
}
int Card::getValue(){
	return value;
}
string Card::getSuit(){
	return suit;
}
void Card::printCard(){
	if(value == 11){
		cout << "the " << "J" << " " << "of " << getSuit() << "s" << endl;
	}
	else if(value == 12){
		cout << "the " << "Q" << " " << "of " << getSuit() << "s" << endl;
	}
	else if(value == 13){
		cout << "the " << "K " << "of " << getSuit() << "s" << endl;
	}
	else if(value == 1){
		cout << "the " << "A" << " " << "of " << getSuit() << "s" << endl;
	}
	else{
		cout << "the " << getValue() << " " << "of " << getSuit() << "s" << endl;
	}
}