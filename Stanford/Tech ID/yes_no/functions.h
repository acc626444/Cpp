#include <iostream>
using namespace std;
void ab(string input, string output) {
	cout << "ab function\n";
	if ( input == "yes" ) {
		cout << output << endl;
	}
	else {
		cout << "Too back. Here it is!\n";
	}
}
void error( string input, string output  ) {
	cout << "error function\n";
		if ( input != "yes" || input != "no" ) {
			ab( input , output );
	}
		else {
			exit( 1 );
			//error( input , output );
		}
}
