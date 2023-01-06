#pragma warning(disable : 4996)

#include "EndConditions.h"
int main() {
	sf::RenderWindow window(sf::VideoMode(1600, 800), "Black Jack!");
		sf::Event event;
		srand(time(0));
		bool start = true;
		Deck d;
		d.Shuffle();
		Hand name(&d);
		Hand name2(&d);
		player1(name, start, window, event);
		cout << endl;
		cout << endl;
		bool start2 = true;
		dealer1(name2, start2, window);
		EndCondition(name, name2, window);
}
