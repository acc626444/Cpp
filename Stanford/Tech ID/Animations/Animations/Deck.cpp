#include "Deck.h"
Deck::Deck(){
	c = 0;
	string suits[4] = {"Diamond", "Spade","Heart","Club"};
	int value[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
	for(int Suit = 0; Suit < 4; Suit++){
		for(int val = 0; val < 13; val++){
			Card s(value[val], suits[Suit]);
			cards[(Suit * 13) + val] = s;
		}
	}
}
void Deck::printDeck(){
	for(int card = 0; card < 51; card++){
		cards[card].printCard();
	}
}
void Deck::shuffle(){
	c = 0;
	for(int card = 0; card < 51; card++){
		int index = rand() % 52;
		Card hand;
		hand = cards[card];
		cards[card] = cards[index];
		cards[index] = hand;
	}
}
Card Deck::draw(){
	Card hand = cards[c];
	c++;
	return hand;
}