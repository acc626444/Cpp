#pragma once
#include "Players.h"

//void  EndCondition(Hand p1, Hand p2, sf::RenderWindow& w) {
//	sf::Font font;
//	font.loadFromFile("summer-vibes-font/SummerVibes-JR0aK.ttf");
//	sf::Text player;
//	//Player 1 wins
//	if (p1.handValue() <= 21 && p2.handValue() > 21 || p1.handValue() <= 21 && p2.handValue() > 21) {
//		player.setString("Player 1 wins!!");
//		w.draw(player);
//		w.display();
//	}
//	//Player 2 wins
//	else if (p2.handValue() > p1.handValue() || p1.handValue() > 21 || p1.handValue() > 21 && p2.handValue() > 21) {
//		player.setString("Dealer wins!!");
//		w.draw(player);
//		w.display();
//	}
//	//Player 1 Wins
//	else if (p1.handValue() > p2.handValue()) {
//		player.setString("Player 1 wins!!");
//		w.draw(player);
//		w.display();
//	}
//	//Tie
//	else {
//		player.setString("Tie");
//		w.draw(player);
//		w.display();
//	}
//}