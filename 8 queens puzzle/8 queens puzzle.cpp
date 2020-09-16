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
			cout << g[b][a];
		}
		cout << endl;
	}
}
bool action(int x, int y) {
	//
	//column
	for (int a = y + 1; a < 8; a++) {
		if (g[x][a] == queen) {
			cout << "column up found" << endl;
			return true;			
		}
	}
	for (int a = y - 1; a >= 0; a--) {
		if (g[x][a] == queen) {
			cout << "column down found" << endl;
			return true;
		}
	}

	//row
	for (int b = x + 1; b < 8; b++) {
		if (g[b][y] == queen) {
			cout << "row right found" << endl;
			return true;
		}
	}
	for (int b = x - 1; b >= 0; b--) {
		if (g[b][y] == queen) {
			cout << "row left found" << endl;
			return true;
		}
	}

	//diagonal 

	//up right
	int b = x + 1;
	for (int a = y + 1; a < 8 && b < 8; a++) {
		if (g[b][a] == queen) {
			cout << "up right found" << endl;
			return true;			
		}
		b++;

	}

	//down left
	b = x - 1;
	for (int a = y + 1; a < 8 && b >= 0; a++) {
		cout << b << " " << a << endl;
		if (g[b][a] == queen) {
			cout << "down left found" << endl;
			return true;
		}
		b--;
	}

	//up left
	b = x - 1;
	for (int a = y - 1; a >= 0 && b >= 0; a--) {
		if (g[b][a] == queen) {
			cout << "up left found" << endl;
			return true;
		}
		b--;
	}

	//down right
	b = x + 1;
	for (int a = y - 1; a >= 0 && b < 8; a--) {
		if (g[b][a] == queen) {
			cout << "down right found" << endl;
			return true;
		}
		b++;
	}
	cout << "not found" << endl;
	return false;
}
void set_queen(int q, int w)	 {
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
	set_queen(3, 7);
	set_queen(4, 6);
	print_board();
	cout << action(4, 6) << endl;
	return 0;
}