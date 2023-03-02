#pragma once
#include "Hand.h"
/*************************************************************************|
*										NOTES							  |
* ________________________________________________________________________|
*			CODE						  |						MEANING	  |
*_________________________________________|_______________________________|
* 1)			 .push_back				  |			It is used for pushing|
*										  |			elements from the back|
*										  |			of the vector		  |
*										  |								  |
* ex.									  |			takes what's in_hand  |
										  |				and puts it at    |
*in_hand.push_back ((*from_deck).Draw ());|			the bottom of the deck|
*										  |								  |
*										  |								  |
*_________________________________________|_______________________________|
*										  |								  |
*										  |			take an argument that |
*										  |			is a reference to a	  |
* 2)			 .operator[]			  |function object and an argument|
*										  |that is a null pointer constant|
*										  |								  |
* ex.									  |								  |
*										  |								  |
*		inHand.operator[]				  |			for every card printed|
*	(playcards).printCard();			  |				 to the hand	  |
*										  |			   in index of player |
*										  |								  |
**************************************************************************/

Hand::Hand (Deck* d){
	fromdeck = d;
	inHand.push_back ((*fromdeck).Draw ());
}

void Hand::printHand (sf::RenderWindow& w){
	for(int place = 0; place < inHand.size (); place++){
		inHand.operator[](place).printCard (w, place);
		//w.display();
	}
}

void Hand::Draw (){
	inHand.push_back ((*fromdeck).Draw ());

}

int Hand::handValue (){
	int points = 0;
	int point = 0;
	for(int cARD = 0; cARD < inHand.size (); cARD++){
		//if card is a Jack, give 10 points
		if(inHand.operator[](cARD).getValue () == 11){
			points += 10;
		}
		//if card is a Queen, give 10 points
		else if(inHand.operator[](cARD).getValue () == 12){
			points += 10;
		}
		//if card is a King, give 10 points
		else if(inHand.operator[](cARD).getValue () == 13){
			points += 10;
		}
		//if card is a Ace, give 11 points or 1 point
		else if(inHand.operator[](cARD).getValue () == 1){
			points += 11;
			point += 1;
		}
		//otherwies just give the value of the card
		else{
			points += inHand.operator[](cARD).getValue ();
		}
	}
	//if Ace is drawn and the total is more than 21, make the Ace a 1
	if(point > 0 && points > 21){
		points -= 10;
	}
	return points;
}

vector <Card> Hand :: restValue() {
	inHand.clear();
	return inHand;
 }
//vector <Card> Hand :: whole