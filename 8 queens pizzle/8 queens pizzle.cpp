#include <iostream>
using namespace std;
char g[8][8] = { {'+','+','+'}, {'+','+','+'}, {'+','+','+'} {'+','+','+'}, {'+','+','+'}, {'+','+','+'}, {'+','+','+'}, {'+','+','+'} };
char queen = '*';
int action() {
	while (true) {
		for (int a = 0; a < 3; a++) {
			for (int b = 0; b < 3; b++) {
				cout << g[a][b];
			}
			cout << endl;
		}


		//column

		//row

		//diagonal left to right

		//diagonal right to left
	}
}

int main() {
	
	return 0;
}