#pragma once
#include "Hand.cpp"
void EndCondition (Hand p1, Hand p2){
	//Player 1 wins
	if(p1.handValue () <= 21 && p2.handValue () > 21 || p1.handValue () <= 21 && p2.handValue () > 21){
		cout << "player 1 wins!!" << endl;
	}
	//Player 2 wins
	else if(p2.handValue () > p1.handValue () || p1.handValue () > 21 || p1.handValue () > 21 && p2.handValue () > 21){
		cout << "Dealer wins!!!" << endl;
	}
	//Player 1 Wins
	else if(p1.handValue () > p2.handValue ()){
		cout << "Player 1 wins!!" << endl;
	}
	//Tie
	else{
		cout << "tie" << endl;
	}
}