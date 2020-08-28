#include <iostream>
using namespace std;
char g[8][8];
char queen = '*';
void make_board() {
	for (int a = 0; a < 8; a++) {
		for (int b = 0; b < 8; b++) {
			g [a][b] = '+';
		}
	}
}
void print_board() {
	for (int a = 0; a < 8; a++) {
		for (int b = 0; b < 8; b++) {
			cout << g[a][b];
		}
		cout << endl;
	}
}
bool action(int y, int x) {

		//column
	for (int a = y+1; a < 8; a++) {
		if (g[x][a] == queen) {
			return true;
		}
	}
	for (int a = y - 1; a >= 0; a--) {
		if (g[x][a] == queen) {
			return true;
		}
	}
		//row
	for (int b = x+1; b < 8; b++) {
		if (g[b][y] == queen) {
			return true;
		}
	}
	for (int b = x - 1; b >= 0; b--) {
		if (g[b][y] == queen) {
			return true;
		}
	}
		//diagonal 


	//up right
	int b = x + 1;
	
	for (int a = y + 1; a < 8 && b < 8; a++) {
		if (g[b][a] == queen) {
			return true;
		}
		b++;
	}

	
	//down left
	b = x - 1;

	for(int a = y - 1; a >= 0 && b >= 0; a--) {
		if (g[b][a] == queen) {
			return true;
		}
		b--;
	}



		//up left
	b = x - 1;

	for (int a = y+1; a < 8 && b >= 0; a++) {
		if (g[b][a] == queen) {
			return true;
		}
		b--;
	}


	//down right
	b = x + 1;

	for (int a = y - 1; a >= 0 && b < 8; a--) {
		if (g[b][a] == queen) {
			return true;
		}
		b++;
	}
}

int main() {
	
	return 0;
}