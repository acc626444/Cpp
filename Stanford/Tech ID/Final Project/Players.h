//#pragma once
#include "Button.h"
sf::Text player;
sf::Text Dealer;
sf::Font font;

void player1(Hand& p1, sf::RenderWindow& w) {
	bool start = true;
	sf::Event event;
	font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
	player.setFont(font);
	player.setString("Player 1");
	player.setPosition(600, 0);
	player.setCharacterSize(100);
	sf::Color pinkish(255, 25, 255);
	player.setFillColor(pinkish);
	w.draw(player);
	w.display();
	Button hit("Hit", { 150,59 }, 60, sf::Color::Red, sf::Color::White);
	font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
	hit.Font(font);
	hit.position({ 0, 740 });
	Button stay("Stay", { 150, 60 }, 60, sf::Color::Red, sf::Color::Red);
	font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
	stay.Font(font);
	stay.TextColour(sf::Color::White);
	stay.position({ 1450, 740 });
	while (start && p1.handValue() < 21) {
		while (w.pollEvent(event)) {
			switch (event.type) {
			case sf::Event::Closed:
				w.close();
				exit(0);
			case sf::Event::MouseMoved:
				if (hit.mouseOver(w)) {
					sf::sleep(sf::milliseconds(2));
					hit.BackColour(sf::Color::Blue);
					hit.TextColour(sf::Color::Yellow);
				}
				if (stay.mouseOver(w)) {
					sf::sleep(sf::milliseconds(2));
					stay.BackColour(sf::Color::Blue);
					stay.TextColour(sf::Color::Yellow);
				}
				if (!(hit.mouseOver(w))) {
					sf::sleep(sf::milliseconds(2));
					hit.BackColour(sf::Color::Red);
					hit.TextColour(sf::Color::White);
				}
				if (!(stay.mouseOver(w))) {
					sf::sleep(sf::milliseconds(100));
					stay.BackColour(sf::Color::Red);
					stay.TextColour(sf::Color::White);

				}
			case sf::Event::MouseButtonPressed:
				if (hit.mouseOver(w) && sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
					p1.Draw();
				}
				if (stay.mouseOver(w) && sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
					//w.clear();
					start = false;
					w.clear();
					break;
				}
				//lost
				if (p1.handValue() > 21) {
					font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
					Button lose("BUSTED!!!", { 800, 200 }, 200, sf::Color::White, sf::Color::Red);
					lose.Font(font);
					lose.position({ 300, 120 });
					//w.draw(player);
					lose.drawTo(w);
					p1.printHand(w);
					w.display();
					sf::sleep(sf::milliseconds(500));
					w.clear();
					start = false;
					break;
				}
				//win
				else if (p1.handValue() == 21) {
					font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
					Button win("BLACK JACK!!!", { 800, 200 }, 150, sf::Color::White, sf::Color::Green);
					win.Font(font);
					win.position({ 300, 120 });
					//w.draw(player);
					win.drawTo(w);
					p1.printHand(w);
					w.display();
					sf::sleep(sf::milliseconds(500));
					w.clear();
					start = false;
					break;
				}
			}
			w.clear();
			hit.drawTo(w);
			stay.drawTo(w);
			p1.printHand(w);
			w.draw(player);
			w.display();
		}
	}
	w.clear();
}

void dealer1(Hand& dealer, sf::RenderWindow& w) {
	sf::Event event2;
	font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
	Dealer.setFont(font);
	Dealer.setString("Dealer");
	Dealer.setPosition(600, 0);
	Dealer.setCharacterSize(100);
	Dealer.setFillColor(sf::Color::Yellow);
	w.draw(Dealer);
	w.display();
	bool u = true;
	while (dealer.handValue() < 21 && u == true) {
		while (w.pollEvent(event2)) {
			if (event2.type == sf::Event::Closed) {
				w.close();
				exit(0);
			}
			//lost
			if (dealer.handValue() > 21) {
				font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
				Button lose("BUSTED!!!", { 800, 200 }, 200, sf::Color::White, sf::Color::Red);
				lose.Font(font);
				lose.position({ 300, 120 });
				//w.draw(Dealer);
				lose.drawTo(w);
				dealer.printHand(w);
				w.display();
				sf::sleep(sf::milliseconds(900));
				w.clear();
				u = false;
				break;
			}
			//win
			else if (dealer.handValue() == 21) {
				font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
				Button win("BLACK JACK!!!", { 800, 200 }, 150, sf::Color::White, sf::Color::Green);
				win.Font(font);
				win.position({ 300, 120 });
				//w.draw(Dealer);
				win.drawTo(w);
				dealer.printHand(w);
				w.display();
				sf::sleep(sf::milliseconds(900));
				w.clear();
				u = false;
				break;
			}
			else if (dealer.handValue() >= 17 && dealer.handValue()<21) {
				w.clear();
				dealer.printHand(w);
				//w.draw(Dealer);
				w.display();
				dealer.Draw();
				sf::sleep(sf::milliseconds(200));
				w.clear();
				u = false;
				break;
			}
			else {
				w.clear();
				dealer.printHand(w);
				//w.draw(Dealer);
				w.display();
				dealer.Draw();
				sf::sleep(sf::milliseconds(200));
				//break;
			}
		}
	}
	//w.clear();
}
