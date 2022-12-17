#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

class Button {
public:
	Button() {}

	Button(sf::String t, sf::Vector2f size, int charSize, sf::Color bgColour, sf::Color textColour) {
		text.setString(t);
		text.setColor(textColour);
		text.setCharacterSize(charSize);
		button.setSize(size);
		button.setFillColor(bgColour);

	}
	void setFont(sf::Font& font) {
		text.setFont(font);
	}

	void BackColour(sf::Color colour) {
		button.setFillColor(colour);
	}
	void TextColour(sf::Color colour) {
		text.setFillColor(colour);
	}

	void position(sf::Vector2f pos) {
		button.setPosition(pos);
		float x = ((pos.x + button.getGlobalBounds().width / 2) - (text.getGlobalBounds().width / 2));
		float y = ((pos.y + button.getGlobalBounds().height / 2) - (text.getGlobalBounds().height / 2));
		text.setPosition({x, y});
	}

	void drawTo(sf::RenderWindow& window) {
		window.draw(button);
		window.draw(text);
	}

	bool mouseOver(sf::RenderWindow& window) {
		int mouseX = sf::Mouse::getPosition(window).x;

	}
private:
	sf::RectangleShape button;
	sf::Text text;
};
