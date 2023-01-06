#pragma warning(disable : 4996)
#include <SFML/Graphics/Text.hpp>
#include <iostream>
#include "Button.h"
using namespace std;
int main() {
	Button btn1("click me", { 200, 50 }, 20, sf::Color::Green, sf::Color::Black);
	btn1.position({ 100, 300 });


	sf::RenderWindow window(sf::VideoMode(1600, 800), "Black Jack!");
	while (window.isOpen()) {
		sf::Event event;

		// while there are pending events...
		while (window.pollEvent(event)) {
			switch (event.type) {
			case sf::Event::MouseMoved:
				if (btn1.mouseOver(window)) {
					btn1.BackColour(sf::Color::White);
				}
				else {
					btn1.BackColour(sf::Color::Green);
				}
			}
		}
		window.clear();
		btn1.drawTo(window);
		window.display();
	}
}
