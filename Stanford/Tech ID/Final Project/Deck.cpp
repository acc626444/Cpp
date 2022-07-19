#include "Deck.h"

Deck::Deck (){
	c = 0;
	string suits[4] = {"Diamond", "Spade", "Heart", "Club"};
	int values[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
	for(int sUIT = 0; sUIT < 4; sUIT++){
		for(int val = 0; val < 13; val++){
			Card cARD (values[val], suits[sUIT]);
			cards[(sUIT * 13) + val] = cARD;
		}
	}
}

void Deck::printDeck (){
	for(int deck = 0; deck < 52; deck++){
		cards[deck].printCard ();
	}
}

void Deck::Shuffle (){
	c = 0;
	for(int deck = 0; deck < 52; deck++){
		int index = rand () % 52;
		Card packet;
		packet = cards[deck];
		cards[deck] = cards[index];
		cards[index] = packet;
	}
}

Card Deck::Draw (){
	Card deck = cards[c];
	c++;
	return deck;
}
