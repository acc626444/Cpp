#pragma once
#include "makeButton.h"
sf::Text player;
sf::Text Dealer;


int player1(Hand p1, bool start, sf::RenderWindow& w, sf::Event& event) {
	font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
	player.setFont(font);
	player.setString("Player 1");
	player.setPosition(600, 0);
	player.setCharacterSize(100);
	sf::Color pinkish(255, 25, 255);
	player.setFillColor(pinkish);
	w.draw(player);
	w.display();
	while (start && p1.handValue() < 21) {
		while (w.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				w.close();
				exit(0);
			}
			p1.printHand(w);
			w.draw(player);
			Hit(w);
			Stay(w);
			switch (w.pollEvent(event)) {
			case sf::Event::MouseMoved:
				if(hit.)
			}

			w.display();
			//lost
			if (p1.handValue() > 21) {
				cout << endl;
				cout << "BUSTED!!!" << endl;
				w.clear();
			}
			//win
			if (p1.handValue() == 21) {
				p1.printHand(w);
				w.display();
				cout << "BLACK JACK!!" << endl;
			}
			w.clear();
		}
	}
}



void dealer1(Hand dealer, bool start, sf::RenderWindow& w) {
	font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
	Dealer.setFont(font);
	Dealer.setString("Dealer");
	Dealer.setPosition(600, 0);
	Dealer.setCharacterSize(100);
	Dealer.setFillColor(sf::Color::Yellow);
	w.draw(Dealer);
	while (start && dealer.handValue() < 21) {
		dealer.printHand(w);
		w.draw(Dealer);
		Hit(w);
		Stay(w);
		w.display();
		cout << "hit or stay" << endl;
		string a;
		cin >> a;
		if (a == "hit") {
			dealer.Draw();
		}
		else if (a == "stay") {
			start = false;
		}
		else {
			cout << "try again" << endl;
		}
	}
	//lost
	if (dealer.handValue() > 21) {
		dealer.printHand(w);
		cout << endl;
		cout << "BUSTED!!!" << endl;
		w.clear();
	}
	//win
	if (dealer.handValue() == 21) {
		w.display();
		cout << "BLACK JACK!!" << endl;
		w.clear();
	}
	w.clear();
}
