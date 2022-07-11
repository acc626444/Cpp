#include <iostream>
using namespace std;
void ab(string input, string output) {
	if ( input == "yes" ) {
		cout << output << endl;
	}
	else {
		cout << "Too back. Here it is!\n";
	}
}
void error( string input, string output  ) {
		if ( input != "yes" || input != "no" ) {
			ab( input , output );
	}
		else {
			exit( 1 );
			//error( input , output );
		}
}
