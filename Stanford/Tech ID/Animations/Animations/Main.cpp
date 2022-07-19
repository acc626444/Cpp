#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Rect.hpp>
#include<SFML/Graphics/Text.hpp>
#include "Hand.h"
#include <time.h>

int main (){
	srand (time (0));
	bool start = true;
	Deck d;
	d.shuffle ();
	Hand name (&d);
	Hand name2 (&d);
	//player 1's turn
	cout << "player 1" << endl;
	while(start && name.handValue () < 21){
		name.printHand ();
		cout << "hit or stay" << endl;
		string a;
		cin >> a;
		if(a == "hit"){
			name.draw ();

		}
		else if(a == "stay"){//thtsmytmyut
			start = false;
		}
		else{
			cout << "try again" << endl;//ererre
		}
	}
	//lose
	if(name.handValue () > 21){
		name.printHand ();
		cout << endl;
		cout << "BUSTED!!!" << endl;
	}
	//won
	if(name.handValue () == 21){
		cout << "BLACK JACK!!" << endl;
	}
	cout << endl;
	cout << endl;
	cout << "dealer" << endl;
	bool start2 = true;
	//player 2's turn
	while(start2 && name2.handValue () < 21){
		name2.printHand ();
		if(name2.handValue () < 17){
			cout << endl;
			cout << endl;
			name2.draw ();
		}
		else{
			start2 = false;
		}
	}
	//lose
	if(name2.handValue () > 21){
		name2.printHand ();
		cout << endl;
		cout << "BUSTED!!!" << endl;
	}
	//win
	if(name2.handValue () == 21){
		cout << "BLACK JACK!!" << endl;
	}
	//who wins
	if(name.handValue () <= 21 && name2.handValue () > 21 || name.handValue () <= 21 && name2.handValue () > 21){
		cout << "player 1 wins!!" << endl;
	}
	else if(name2.handValue () > name.handValue () || name.handValue () > 21 || name.handValue () > 21 && name2.handValue () > 21){
		cout << "Dealer wins!!!" << endl;
	}
	else if(name.handValue () > name2.handValue ()){
		cout << "Player 1 wins!!" << endl;
	}
	else{
		cout << "tie" << endl;
	}
}
