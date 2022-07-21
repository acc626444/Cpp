#pragma once
#include "Hand.cpp"
sf::Font font;
sf::Text player;
sf::Text Dealer;
sf::Text bust;
string stay= "Stay";
string hit = "Hit";
void boxes (sf::RenderWindow& w, string word,  sf::Color color, int posX, int posY, int pos1X, int pos1Y, int sizeX, int sizeY){
	sf::Text txt;
	font.loadFromFile ("japanese-style-font/JapaneseStyle-rmX7.ttf");
	sf::RectangleShape rect;
	rect.setSize (sf::Vector2f (sizeX, sizeY));
	rect.setOutlineThickness (5);
	rect.setPosition (posX, posY);
	w.draw (rect);
	txt.setFont (font);
	txt.setString (word);
	txt.setPosition (pos1X, pos1Y);
	txt.setCharacterSize (50);
	txt.setFillColor (color);
	w.draw (txt);
}
void player1 (Hand p1, bool start, sf::RenderWindow& w){
	int erase = 1;
	font.loadFromFile ("japanese-style-font/JapaneseStyle-rmX7.ttf");
	player.setFont (font);
	player.setString ("Player 1");
	player.setPosition (600, 0);
	player.setCharacterSize (100);
	sf::Color pinkish (255, 25, 255);
	player.setFillColor (pinkish);
	w.draw (player);
	while(start && p1.handValue () < 21){
		p1.printHand (w);
		w.draw (player);
		sf::Color black (sf::Color::Red);
		boxes (w, hit, black, 0, 750, 10, 740, 100, 50);
		boxes (w, stay, black, 1465, 750, 1470, 740, 130, 50);
		w.display ();

		cout << "hit or stay" << endl;
		string a;
		cin >> a;
		if(a == "hit"){
			p1.Draw ();
			erase++;
		}
		else if(a == "stay"){
			start = false;
				for(int cards = 0; cards < erase; cards++){
					w.clear ();
				}
		}
		else{
			cout << "try again" << endl;
		}
	}
	//lost
	if(p1.handValue () > 21){
		cout << endl;
		cout << "BUSTED!!!" << endl;
		w.clear ();
	}
	//win
	if(p1.handValue () == 21){
		p1.printHand (w);
		w.display ();
		cout << "BLACK JACK!!" << endl;
	}
	w.clear ();
}
void dealer (Hand dealer, bool start, sf::RenderWindow& w){
	font.loadFromFile ("japanese-style-font/JapaneseStyle-rmX7.ttf");
	Dealer.setFont (font);
	Dealer.setString ("Dealer");
	Dealer.setPosition (600,0);
	Dealer.setCharacterSize (100);
	Dealer.setFillColor (sf::Color::Yellow);
	w.draw (Dealer);
	while(start && dealer.handValue () < 21){
		dealer.printHand (w);
		w.draw (Dealer);
		w.display ();
		cout << "hit or stay" << endl;
		string a;
		cin >> a;
		if(a == "hit"){
			dealer.Draw ();
		}
		else if(a == "stay"){
			start = false;
		}
		else{
			cout << "try again" << endl;
		}
	}
	//lost
	if(dealer.handValue () > 21){
		dealer.printHand (w);
		cout << endl;
		cout << "BUSTED!!!" << endl;
		w.clear ();
	}
	//win
	if(dealer.handValue () == 21){
		w.display ();
		cout << "BLACK JACK!!" << endl;
		w.clear ();
	}
	w.clear ();
}
