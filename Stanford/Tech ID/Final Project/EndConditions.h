#pragma once
#include "Players.h"

void  EndCondition(Hand p1, Hand p2, sf::RenderWindow& w) {
	font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
	player.setFont(font);
	player.setString("Player 1");
	player.setPosition(600, 0);
	player.setCharacterSize(100);
	sf::Color pinkish(255, 25, 255);
	player.setFillColor(pinkish);

	font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
	Dealer.setFont(font);
	Dealer.setString("Dealer");
	Dealer.setPosition(600, 0);
	Dealer.setCharacterSize(100);
	Dealer.setFillColor(sf::Color::Yellow);


	font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
	Button win("Player 1 Wins!!!", { 800, 200 }, 100, sf::Color::White, sf::Color::Red);
	win.Font(font);
	win.position({ 300, 120 });

	font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
	Button lose("Dealer Wins!!!", { 800, 200 }, 100, sf::Color::White, sf::Color::Red);
	lose.Font(font);
	lose.position({ 300, 120 });

	font.loadFromFile("japanese-style-font/JapaneseStyle-rmX7.ttf");
	Button tie("Tie", { 800, 200 }, 200, sf::Color::White, sf::Color::Red);
	tie.Font(font);
	tie.position({ 300, 120 });

	//Player 1 wins
	if (p1.handValue() <= 21 && p2.handValue() > 21) {
		/*player.setString("Player 1 wins!!");
		w.draw(player);
		w.display();*/
		w.draw(player);
		win.drawTo(w);
		w.display();
		sf::sleep(sf::seconds(2));
	}
	//Player 2 wins
	else if ((p2.handValue() > p1.handValue() && p2.handValue()<=21)) {
		/*player.setString("Dealer wins!!");
		w.draw(player);
		w.display();*/
		w.draw(Dealer);
		lose.drawTo(w);
		w.display();
		sf::sleep(sf::seconds(2));
	}
	//Player 1 Wins
	else if (p1.handValue()<=21 && p1.handValue() > p2.handValue()) {
		/*player.setString("Player 1 wins!!");
		w.draw(player);
		w.display();*/
		w.draw(player);
		win.drawTo(w);
		w.display();
		sf::sleep(sf::seconds(2));
	}
	//Tie
	else {
		//player.setString("Tie");
		//w.draw(player);
		//w.display();
		tie.drawTo(w);
		w.display();
		sf::sleep(sf::seconds(2));
	}
}