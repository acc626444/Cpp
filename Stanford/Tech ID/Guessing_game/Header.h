#include <iostream>
#include <cstdlib>
using namespace std;
int question( ) {
	cout << "Do you want to try again?\n";
	string answer;
	cin >> answer;
	if ( answer == "yes" ) {
		return 0;
	}
	else if ( answer == "no" ) {
		return 1;
	}
	else {
		cout << "Pleqse try again\n";
		question( );
	}
}
int number( ) {

	//srand( 10 );
	int a = 1+ ( rand( )%100);
	return a;
}
int distance( int guess , int number ) {
	if ( number < guess ) {
		return 0;
	}
	else if ( guess < number ) {
		return 1;
	}
	else {
		return 2;
	}
}
void skip( int a ) {
	for ( int b = 0; b < a; b++ ) {
		cout << endl;
	}
}
void trials(  ) {
	int random = number( );

	cout << "You have 10 tries to guess my number\n";
	skip( 2 );
	int a = 10;
	while ( a > 0 ) {
		double score = a;
		skip( 1 );
		cout << "Guess my number:\n";
		skip( 1 );
		int guess;
		cin >> guess;
		skip( 1 );
		switch ( distance( guess , random ) ) {
			case 0:
				cout << "too hight\n";
				cout << "guesses left: " << a << endl;

				break;
			case 1:
				cout << "too low\n";
				cout << "guesses left: " << a << endl;

				break;
			case 2:
				cout << "correct\n";
				cout << "Congradates!!!\n";
				cout << "Final Score: " << ( score / 10 ) * 100 << endl;
				skip( 3 );
				a = 0;
				break;
		}
		a--;
	}
	switch ( question( ) ) {
		case 0:
			trials( );
		case 1:
			exit( 1 );
	}
}
void secret_password(  ) {
	string pass;
	string password = "ACC";
	cout << "what is the password?\n";
	cin >> pass;
	if ( password == pass ) {
		trials(  );
		//exit( 0 );
	}
	cout << "try again\n";
	skip( 25 );
	secret_password(  );

}
