#pragma once
#include "EndConditions.h"

bool continu(Hand& p1, Hand& p2, sf::RenderWindow& w, bool& game) {
	sf::Text question;
	sf::Event event3;
	font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
	question.setFont(font);
	question.setString("Do you want to try again?");
	question.setPosition(300, 0);
	question.setCharacterSize(100);
	question.setFillColor(sf::Color::Blue);
	w.draw(question);
	Button yes("YES", { 150,59 }, 60, sf::Color::Red, sf::Color::White);
	font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
	yes.Font(font);
	yes.position({ 0, 740 });
	Button no("NO", { 150, 60 }, 60, sf::Color::Red, sf::Color::Red);
	font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
	no.Font(font);
	no.TextColour(sf::Color::White);
	no.position({ 1450, 740 });
	while (game == false && !(p1.handValue() == 0) && !(p2.handValue() == 0)) {
		while (w.pollEvent(event3)) {
			switch (event3.type) {
			case sf::Event::Closed:
				w.close();
				exit(0);
			case sf::Event::MouseMoved:
				if (yes.mouseOver(w)) {
					sf::sleep(sf::milliseconds(2));
					yes.BackColour(sf::Color::Blue);
					yes.TextColour(sf::Color::Yellow);
				}
				if (no.mouseOver(w)) {
					sf::sleep(sf::milliseconds(2));
					no.BackColour(sf::Color::Blue);
					no.TextColour(sf::Color::Yellow);
				}
				if (!(yes.mouseOver(w))) {
					sf::sleep(sf::milliseconds(2));
					yes.BackColour(sf::Color::Red);
					yes.TextColour(sf::Color::White);
				}
				if (!(no.mouseOver(w))) {
					sf::sleep(sf::milliseconds(2));
					no.BackColour(sf::Color::Red);
					no.TextColour(sf::Color::White);

				}
			case sf::Event::MouseButtonPressed:
				if (yes.mouseOver(w) && sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
					p1.restValue();
					p1.printHand(w);
					w.display();
					game = true;
					return game;
				}
				if (no.mouseOver(w) && sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
					game = false;
					return game;
				}
			}
			w.clear();
			p1.printHand(w);
			w.draw(question);
			yes.drawTo(w);
			no.drawTo(w);
			w.display();
		}
	}
}