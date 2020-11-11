#include <iostream>
using namespace std;
string g[8][8];
string queen = "X ";
bool puzzle(int q, int u);
void make_board(int x, int y) {
	for (int a = 0; a < 8; a++) {
		for (int b = 0; b < 8; b++) {
			g[a][b] = "+ ";
			g[x][y] = "x ";
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
		print_board();
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
	// 1) only 1 column at a time (q) 2) start at spot (u) 3) return -1 (false), return spot 4) set queen
	for (int o = u; o < 8; o++) {
		if (!action(q, o)) {
			set_queen(q, o);
			return o;
		}
	}
	return -1;
}
bool puzzle(int a) {
	int q = a;
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
	print_board();
	cout << "congrates!!!" << endl;
	return true;
}
int main() {
	char a;
	cout << "How many queens do you want to start with?" << endl;
	cin >> a;
	if (a<0){
		for (int qw = 0; qw < a; qw++) {
			int e;
			int t;
			cout << "place y coordinate" << qw+1 << endl;
			cin >> e;
			cout << "place x coordinate" << qw+1<< endl;
			cin >> t;
			make_board(t, e);
		}
		puzzle(a);
	}
	else if(a=0) {
		make_board(0,0);
		puzzle(0);
	}
	else {
		cout << "invalide character" << endl;
		exit(1);
	}
	return 0;
}