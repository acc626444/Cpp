#include <iostream>
using namespace std;
void ab ( string input, string output ) {
	if ( input != "yes" || input != "no" ) {
		cout << "try again/n";
	}
	else {
		if ( input == "yes" ) {
			cout << output << endl;
		}
		else {
			cout << "Too bad. Here it is!\n";
			cout << output << endl;
		}
	}
}