#include <iostream>
using namespace std;
string g[8][8];
string queen = "* ";
void make_board() {
	for (int a = 0; a < 8; a++) {
		for (int b = 0; b < 8; b++) {
			g[a][b] = "+ ";
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
bool action(int x, int y) {

	//column
	for (int a = x + 1; a < 8; a++) {
		if (g[x][a] == queen) {
			return true;
		}
	}
	for (int a = x - 1; a >= 0; a--) {
		if (g[x][a] == queen) {
			return true;
		}
	}

	//row
	for (int b = y + 1; b < 8; b++) {
		if (g[b][y] == queen) {
			return true;
		}
	}
	for (int b = y - 1; b >= 0; b--) {
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

	for (int a = y - 1; a >= 0 && b >= 0; a--) {
		if (g[b][a] == queen) {
			return true;
		}
		b--;
	}

	//up left
	b = x - 1;

	for (int a = y + 1; a < 8 && b >= 0; a++) {
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
	return false;
}
void set_queen(int q, int w) {
	if (q < 0 || w < 0 || q>7 || w>7) {
		cout << "out of bound" << endl;
		cout << q << ", " << w << endl;
		exit(1);
	}
	else if (g[q][w] != "+ ") {
		cout << "taken" << endl;
		cout << q << ", " << w << endl;
		exit(1);
	}
	g[q][w] = queen;
}
int main() {
	make_board();
	set_queen(1, 3);
	print_board();
	return 0;
}