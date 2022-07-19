#pragma once
#include "EndConditions.h"
void player1 (Hand p1, bool start){
	cout << "player 1" << endl;
	while(start && p1.handValue () < 21){
		p1.printHand ();
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
		p1.printHand ();
		cout << endl;
		cout << "BUSTED!!!" << endl;
	}
	//win
	if(p1.handValue () == 21){
		cout << "BLACK JACK!!" << endl;
	}
}
void dealer (Hand dealer, bool start){
	cout << "dealer" << endl;
	while(start && dealer.handValue () < 21){
		dealer.printHand ();
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
		dealer.printHand ();
		cout << endl;
		cout << "BUSTED!!!" << endl;
	}
	//win
	if(dealer.handValue () == 21){
		cout << "BLACK JACK!!" << endl;
	}
}