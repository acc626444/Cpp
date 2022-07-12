#include <string>
#include <iostream>
using namespace std;
void skip( int a ) {
	for ( int b = 0; b < a; b++ ) {
		cout << endl;
	}
}
void getString( string input );
void getString( string input ) {
	cout << "Enter a string: ";
	getline( cin , input );
	cout << "normal string: " << input << endl;
}

void getstring( string& input );
void getstring( string& input ) {
	cout << "Enter a string: ";
	getline( cin , input );
	cout << "with reference " << input << endl;
}

void Getstring( string* input );
void Getstring( string* input ) {
	cout << "Enter a string: ";
	getline( cin , input );
	cout << "with pointer " << input << endl;
}