#pragma once
#include "Hand.cpp"
#define DELETE_KEY 8
#define ENTER_KEY 13
#define ESCAPE_KEY 27
class Textbox {
public:
	Textbox() {}
	Textbox(int size, sf::Color colour, bool state) {
		textbox.setCharacterSize(size);
		textbox.setColor(colour);
		selected = state;
		if (state) {
			textbox.setString("_");
		}
		else {
			textbox.setString("");
		}
	}
	void Font(sf::Font& font) {
		textbox.setFont(font);
	}
	void Position(sf::Vector2f pos) {
		textbox.setPosition(pos);
	}
	void Limit(bool trueORfalse) {
		hasLimit = trueORfalse;
	}
	void Limit(bool trueORfalse, int lim) {
		hasLimit = trueORfalse;
		limit = lim;
	}
	void Selected(bool state) {
		selected = state;
		if (!state) {
			string t = text.str();
			string newT = "";
			for (int i = 0; i < t.length() - 1; i++) {
				newT += t[i];
			}
			textbox.setString(newT);
		}
	}
	string getText() {
		return text.str();
	}
	void drawTo(sf::RenderWindow& window) {
		window.draw(textbox);
	}
	void typeON(sf::Event& input) {
		if (selected) {
			int charTyped = input.text.unicode;
			if (charTyped < 128) {
				if (hasLimit) {
					if (text.str().length() <= limit) {
						inputLogic(charTyped);
					}
					else if (text.str().length() > limit && charTyped == DELETE_KEY) {
						deleteLastChar();

					}
				}
				else {
					inputLogic(charTyped);
				}
			}
		}
	}
private:
	sf::Text textbox;
	std::ostringstream text;
	bool selected = false;
	bool hasLimit = false;
	int limit;

	void inputLogic(int charTyped) {
		if (charTyped != DELETE_KEY && charTyped != ENTER_KEY && charTyped != ESCAPE_KEY) {
			text << static_cast<char>(charTyped);
		}
		else if (charTyped == DELETE_KEY) {
			if (text.str().length() > 0) {
				deleteLastChar();
			}
		}
		textbox.setString(text.str() + "_");
	}
	void deleteLastChar() {
		string t = text.str();
		string newT = "";
		for (int i = 0; i < t.length() - 1; i++) {
			newT += t[i];
		}
		text.str("");
		text << newT;
		textbox.setString(text.str());

	}
};