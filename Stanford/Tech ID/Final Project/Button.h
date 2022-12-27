#pragma once
#include "EndConditions.h"

//#include <iostream>
//#include <SFML/Graphics.hpp>

class Button {
public:
	Button() { }

	Button(std::string t, sf::Vector2f size, int charSize, sf::Color bgColour, sf::Color textColour) {
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
		text.setColor(colour);
	}
	void position(sf::Vector2f pos) {
		button.setPosition(pos);

		float X = (pos.x + button.getLocalBounds().width / 2) - (text.getLocalBounds().width / 2);
		float Y = (pos.y + button.getLocalBounds().height / 2) - (text.getLocalBounds().height / 2);
		text.setPosition({ X, Y });
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

		float X_Width = button.getPosition().x + button.getLocalBounds().width;
		float Y_Height = button.getPosition().y + button.getLocalBounds().height;

		if (mouseX < X_Width && mouseX > X && mouseY < Y_Height && mouseY > Y) {
			return true;
		}
		return false;
	}
private:
	sf::RectangleShape button;
	sf::Text text;
};
