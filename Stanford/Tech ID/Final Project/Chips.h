#pragma once
#include "Card.cpp"
class Chips {
private:
	int value;
	string colour;
	sf::Texture txture;
	sf::Sprite chip;
public:
	Chips(int v, string c);
	Chips();
	int getValue();
	string getColour();
	void printChips(sf::RenderWindow &w, float positionX);
};

