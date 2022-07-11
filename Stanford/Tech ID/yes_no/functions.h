#include <iostream>
using namespace std;
void ab( string input , string output ) {
	cout << "in ab" << endl;
	if ( input == "yes" ) {
		cout << output << endl;
	}
	else {
		cout << "Too back. Here it is!\n";
	}
}
void error( string input , string output ) {
	cout << "in error" << endl;
	if ( input == "yes" || input == "no" ) {
		cout << 2 << endl;
		ab( input , output );
	}
	else {
		cout << 3 << endl;
		//exit( 1 );
		cout << "Do you want advice\n";
		cin >> b;
		error( b , output );
	}
}
