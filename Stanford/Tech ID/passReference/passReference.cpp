#include "functions.h"
int main( ) {
	string in = "initial value";
	/*getString( in );
	cout << in << endl;
	skip( 3 );
	getstring( in );
	cout << in << endl;
	skip( 3 );*/
	string* pointer;
	pointer = &in;
	skip( 1 );
	cout << "in main..." << endl;
	cout << "pointer memory: " << pointer << endl;
	cout << "pointer value: " << *pointer << endl;
	cout <<"input value"<< in << endl;
	skip( 1 );
	Getstring( pointer );
	skip( 1 );
	cout << "in main..." << endl;
	cout <<"input value: "<< in << endl;

}