#pragma once
#include "makeButton.h"
sf::Text player;
sf::Text Dealer;
bool hit = false;
bool stay = false;
//void player1 (Hand p1, bool start, sf::RenderWindow& w){
//	int erase = 1;
//	font.loadFromFile ("japanese-style-font/JapaneseStyle-rmX7.ttf");
//	player.setFont (font);
//	player.setString ("Player 1");
//	player.setPosition (600, 0);
//	player.setCharacterSize (100);
//	sf::Color pinkish (255, 25, 255);
//	player.setFillColor (pinkish);
//	while(start && p1.handValue () < 21){
//		cout << erase << endl << endl;
//		p1.printHand (w);
//		w.draw (player);
//		Hit (w);
//		Stay (w);
//		w.display ();
//		cout << "hit or stay" << endl;
//		string a;
//		cin >> a;
//		if(a == "hit"){
//			p1.Draw ();
//			erase++;
//		}
//		else if(a == "stay"){
//			start = false;
//			for(int cards = 0; cards < erase; cards++){
//				w.clear ();
//			}
//		}
//		else{
//			cout << "try again" << endl;
//		}
//	}
//		//lost
//		if(p1.handValue () > 21){
//			cout << endl;
//			cout << "BUSTED!!!" << endl;
//			w.clear ();
//		}
//		//win
//		if(p1.handValue () == 21){
//			p1.printHand (w);
//			w.display ();
//			cout << "BLACK JACK!!" << endl;
//			w.clear ();
//		}
//		//if(event.type == sf::Event::KeyPressed){
//		//	//if up arrow is pressed, go up
//		//	if(event.key.code == sf::Keyboard::Up){
//		//		hit = true;
//		//		cout << "hit run" << endl;
//		//	}
//		//	//if down arrow is pressed, go down
//		//	if(event.key.code == sf::Keyboard::Down){
//		//		stay = true;
//		//		cout << "stay run" << endl;
//		//		//if right arrow is pressed, go right
//		//	}
//		//}
//		//if(event.type == sf::Event::KeyReleased){
//		//	//if up arrow is pressed, go up
//		//	if(event.key.code == sf::Keyboard::Up){
//		//		hit = false;
//		//		cout << "hit fail" << endl;
//		//	}
//		//	//		//if down arrow is pressed, go down
//		//	if(event.key.code == sf::Keyboard::Down){
//		//		stay = false;
//		//		cout << "stay fail" << endl;
//		//	}
//		//if(hit){
//		//	p1.Draw ();
//		//	erase++;
//		//	cout << "hit" << endl;
//		//}
//		//if(stay){
//		//	start = false;
//		//	for(int cards = 0; cards < erase; cards++){
//		//		w.clear ();
//		//	}
//		//	cout << "stay" << endl;
//		//}
//		//w.draw (player);
//		//w.display ();
//	
//}


void player1 (Hand p1, bool start, sf::RenderWindow& w){
	int erase = 1;
	font.loadFromFile ("japanese-style-font/JapaneseStyle-rmX7.ttf");
	player.setFont (font);
	player.setString ("Player 1");
	player.setPosition (600, 0);
	player.setCharacterSize (100);
	sf::Color pinkish (255, 25, 255);
	player.setFillColor (pinkish);
	w.draw (player);
	while(start && p1.handValue () < 21){
		p1.printHand (w);
		w.draw (player);
		sf::Color black (sf::Color::Red);
		Hit (w);
		Stay (w);
		w.display ();
		////if the red X is pressed, close the window
		//if(event.type == sf::Event::Closed){
		//	w.close ();
		//}
		//if(event.type == sf::Event::MouseButtonPressed){
		//	if(event.key.code == sf::Mouse::Right && sf::Mouse::getPosition ().x == 10 && sf::Mouse::getPosition ().y == 740){
		//		hit = true;
		//		p1.Draw ();
		//		erase++;
		//	}
		//	if(event.key.code == sf::Mouse::Right && sf::Mouse::getPosition ().x == 1470 && sf::Mouse::getPosition ().y == 740){
		//		stay = true;
		//		start = false;
		//		for(int cards = 0; cards < erase; cards++){
		//			w.clear ();
		//		}
		//	}
			cout << "hit or stay" << endl;
			string a;
			cin >> a;
			if(a == "hit"){
				p1.Draw ();
				erase++;
			}
			else if(a == "stay"){
				start = false;
				for(int cards = 0; cards < erase; cards++){
					w.clear ();
				}
			}
			else{
				cout << "try again" << endl;
			}
		
	}
	//lost
	if(p1.handValue () > 21){
		cout << endl;
		cout << "BUSTED!!!" << endl;
		w.clear ();
	}
	//win
	if(p1.handValue () == 21){
		p1.printHand (w);
		w.display ();
		cout << "BLACK JACK!!" << endl;
	}
	w.clear ();
}



void dealer1 (Hand dealer, bool start, sf::RenderWindow& w){
	font.loadFromFile ("japanese-style-font/JapaneseStyle-rmX7.ttf");
	Dealer.setFont (font);
	Dealer.setString ("Dealer");
	Dealer.setPosition (600, 0);
	Dealer.setCharacterSize (100);
	Dealer.setFillColor (sf::Color::Yellow);
	w.draw (Dealer);
	while(start && dealer.handValue () < 21){
		dealer.printHand (w);
		w.draw (Dealer);
		sf::Color black (sf::Color::Red);
		Hit (w);
		Stay (w);
		w.display ();
		cout << "hit or stay" << endl;
		string a;
		cin >> a;
		if(a == "hit"){
			dealer.Draw ();
		}
		else if(a == "stay"){
			start = false;
		}
		else{
			cout << "try again" << endl;
		}
	}
	//lost
	if(dealer.handValue () > 21){
		dealer.printHand (w);
		cout << endl;
		cout << "BUSTED!!!" << endl;
		w.clear ();
	}
	//win
	if(dealer.handValue () == 21){
		w.display ();
		cout << "BLACK JACK!!" << endl;
		w.clear ();
	}
	w.clear ();
}
