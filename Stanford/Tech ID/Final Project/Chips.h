#pragma once
#include "Card.cpp"
class Chips {
private:
	int value;
	string colour;
	sf::Texture txture;
	sf::Sprite chip;
public:
	Chip(int v, string c);
	Chip();
	int getValue();
	string getColour();
	void printChips(sf::RenderWindow &w, float positionX);
};

