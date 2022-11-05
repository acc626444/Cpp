#include "EndConditions.h"
int main (){
	sf::RenderWindow window (sf::VideoMode (1600, 800), "Black Jack!");
	srand (time (0));
	bool start = true;
	Deck d;
	d.Shuffle ();
	Hand name (&d);
	Hand name2 (&d);
	int erase = 1;
	player1 (name, start, window, erase);
	cout << endl;
	cout << endl;
	bool start2 = true;
	dealer1 (name2, start2, window);
	EndCondition (name, name2, window);
	return 0;
}



//int main (){
//	sf::RenderWindow window (sf::VideoMode (1600, 800), "Black Jack!");
//
//
//
//	srand (unsigned int (0));
//	bool start = true;
//	Deck d;
//	d.Shuffle ();
//	Hand name (&d);
//	Hand name2 (&d);
//	int erase = 1;
//
//	//sf::RenderWindow window (sf::VideoMode (800, 800), "Black Jack!");
//	sf::Event event;
//	sf::Mouse::
//
//	// while there are pending events...
//	while(window.pollEvent (event)){
//		// check the type of the event...
//		switch(event.type){
//			// window closed
//			case sf::Event::Closed:
//				window.close ();
//				break;
//				Hit (window);
//				Stay (window);
//				window.display ();
//				//player1 (name, start, window, erase);
//
//				// key pressed
//			case sf::Event::MouseButtonPressed:
//
//				if( /*width*/sf::Mouse::getPosition ().x > 0 || sf::Mouse::getPosition ().x < 500 && /*length*/ sf::Mouse::getPosition ().y > 750 || sf::Mouse::getPosition ().y < 800){
//					name.Draw ();
//					cout << "hit true" << endl;
//					player1 (name, start, window, erase);
//				}
//				//	//stay
//				if( /*width*/sf::Mouse::getPosition ().x > 1465 || sf::Mouse::getPosition ().x < 1600 && /*length*/ sf::Mouse::getPosition ().y > 750 || sf::Mouse::getPosition ().y < 800){
//					start = false;
//					for(int cards = 0; cards < erase; cards++){
//						window.clear ();
//					}
//				}
//				// we don't process other types of events
//			default:
//				break;
//		}
//	}
//	window.display ();
//}


//int main2 (){
//	sf::RenderWindow window (sf::VideoMode (1600, 800), "Black Jack!");
//
//	//sf::RenderWindow window (sf::VideoMode (800, 800), "Black Jack!");
//	while(window.isOpen ()){
//		sf::Event event;
//
//		// while there are pending events...
//		while(window.pollEvent (event)){
//			// check the type of the event...
//			switch(event.type){
//				// window closed
//				case sf::Event::Closed:
//					window.close ();
//					break;
//					//player1 (name, start, window, erase);
//
//					// key pressed
//				case sf::Event::MouseButtonPressed:
//					if(event.mouseButton.button == sf::Mouse::Right){
//						std::cout << "the right button was pressed" << std::endl;
//						std::cout << "mouse x: " << event.mouseButton.x << std::endl;
//						std::cout << "mouse y: " << event.mouseButton.y << std::endl;
//					}
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
