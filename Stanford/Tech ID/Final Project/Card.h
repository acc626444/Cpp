#pragma once
#include"SFML_stuff.h"
class Card{
	private:
	int value;
	string suit;
	public:
	Card (int v, string s);
	Card ();
	int getValue ();
	string getSuit ();
	void printCard ();
};

