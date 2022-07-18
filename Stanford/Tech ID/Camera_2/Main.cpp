#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/text.hpp>
void sprite(sf::RenderWindow& window) {
	//window of picture
	sf::RenderWindow window(sf::VideoMode(400, 420), "Sprites!");
	sf::Texture playerTex;
	//picture
	playerTex.loadFromFile("032fee086f77fb685e935b31a2d2e241.png");
	sf::Sprite playerSprite;
	//making picture a player
	playerSprite.setTexture(playerTex);
	//adjusting picture
	playerSprite.setScale(0.5, 0.5);
	playerSprite.setPosition(0, 0);
	playerSprite.setOrigin(0, 0);
	//movements
	bool movingUp = false;
	bool movingDown = false;
	bool movingRight = false;
	bool movingLeft = false;
	//while the window is open
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			//if the red X is pressed, close the window
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			//if something is pressed
			if (event.type == sf::Event::KeyPressed) {
				//if up arrow is pressed, go up
				if (event.key.code == sf::Keyboard::Up) {
					movingUp = true;
				}
				//if down arrow is pressed, go down
				if (event.key.code == sf::Keyboard::Down) {
					movingDown = true;
					//if right arrow is pressed, go right
				}if (event.key.code == sf::Keyboard::Right) {
					movingRight = true;
					//if left arrow is pressed, go left
				}if (event.key.code == sf::Keyboard::Left) {
					movingLeft = true;
				}
				//if something is released
			}
			if (event.type == sf::Event::KeyReleased) {
				//if up arrow is pressed, go up
				if (event.key.code == sf::Keyboard::Up) {
					movingUp = false;
				}
				//if down arrow is pressed, go down
				if (event.key.code == sf::Keyboard::Down) {
					movingDown = false;
					//if right arrow is pressed, go right
				}if (event.key.code == sf::Keyboard::Right) {
					movingRight = false;
					//if left arrow is pressed, go left
				}if (event.key.code == sf::Keyboard::Left) {
					movingLeft = false;
				}
			}
		}
		sf::Vector2f movement(0, 0);
		if (movingUp) {
			movement.y -= 0.1f;
		}
		if (movingDown) {
			movement.y += 0.1f;
		}
		if (movingRight) {
			movement.x += 0.1f;
		}
		if (movingLeft) {
			movement.x -= 0.1f;
		}
		playerSprite.move(movement);
		window.clear();
		window.draw(playerSprite);
		window.display();
	}
}
void main()
{
	sf::RenderWindow window(sf::VideoMode(1600, 800), "Camra");
	//Create Texture
	sf::Texture backTxt;
	backTxt.loadFromFile("Purple-Flare-PNG-Background-Image.png");
	//Create sprite
	sf::Sprite backSprite;
	backSprite.setTexture(backTxt);
	//Camera View
	sf::View camera(sf::Vector2f(50, 50), sf::Vector2f(150, 150));
	camera.setSize(300, 400);
	camera.setCenter(300, 400);
	//while window is open
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{//if the red X is pressed, close window
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			window.clear();
			//draw Texture to the window
			window.draw(backSprite);
			window.display();
		}

		window.setView(camera);
		window.clear();
		//draw the texture to the window
		window.draw(backSprite);
		window.display();
	}

}
