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
//	//lost
//	if(p1.handValue () > 21){
//		cout << endl;
//		cout << "BUSTED!!!" << endl;
//		w.clear ();
//	}
//	//win
//	if(p1.handValue () == 21){
//		p1.printHand (w);
//		w.display ();
//		cout << "BLACK JACK!!" << endl;
//		w.clear ();
//	}
//}


void player1 (Hand p1, bool start, sf::RenderWindow& w, /*sf::Event event,*/ int erase){
	sf::Event event{};
	font.loadFromFile ("japanese-style-font/JapaneseStyle-rmX7.ttf");
	player.setFont (font);
	player.setString ("Player 1");
	player.setPosition (600, 0);
	player.setCharacterSize (100);
	sf::Color pinkish (255, 25, 255);
	player.setFillColor (pinkish);
	w.draw (player);
	w.display ();
	while(start && p1.handValue () < 21){
		p1.printHand (w);
		w.draw (player);
		sf::Color black (sf::Color::Red);
		Hit (w);
		Stay (w);
		w.display ();
		//if(event.type == sf::Event::MouseButtonPressed){
		//	switch(event.mouseButton.button = sf::Mouse::Left){
		//		//hit
		//		case /*width*/sf::Mouse::getPosition ().x > 0 || sf::Mouse::getPosition ().x < 500 && /*length*/ sf::Mouse::getPosition ().y > 750 || sf::Mouse::getPosition ().y < 800 :
		//			hit = true;
		//			break;
		//			//	//stay
		//			case /*width*/sf::Mouse::getPosition ().x > 1465 || sf::Mouse::getPosition ().x < 1600 && /*length*/ sf::Mouse::getPosition ().y > 750 || sf::Mouse::getPosition ().y < 800 :
		//				stay = true;
		//				break;
		//	}
		//}
		 
		 
		//if(event.type == sf::Event::MouseButtonReleased){
		//	switch(event.mouseButton.button = sf::Mouse::Left){
		//		//	//if up arrow is pressed, go up
		//		case /*width*/sf::Mouse::getPosition ().x > 0 || sf::Mouse::getPosition ().x < 500 && /*length*/ sf::Mouse::getPosition ().y > 750 || sf::Mouse::getPosition ().y < 800:
		//			hit = false;
		//			cout << "hit false" << endl;
		//			break;
		//			//	//stay
		//			case /*width*/sf::Mouse::getPosition ().x > 1465 || sf::Mouse::getPosition ().x < 1600 && /*length*/ sf::Mouse::getPosition ().y > 750 || sf::Mouse::getPosition ().y < 800 :
		//				stay = false;
		//				cout << "stay false" << endl;
		//				break;
		//	}
		//}



		//if(hit){
		//	p1.Draw ();
		//	cout << "hit true" << endl;
		//	player1 (p1, start, w, erase);
		//}
		//if(stay){
		//	start = false;
		//	for(int cards = 0; cards < erase; cards++){
		//		w.clear ();
		//	}
		//	cout << "stay true" << endl;
		//}
	}

	/*if(event.key.code == sf::Keyboard::Up){
		hit = false;
		cout << "hit fail" << endl;
	}

	if(event.key.code == sf::Keyboard::Down){
		stay = false;
		cout << "stay fail" << endl;
	}*/

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
