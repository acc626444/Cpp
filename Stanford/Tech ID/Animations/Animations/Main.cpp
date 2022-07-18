#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Rect.hpp>
#include<SFML/Graphics/Text.hpp>

int main()
{
	// Create a Window to Display Graphics, Define Size and Window Name
	sf::RenderWindow window(sf::VideoMode(200, 200), "Animation");

	/* CREATE OBJECTS AND ASSIGN OBJECT ATTRIBUTES HERE */
	sf::Texture myTexture;
	myTexture.loadFromFile("walk_cycle.png");
	sf::IntRect rect[7];
	rect[0] = sf::IntRect(0, 0, 64, 64);
	rect[1] = sf::IntRect(64, 0, 64, 64);
	rect[2] = sf::IntRect(128, 0, 64, 64);
	rect[3] = sf::IntRect(192, 0, 64, 64);
	rect[4] = sf::IntRect(0, 64, 64, 64);
	rect[5] = sf::IntRect(64, 64, 64, 64);
	rect[6] = sf::IntRect(128, 64, 64, 64);
	sf::Sprite mySprite;
	mySprite.setTexture(myTexture);
	mySprite.setOrigin(15, 16);
	mySprite.setScale(1.5, 1.5);
	mySprite.setPosition(100, 100);
	sf::Clock clock;
	int imgCount = 0;
	float timer = 0;
	// Run the Program while the Window is Open
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			// When X Button Clicked, Close Window
			if (event.type == sf::Event::Closed)
				window.close();

			/* DEFINE EVENTS (i.e. KEY PRESS & RELEASE) HERE */
		}
		//give sprite texture of rect[imgCount]
		mySprite.setTextureRect(rect[imgCount]);
		//set timer in seconds
		timer = clock.getElapsedTime().asSeconds();
		if (timer > 0.1f) {
			if (imgCount < 6) {
				imgCount++;
			}
			else {
				imgCount = 0;
			}
			clock.restart();
		}

		window.clear();
		/* DRAW OBJECTS HERE */
		window.draw(mySprite);
		window.display();
	}
}
