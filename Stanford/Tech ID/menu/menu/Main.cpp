#include "functions.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1600, 800), "Menus");

	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	GameState currentState = Menu;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::Space)
				{
					if (currentState == Menu)
					{
						currentState = Gameplay;
					}
					else
					{
						currentState = Menu;
					}
				}
			}
		}

		window.clear();
		if (currentState == Gameplay)
		{
			window.draw(shape);
		}
		window.display();
	}
}
