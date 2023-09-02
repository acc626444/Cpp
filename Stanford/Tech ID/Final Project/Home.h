#pragma once
#include "Again.h"

void PlayButton(sf::RenderWindow& w) {
	bool game = true;
	while (game) {
		srand(time(0));
		Deck d;
		d.Shuffle();
		Hand name(&d);
		Hand name2(&d);
		player1(name, w);
		dealer1(name2, w);
		EndCondition(name, name2, w);
		sf::sleep(sf::seconds(1));
		game = false;
		game = continu(name, name2, w, game);
	}
}
void home(sf::RenderWindow& w) {
	sf::Font buttonFont;
	sf::Text Home;
	sf::Text play;
	sf::Event event;
	font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
	Home.setFont(font);
	Home.setString("BLACKJACK");
	Home.setPosition(400, -50);
	Home.setCharacterSize(200);
	sf::Color pinkish(55, 25, 255);

	Button Play("Start", { 150, 59 }, 60, sf::Color::Transparent, pinkish);
	buttonFont.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
	Play.Font(buttonFont);
	Play.position({ 725, 270 });
	while (true) {
		while (w.pollEvent(event)) {
			switch (event.type) {
			case sf::Event::Closed:
				w.close();
				exit(0);

				case sf::Event::MouseMoved:
					if (Play.mouseOver(w)) {
						sf::sleep(sf::milliseconds(2));
						Play.TextColour(sf::Color::Green);
					}
					if (!(Play.mouseOver(w))) {
						sf::sleep(sf::milliseconds(2));
						Play.TextColour(pinkish);
					}
				case sf::Event::MouseButtonPressed:
					if (Play.mouseOver(w) && sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
						PlayButton(w);
					}
			}
			
		w.clear();
		w.clear(sf::Color::Red);
		w.draw(Home);
		Play.drawTo(w);
		w.display();
	}
	}
}

