//#include <SFML/Graphics.hpp>
//#include "SFML/Graphics/Text.hpp"
//#include<iostream>
//using namespace std;
//
//int main (){
//	sf::RenderWindow window (sf::VideoMode (1600, 800), "Black Jack!");
//	while(window.isOpen ()){
//		sf::Event event;
//
//		// while there are pending events...
//		while(window.pollEvent (event)){
//			// check the type of the event...
//			//player1 (name, start, window, erase);
//			switch(event.type){
//				// window closed
//				case sf::Event::Closed:
//					window.close ();
//					break;
//
//					// key pressed
//				case sf::Event::MouseButtonPressed:
//					//if(event.type == sf::Event::MouseButtonPressed){
//					if(event.mouseButton.button == sf::Mouse::Right){
//						std::cout << "the right button was pressed" << std::endl;
//						std::cout << "mouse x: " << event.mouseButton.x << std::endl;
//						std::cout << "mouse y: " << event.mouseButton.y << std::endl;
//					}
//					//}
//					break;
//
//					// we don't process other types of events
//				default:
//					break;
//			}
//		}
//		window.display ();
//	}
//}