#pragma warning(disable : 4996)
#include "Again.h"
int main() {
	bool game = true;
	while (game) {
		sf::RenderWindow window(sf::VideoMode(1600, 800), "Black Jack!");
		sf::Event event;
		srand(time(0));

		Deck d;
		d.Shuffle();
		Hand name(&d);
		Hand name2(&d);
		//name.handValue() = 0;
		player1(name, window);
		//sf::sleep(sf::seconds(2));
		dealer1(name2, window);
		//sf::sleep(sf::seconds(2));
		EndCondition(name, name2, window);

	}
}