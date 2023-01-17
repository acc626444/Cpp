#pragma once
#include "Card.h"

Card::Card(int v, string s) {
	suit = s;
	value = v;

}
Card::Card() {
	suit = "";
	value = 0;
}
int Card::getValue() {
	return value;
}
string Card::getSuit() {
	return suit;

}
void Card::printCard(sf::RenderWindow& w, float positionX) {
		//if Jack, print Jack of 'suit'
		if (getValue() == 11) {
			if (suit == "Club") {
				txture.loadFromFile("Deck/Club/Club_J.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Diamond") {
				txture.loadFromFile("Deck/Diamond/Diamond_J.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Spade") {
				txture.loadFromFile("Deck/Spade/Spade_J.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else {
				txture.loadFromFile("Deck/Heart/Heart_J.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(236 * positionX, 325);
				//w.draw(card);
			}
		}
		//if Queen, print Queen of 'suit'
		if (getValue() == 12) {
			if (suit == "Club") {
				txture.loadFromFile("Deck/Club/Club_Q.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Diamond") {
				txture.loadFromFile("Deck/Diamond/Diamond_Q.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Spade") {
				txture.loadFromFile("Deck/Spade/Spade_Q.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else {
				txture.loadFromFile("Deck/Heart/Heart_Q.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
		}
		//if King, print King of 'suit'
		if (getValue() == 13) {
			if (suit == "Club") {
				txture.loadFromFile("Deck/Club/Club_K.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Diamond") {
				txture.loadFromFile("Deck/Diamond/Diamond_K.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Spade") {
				txture.loadFromFile("Deck/Spade/Spade_K.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else {
				txture.loadFromFile("Deck/Heart/Heart_K.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
		}
		//if Ace, print Ace of 'suit'
		if (getValue() == 1) {
			if (suit == "Club") {
				txture.loadFromFile("Deck/Club/Club_A.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Diamond") {
				txture.loadFromFile("Deck/Diamond/Diamond_A.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Spade") {
				txture.loadFromFile("Deck/Spade/Spade_A.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else {
				txture.loadFromFile("Deck/Heart/Heart_A.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
		}
		//print 'card#' and 'suit'
		if (getValue() == 2) {
			if (suit == "Club") {
				txture.loadFromFile("Deck/Club/Club_2.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Diamond") {
				txture.loadFromFile("Deck/Diamond/Diamond_2.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Spade") {
				txture.loadFromFile("Deck/Spade/Spade_2.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else {
				txture.loadFromFile("Deck/Heart/Heart_2.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
		}
		if (getValue() == 3) {
			if (suit == "Club") {
				txture.loadFromFile("Deck/Club/Club_3.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Diamond") {
				txture.loadFromFile("Deck/Diamond/Diamond_3.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Spade") {
				txture.loadFromFile("Deck/Spade/Spade_3.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else {
				txture.loadFromFile("Deck/Heart/Heart_3.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
		}
		if (getValue() == 4) {
			if (suit == "Club") {
				txture.loadFromFile("Deck/Club/Club_4.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Diamond") {
				txture.loadFromFile("Deck/Diamond/Diamond_4.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Spade") {
				txture.loadFromFile("Deck/Spade/Spade_4.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else {
				txture.loadFromFile("Deck/Heart/Heart_4.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
		}
		if (getValue() == 5) {
			if (suit == "Club") {
				txture.loadFromFile("Deck/Club/Club_5.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Diamond") {
				txture.loadFromFile("Deck/Diamond/Diamond_5.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Spade") {
				txture.loadFromFile("Deck/Spade/Spade_5.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else {
				txture.loadFromFile("Deck/Heart/Heart_5.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
		}
		if (getValue() == 6) {
			if (suit == "Club") {
				txture.loadFromFile("Deck/Club/Club_6.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Diamond") {
				txture.loadFromFile("Deck/Diamond/Diamond_6.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Spade") {
				txture.loadFromFile("Deck/Spade/Spade_6.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else {
				txture.loadFromFile("Deck/Heart/Heart_6.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
		}
		if (getValue() == 7) {
			if (suit == "Club") {
				txture.loadFromFile("Deck/Club/Club_7.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Diamond") {
				txture.loadFromFile("Deck/Diamond/Diamond_7.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Spade") {
				txture.loadFromFile("Deck/Spade/Spade_7.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else {
				txture.loadFromFile("Deck/Heart/Heart_7.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
		}
		if (getValue() == 8) {
			if (suit == "Club") {
				txture.loadFromFile("Deck/Club/Club_8.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Diamond") {
				txture.loadFromFile("Deck/Diamond/Diamond_8.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Spade") {
				txture.loadFromFile("Deck/Spade/Spade_8.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else {
				txture.loadFromFile("Deck/Heart/Heart_8.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
		}
		if (getValue() == 9) {
			if (suit == "Club") {
				txture.loadFromFile("Deck/Club/Club_9.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Diamond") {
				txture.loadFromFile("Deck/Diamond/Diamond_9.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Spade") {
				txture.loadFromFile("Deck/Spade/Spade_9.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else {
				txture.loadFromFile("Deck/Heart/Heart_9.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
		}
		if (getValue() == 10) {
			if (suit == "Club") {
				txture.loadFromFile("Deck/Club/Club_10.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Diamond") {
				txture.loadFromFile("Deck/Diamond/Diamond_10.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else if (suit == "Spade") {
				txture.loadFromFile("Deck/Spade/Spade_10.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
			else {
				txture.loadFromFile("Deck/Heart/Heart_10.png");
				card.setTexture(txture);
				card.setScale(0.25, 0.25);
				card.setPosition(250 * positionX, 325);
				//w.draw(card);
			}
		}
	w.draw(card);
}
