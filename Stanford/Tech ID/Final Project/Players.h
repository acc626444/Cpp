#pragma once
#include "EndConditions.h"
sf::Font font;
sf::Text player;
void player1 (Hand p1, bool start, sf::RenderWindow& w){
	font.loadFromFile ("DEATH.ttf");
	player.setString ("Player 1");
	w.display ();
	while(start && p1.handValue () < 21){
		p1.printHand (w);
		w.display ();
		cout << "hit or stay" << endl;
		string a;
		cin >> a;
		if(a == "hit"){
			p1.Draw ();

		}
		else if(a == "stay"){
			start = false;
		}
		else{
			cout << "try again" << endl;
		}
	}
	//lost
	if(p1.handValue () > 21){
		p1.printHand (w);
		cout << endl;
		cout << "BUSTED!!!" << endl;
	}
	//win
	if(p1.handValue () == 21){
		cout << "BLACK JACK!!" << endl;
	}
}
void dealer (Hand dealer, bool start, sf::RenderWindow& w){
	font.loadFromFile ("DEATH.ttf");
	player.setString ("Dealer");
	w.draw (player);
	w.display ();
	while(start && dealer.handValue () < 21){
		dealer.printHand (w);
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
	}
	//win
	if(dealer.handValue () == 21){
		cout << "BLACK JACK!!" << endl;
	}
}