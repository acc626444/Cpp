#pragma once
#include<iostream>
#include<vector>
#include<stdlib.h>
#include <SFML/Graphics.hpp>
using namespace std;
class Card{
	private:
	int value;
	string suit;
	public:
	Card (int v, string s);
	Card ();
	int getValue ();
	string getSuit ();
	void printCard (sf::RenderWindow& window, sf::Text txt);
};

