#pragma once
#include "Button.h"
sf::Font font;

void Hit (sf::RenderWindow& w){
	Button hit("Hit", { 150,59 }, 60, sf::Color::Red, sf::Color::Red);
	font.loadFromFile ("japanese-style-font/JapaneseStyle-rmX7.ttf");
	hit.Font(font);
	hit.TextColour(sf::Color::White);
	hit.position({ 0, 740 });
	hit.drawTo(w);

}

void Stay (sf::RenderWindow& w){
	Button stay("Stay", { 150, 60 }, 60, sf::Color::Red, sf::Color::Red);
	font.loadFromFile ("japanese-style-font/JapaneseStyle-rmX7.ttf");
	stay.Font(font);
	stay.TextColour(sf::Color::White);
	stay.position({ 1450, 740 });
	stay.drawTo(w);
}