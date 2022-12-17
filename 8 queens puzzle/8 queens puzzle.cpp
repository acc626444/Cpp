#include <iostream>
using namespace std;
string g[8][8];
string queen = "X ";
string queen2 = "O ";
bool puzzle(int q, int u);
void make_board() {
	for (int a = 0; a < 8; a++) {
		for (int b = 0; b < 8; b++) {
			g[a][b] = "+ ";
		}
	}
}
bool start_column_check(int q) {
	for (int x = 0; x < 8; x++) {
		if (g[q][x]== queen2) {
			return true;
		}
	}
	return false;
}
void print_board() {
	cout << endl;
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
		if (g[x][a] != "+ ") {
			//cout << "column up found" << endl;
			return true;			
		}
	}
	for (int a = y - 1; a >= 0; a--) {
		if (g[x][a] != "+ ") {
			//cout << "column down found" << endl;
			return true;
		}
	}

	//row
	for (int b = x + 1; b < 8; b++) {
		if (g[b][y] != "+ ") {
			//cout << "row right found" << endl;
			return true;
		}
	}
	for (int b = x - 1; b >= 0; b--) {
		if (g[b][y] != "+ ") {
			//cout << "row left found" << endl;
			return true;
		}
	}

	//diagonal 

	//up right
	int b = x + 1;
	for (int a = y + 1; a < 8 && b < 8; a++) {
		if (g[b][a] != "+ ") {
			//cout << "up right found" << endl;
			return true;			
		}
		b++;

	}

	//down left
	b = x - 1;
	for (int a = y + 1; a < 8 && b >= 0; a++) {
		if (g[b][a] != "+ ") {
			//cout << "down left found" << endl;
			return true;
		}
		b--;
	}

	//up left
	b = x - 1;
	for (int a = y - 1; a >= 0 && b >= 0; a--) {
		if (g[b][a] != "+ ") {
			//cout << "up left found" << endl;
			return true;
		}
		b--;
	}

	//down right
	b = x + 1;
	for (int a = y - 1; a >= 0 && b < 8; a--) {
		if (g[b][a] != "+ ") {
			//cout << "down right found" << endl;
			return true;
		}
		b++;
	}
	return false;
}
void set_queen(int q, int w)	 {
	if (q < 0 || w < 0 || q>7 || w>7) {
		cout << "out of bound set_queen" << endl;
		cout << q << ", " << w << endl;
		print_board();
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
void starting_queen(int q, int w) {
	if (q < 0 || w < 0 || q>7 || w>7) {
		cout << "out of bound starting queen" << endl;
		cout << q << ", " << w << endl;
		print_board();
		exit(1);
	}
	else if (g[q][w] != "+ ") {
		cout << "taken" << endl;
		cout << q << ", " << w << endl;
		print_board();
		exit(1);
	}
	g[q][w] = queen2;
}
void remove_queen(int x, int y) {
	if (x < 0 || x>7|| y < 0 || y > 7) {
		cout << "out of bound remove queen" << endl;
		cout << x << endl;
		cout << y << endl;
		print_board();
		exit(1);
	}
	g[x][y] = "+ ";
}
int check_column(int q, int u) {
	for (int o = u; o < 8; o++) {
		if (!action(q, o)) {
			set_queen(q, o);
			return o;
		}
	}
	return -1;
}
bool puzzle() {
	int q = 0;
	int ads[8] = { -1,-1,-1,-1,-1,-1,-1,-1 };
	while (q < 8) {//need to check 1st column
		if (start_column_check(q) == false) {
			int a = check_column(q, ads[q] + 1);
			if (a >= 0) {
				ads[q] = a;
				q++;
			}
			else {
				print_board(); // skip column with O going backwards//

				if (g[q][ads[q]] == "O ") {
					q--;
				}
				else {
					print_board(); // skip column with O going backwards
					cout << endl;
					ads[q] = -1;
					q--;
					if (g[q][ads[q]] == "O ") {
						q--;
					}
					for (; start_column_check(q); q--) {}
					if (g[q][ads[q]] == "O ") {
						q--;
					}
					remove_queen(q, ads[q]);////
				}
			}
		}
		else {
			q++;
		}
		print_board();
		
	}
	cout << "congrates!!!" << endl;
	return true;
}

int main() {
	make_board(); 
	make_board();
	/*int a;
	cout << "How many queens do you want to start with?" << endl;
	cin >> a;
	if (a>0){
		for (int qw = 0; qw < a; qw++) {
			int e;
			int t;
			cout << "place y coordinate" << endl;
			cin >> e;
			cout << "place x coordinate" << endl;
			cin >> t;
			starting_queen(t, e);
			if (action(t, e) == true) {
				print_board();
				cout << "DOES NOT WORK!!!" << endl;
				exit(1);
			}
		}
		puzzle();
	}
	else if(a==0) {
		puzzle();
	}
	else {
		cout << "invalide character" << endl;
		exit(1);
	}*/
	puzzle();
	return 0;
}