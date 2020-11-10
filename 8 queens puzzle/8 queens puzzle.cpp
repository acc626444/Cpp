#include <iostream>
using namespace std;
string g[8][8];
string queen = "* ";
bool puzzle(int q, int u);
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
	//column
	for (int a = y + 1; a < 8; a++) {
		if (g[x][a] == queen) {
			//cout << "column up found" << endl;
			return true;			
		}
	}
	for (int a = y - 1; a >= 0; a--) {
		if (g[x][a] == queen) {
			//cout << "column down found" << endl;
			return true;
		}
	}

	//row
	for (int b = x + 1; b < 8; b++) {
		if (g[b][y] == queen) {
			//cout << "row right found" << endl;
			return true;
		}
	}
	for (int b = x - 1; b >= 0; b--) {
		if (g[b][y] == queen) {
			//cout << "row left found" << endl;
			return true;
		}
	}

	//diagonal 

	//up right
	int b = x + 1;
	for (int a = y + 1; a < 8 && b < 8; a++) {
		if (g[b][a] == queen) {
			//cout << "up right found" << endl;
			return true;			
		}
		b++;

	}

	//down left
	b = x - 1;
	for (int a = y + 1; a < 8 && b >= 0; a++) {
		cout << b << " " << a << endl;
		if (g[b][a] == queen) {
			//cout << "down left found" << endl;
			return true;
		}
		b--;
	}

	//up left
	b = x - 1;
	for (int a = y - 1; a >= 0 && b >= 0; a--) {
		if (g[b][a] == queen) {
			//cout << "up left found" << endl;
			return true;
		}
		b--;
	}

	//down right
	b = x + 1;
	for (int a = y - 1; a >= 0 && b < 8; a--) {
		if (g[b][a] == queen) {
			//cout << "down right found" << endl;
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
void remove_queen(int x, int y) {
	if (x < 0 || x>7|| y < 0 || y > 7) {
		cout << "out of bound" << endl;
		cout << x << endl;
		cout << y << endl;
		exit(1);
	}
	
	g[x][y] = "+ ";
}
int check_column(int q, int u) {
	// 1) only 1 column at a time (q) 2) start at spot (u) 3) return -1 (false), return spot
}
bool puzzle() {
	/*if (q < 8 && u < 8) {//works
		if (action(q, u)==false) {// doesn't hit
			set_queen(q, u);
			if (puzzle(q + 1, 0) == true) {// attacks queen
				return true;
			}
			else {//not work// queen causes future column to not work
				return puzzle(q, u + 1);
			}
		}
		else {
			if (u + 1 >= 8) {//not work // u more than 8
				return false;
			}
			else {
				if (puzzle(q, u + 1) == true) {//works
					return true;
				}
				else {//not work // run out of space in colunm
					puzzle(q - 1, u);
				}
			}
		}
	}
	else if (u >= 8) {
		cout << "u higher than 8";
		exit(1);
	}
	else{
		cout << "congrates" << endl;
		return true;
	}*/
	int q = 0;
	int ads [8] = { -1,-1,-1,-1,-1,-1,-1,-1 };
	while (q < 8) {//need to check 1st column
		int a = check_column(q, ads[q]+1);
		if (a >= 0) {
			ads[q] = a;
			q++;
		}
		else {	
			ads[q] = -1;
			q--;
			remove_queen(q, ads[q]);
		}
	}
	cout << "congrates!!!" << endl;
	return true;
}
int main() {
	return 0;
}