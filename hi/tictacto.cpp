#include <iostream>
#include "tictactor.h"
using namespace std;
void q() {
	char the_board[3][3] = { {'+','+','+'}, {'+','+','+'}, {'+','+','+'} };
	char player = 'x';
	while (true) {
		for (int a = 0; a < 3; a++) {
			for (int b = 0; b < 3; b++) {
				cout << the_board[a][b];
			}
			cout << endl;
		}
		bool w = true;
		int x;
		int y;
		while (w) {
			cout << "give x coordinate" << endl;
			cin >> x;
			cout << endl;
			cout << "give y coordinate" << endl;
			cin >> y;
			cout << endl;
			if (x < 0 || y < 0 || x>2 || y>2 || the_board[x][y] != '+') {
				cout << "try again" << endl;
			}
			else {
				w = false;
			}
		}
		the_board[y][x] = player;
		if (player == 'x') {
			player = 'o';
		}
		else {
			player = 'x';
		}
		//column
		for (int c = 0; c < 3; c++) {
			if (the_board[0][c] == the_board[1][c] && the_board[1][c] == the_board[2][c] && the_board[2][c] != '+') {
				cout << "congrates player " << player << endl;
			}
		}
		//row
		for (int d = 0; d < 3; d++) {
			if (the_board[d][0] == the_board[d][1] && the_board[d][1] == the_board[d][2] && the_board[d][2] != '+') {
				cout << "congrates player " << player << endl;
			}
		}
		//diagonal left to right
		if (the_board[0][0] == the_board[1][1] && the_board[1][1] == the_board[2][2] && the_board[2][2] != '+') {
			cout << "congrates player " << player << endl;

		}
		//diagonal right to left
		if (the_board[2][0] == the_board[1][1] && the_board[1][1] == the_board[0][2] && the_board[0][2] != '+') {
			cout << "congrates player " << player << endl;
		}
	}
}