#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Text.hpp>
int main (){
	sf::RenderWindow window (sf::VideoMode (200, 200), "Camera");
	//Create Texture
	sf::Texture backTxt;
	backTxt.loadFromFile ("OPTIFrench-Script.otf");

	//Create Sprite
	sf::Sprite backSprite;
	backSprite.setTexture (backTxt);

	//Camera view
	sf::View camera (sf::Vector2f (50, 50), sf::Vector2f (150, 150));
	camera.setSize (300, 300);
	camera.setCenter (300, 400);

	//while the window is open
	while (window.isOpen ()){
		sf::Event event;
		while (window.pollEvent (event)){
			//if the red X is pressed, close the window
			if (event.type == sf::Event::Closed){
				window.close ();
			}
			window.clear ();
			//Draw Sprite to Window
			window.draw (backSprite);
			window.display ();
		}
		window.setView (camera);
		window.clear ();
		//Draw the sprite to the window
		window.draw (backSprite);
		window.display ();
	}
}