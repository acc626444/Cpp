#include "Card.h"

Card::Card (int v, string s){
	suit = s;
	value = v;

}
Card::Card (){
	suit = "";
	value = 0;
}
int Card::getValue (){
	return value;
}
string Card::getSuit (){
	return suit;

}
void Card::printCard (){
	//if Jack, print Jack of 'suit'
	if(value == 11){
		//other.getString ("the J of");
		//_suit_.setString (suit);

		cout << "the " << "J" << " " << "of " << getSuit () << "s" << endl;
	}
	//if Jack, print Queen of 'suit'
	else if(value == 12){
		cout << "the " << "Q" << " " << "of " << getSuit () << "s" << endl;
	}
	else if(value == 13){
		//if Jack, print King of 'suit'
		cout << "the " << "K " << "of " << getSuit () << "s" << endl;
	}
	else if(value == 1){
		//if Jack, print Ace of 'suit'
		cout << "the " << "A" << " " << "of " << getSuit () << "s" << endl;
	}
	//print 'card#' and 'suit'
	else{
		cout << "the " << getValue () << " " << "of " << getSuit () << "s" << endl;
	}
}
