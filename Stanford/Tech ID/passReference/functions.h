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
	cout << "in string";
	skip( 5 );
	cout << "Enter a string: ";
	getline( cin , input );
	cout << "normal string: " << input << endl;
}

void getstring( string& input );
void getstring( string& input ) {
	cout << "in reference";
	skip( 5 );
	cout << "Enter a string: ";
	getline( cin , input );
	cout << "with reference " << input << endl;
}

void Getstring( string* pointer );
void Getstring( string* pointer ) {
	cout << "in pointer";
	skip( 5 );
	cout << "Enter a string: ";
	getline( cin , *pointer );

	skip( 1 );
	cout << "in function..." << endl;
	cout << "pointer memory: " << pointer << endl;
	cout << "pointer value: " << *pointer << endl;
}