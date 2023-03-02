#pragma warning(disable : 4996)
#include "Again.h"
int main() {
	bool game = true;
	while (game) {
		sf::RenderWindow window(sf::VideoMode(1600, 800), "Black Jack!");
		srand(time(0));
		Deck d;
		d.Shuffle();
		Hand name(&d);
		Hand name2(&d);
		player1(name, window);
		dealer1(name2, window);
		EndCondition(name, name2, window);
		sf::sleep(sf::seconds(1));
		game = false;
		game = continu(name, name2, window, game);
	}
}