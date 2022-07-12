#include <iostream>
#include <string>
using namespace std;

int main( ) {
	int choice;

	cout << "Enter a number between 1 and 3 here: ";
	cin >> choice;

	switch ( choice ) {
		case 1:
			cout << "That's a good choice!" << endl;
			break;
		case 2:
			cout << "That's a bad choice." << endl;
			break;
		case 3:
			cout << "That's a choice a kitty cat would make." << endl;
			break;
		default:
			cout << "By choosing not to decide, you still have made a choice." << endl;
	}
}