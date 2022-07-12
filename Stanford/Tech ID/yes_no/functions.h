#include <iostream>
using namespace std;
void ab( string input , string output ) {
	if ( input == "yes" ) {
		cout << endl << output << endl;
	}
	else {
		cout << endl << "Too back. Here it is:\n";
		cout << output << endl;
	}
}
void error( string input , string output ) {
	if ( input == "yes" ) {
		ab( input , output );
	}
	else if ( input == "no" ) {
		ab( input , output );
	}
	else {
		cout << "Do you want advice\n";
		string b;
		cin >> b;
		error( b , output );
	}
}
