#pragma once
#include<iostream>
#include<vector>
#include<stdlib.h>
#include<sstream>
#include <time.h>
#include <SFML/Graphics.hpp>
#include "SFML/Graphics/Text.hpp"
using namespace std;
class Card{
	private:
	int value;
	string suit;
	sf::Texture txture;
	sf::Sprite card;
	public:
	Card (int v, string s);
	Card ();
	int getValue ();
	string getSuit ();
	void printCard (sf::RenderWindow &w, float positionX);
};

