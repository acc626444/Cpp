#include "Players.h"
#include <SFML/Graphics.hpp>


int main (){
	srand (time (0));
	bool start = true;
	Deck d;
	d.Shuffle ();
	Hand name (&d);
	Hand name2 (&d);
	player1 (name, start);
	cout << endl;
	cout << endl;
	bool start2 = true;
	dealer (name2, start2);
	EndCondition (name, name2);
	return 0;
}