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
		float X = ((pos.x + button.getLocalBounds().width / 2) - (text.getGlobalBounds().width / 2));
		float Y = ((pos.y + button.getLocalBounds().height / 2) - (text.getGlobalBounds().height / 2));
		text.setPosition({X, Y});
	}

	void drawTo(sf::RenderWindow& window) {
		window.draw(button);
		window.draw(text);
	}

	bool mouseOver(sf::RenderWindow& window) {
		float mouseX = sf::Mouse::getPosition(window).x;
		float mouseY = sf::Mouse::getPosition(window).y;

		float X = button.getPosition().x;
		float Y = button.getPosition().y;

		float X_Width = 
	}
private:
	sf::RectangleShape button;
	sf::Text text;
};
