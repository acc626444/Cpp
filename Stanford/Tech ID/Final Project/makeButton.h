#pragma once
#include "Hand.cpp"
sf::Font font;

void Hit (sf::RenderWindow& w){
	sf::Text txt;
	font.loadFromFile ("japanese-style-font/JapaneseStyle-rmX7.ttf");
	sf::RectangleShape rect;
	rect.setSize (sf::Vector2f (100, 50));
	rect.setOutlineThickness (5);
	rect.setPosition (0, 750);
	w.draw (rect);
	txt.setFont (font);
	txt.setString ("hit");
	txt.setPosition (10, 740);
	txt.setCharacterSize (50);
	txt.setFillColor (sf::Color::Red);
	w.draw (txt);
}

void Stay (sf::RenderWindow& w){
	sf::Text txt;
	font.loadFromFile ("japanese-style-font/JapaneseStyle-rmX7.ttf");
	sf::RectangleShape rect;
	rect.setSize (sf::Vector2f (130, 50));
	rect.setOutlineThickness (5);
	rect.setPosition (1465, 750);
	w.draw (rect);
	txt.setFont (font);
	txt.setString ("stay");
	txt.setPosition (1470, 740);
	txt.setCharacterSize (50);
	txt.setFillColor (sf::Color::Red);
	w.draw (txt);
}