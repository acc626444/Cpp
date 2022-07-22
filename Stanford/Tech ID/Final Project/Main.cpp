#include "EndConditions.h"
int main (){
	sf::RenderWindow window (sf::VideoMode (1600, 800), "Black Jack!");
	srand (time (0));
	bool start = true;
	Deck d;
	d.Shuffle ();
	Hand name (&d);
	Hand name2 (&d);
	while(window.isOpen ()){
		sf::Event event;
		
		player1 (name, start, window);
		cout << endl;
		cout << endl;
		bool start2 = true;
		dealer1 (name2, start2, window);
		EndCondition (name, name2, window);
		window.display ();
	}
	return 0;
}

//int main (){
//	sf::RenderWindow window (sf::VideoMode (1600, 800), "Black Jack!");
//	srand (time (0));
//	bool start = true;
//	Deck d;
//	int erase = 1;
//	bool hit = false;
//	bool stay = false;
//	d.Shuffle ();
//	Hand name (&d);
//	Hand name2 (&d);
//
//	//movements
//	bool movingUp = false;
//	bool movingDown = false;
//	bool movingRight = false;
//	bool movingLeft = false;
//	//while the window is open
//	while(window.isOpen ()){
//		sf::Event event;
//		while(window.pollEvent (event)){
//			//if the red X is pressed, close the window
//			if(event.type == sf::Event::Closed){
//				window.close ();
//			}
//			player1 (name, start, window);
//
//			if(event.type == sf::Event::KeyPressed){
//				//if up arrow is pressed, go up
//				if(event.key.code == sf::Keyboard::Up){
//					hit = true;
//					cout << "hit run" << endl;
//				}
//				//if down arrow is pressed, go down
//				if(event.key.code == sf::Keyboard::Down){
//					stay = true;
//					cout << "stay run" << endl;
//					//if right arrow is pressed, go right
//				}
//			}
//			if(event.type == sf::Event::KeyReleased){
//				//if up arrow is pressed, go up
//				if(event.key.code == sf::Keyboard::Up){
//					hit = false;
//					cout << "hit fail" << endl;
//				}
//				//		//if down arrow is pressed, go down
//				if(event.key.code == sf::Keyboard::Down){
//					stay = false;
//					cout << "stay fail" << endl;
//				}
//			}
//		}
//		if(hit){
//			name.Draw ();
//			player1 (name, start, window);
//			cout << "hit" << endl;
//			erase++;
//		}
//		if(stay){
//			//start = false;
//			for(int cards = 0; cards < erase; cards++){
//				window.clear ();
//			}
//			cout << "stay" << endl;
//		}
//
//		/*sf::Vector2f movement (0, 0);
//		if(movingUp){
//			movement.y -= 0.1f;
//		}
//		if(movingDown){
//			movement.y += 0.1f;
//		}
//		if(movingRight){
//			movement.x += 0.1f;
//		}
//		if(movingLeft){
//			movement.x -= 0.1f;
//		}*/
//		window.clear ();
//		//draw the texture to the window
//		
//		window.display ();
//	}
//	return 0;
//}