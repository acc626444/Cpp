// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SFML/Graphics.hpp>
int main( ) {
	sf::CircleShape circle;
	circle.setRadius( 50 );
	circle.setPosition( 200 , 100 );
	circle.setFillColor( sf::Color::Cyan );
	sf::RenderWindow window( sf::VideoMode( 400 , 200 ) , "SFML Works" );
	while ( window.isOpen( ) ) {
		sf::Event event;
		while ( window.pollEvent( event ) ) {
			if ( event.type == sf::Event::Closed )
				window.close( );
		}
		window.clear( );
		window.draw( circle );
		window.display( );
	}
}
	// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
	// Debug program: F5 or Debug > Start Debugging menu

	// Tips for Getting Started: 
	//   1. Use the Solution Explorer window to add/manage files
	//   2. Use the Team Explorer window to connect to source control
	//   3. Use the Output window to see build output and other messages
	//   4. Use the Error List window to view errors
	//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
	//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
