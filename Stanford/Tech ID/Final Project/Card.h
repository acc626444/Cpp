#pragma once
#include"SFML_stuff.h"
class Card{
	private:
	int value;
	string suit;
	public:
	sf::Font font;
	sf::Text _val_;
	sf::Text _suit_;
	sf::Text other;
	sf::Text other1;
	sf::Text other2;
	Card (int v, string s);
	Card ();
	int getValue ();
	string getSuit ();
	void printCard (sf::RenderWindow& window, sf::Text txt);
};

