#pragma once
#include "EndConditions.h"

//bool continu(Hand p1, Hand p2, sf::RenderWindow& w, bool game) {
//	bool start2 = true;
//	sf::Text question;
//	sf::Event event3;
//	font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
//	question.setFont(font);
//	question.setString("Do you want to try again?");
//	question.setPosition(600, 0);
//	question.setCharacterSize(100);
//	question.setFillColor(sf::Color::Blue);
//	w.draw(question);
//	Button yes("YES", { 150,59 }, 60, sf::Color::Red, sf::Color::White);
//	font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
//	yes.Font(font);
//	yes.position({ 0, 740 });
//	Button no("NO", { 150, 60 }, 60, sf::Color::Red, sf::Color::Red);
//	font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
//	no.Font(font);
//	no.TextColour(sf::Color::White);
//	no.position({ 1450, 740 });
//	w.clear();
//	yes.drawTo(w);
//	no.drawTo(w);
//	w.draw(player);
//	w.display();
//	while (w.pollEvent(event3)) {
//		switch (event3.type) {
//		case sf::Event::Closed:
//			w.close();
//			exit(0);
//		case sf::Event::MouseButtonPressed:
//			if (yes.mouseOver(w) && sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
//				p1.handValue() = 0;
//				p2.handValue() = 0;
//				game = true;
//				return game;
//			}
//			if (no.mouseOver(w) && sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
//				game = false;
//				return game;
//			}
//		}
//		w.clear();
//		yes.drawTo(w);
//		no.drawTo(w);
//		w.draw(player);
//		w.display();
//	}
//	return game;
//}