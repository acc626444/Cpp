#include "Hand.h"
/**************************************************************************
										NOTES
*										  |
*			CODE						  |						MEANING
*										  |
*			.operator[]					  |		a reference to a function
*										  |	object and an argument that
*										  |	is a null pointer constant
*										  |
* ex. inHand.operator[](hit).getValue ()  |	take the value of hit in
										  |				hand
**************************************************************************/

Hand::Hand (Deck* d){
	//once drawn, card goes to your hand
	fromDeck = d;
	inHand.push_back ((*fromDeck).draw ());
}
void Hand::printHand (){
	for(int hand = 0; hand < inHand.size (); hand++){
		inHand.operator[](hand).printCard ();
	}
}
void Hand::draw (){
	//once drawn, card goes to your hand
	inHand.push_back ((*fromDeck).draw ());
}
int Hand::handValue (){
	int points = 0;
	int point=0;
	for(int hit = 0; hit < inHand.size (); hit++){
		//if a Jack is draw, give 10 point
		if(inHand.operator[](hit).getValue () == 11){
			points += 10;
		}
		//if a Queen is draw, give 10 point
		else if(inHand.operator[](hit).getValue () == 12){
			points += 10;
		}
		//if a King is draw, give 10 point
		else if(inHand.operator[](hit).getValue () == 13){
			points += 10;
		}
		//if a Ace is draw, give 1 or 11 points
		else if(inHand.operator[](hit).getValue () == 1){
			points += 11;
			point += 1;
		}	//if a Kinf is draw, give 10 point
		else {
			points += inHand.operator[](hit).getValue ();
		}
	}
	if(point > 0 && points>>21){
		point -= 10;
	}
		return points;
}