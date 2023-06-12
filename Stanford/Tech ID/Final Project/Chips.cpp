#pragma once
#include "Chips.h"

/*
	string coin[14] = { "White", "Yellow", "Pink", "Red", "Bleu", "Grey", "Green", "Orange", "Black", "Pink2", "Purple", "Burgundy", "Light Blue", "Brown" };
	int value[14] = { 1, 2, 2.5, 5, 10, 20, 25, 50, 100, 250, 500, 1000, 2000, 5000 };
*/

Chips::Chips(int v, string c){
	colour = c;
	value = v;
}

Chips::Chips(){
	colour = "";
	value = 0;
}

int Chips::getValue(){
	return value;
}

string Chips::getColour(){
	return colour;
}

void Chips::printChips(sf::RenderWindow& w, float positionX){
	//if (getValue() == 1) {
	//	txture.load
	//}
}
