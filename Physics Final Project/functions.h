#include <iostream>
using namespace std;
void space(int x) {
	for (int w = 0; w < x; w++) {
		cout << endl;
	}
}
void print_def() {
	cout << "to print to terminal, use 'cout'." << endl;
	cout << "use '<<' between code and phrases" << endl;
	cout << "use 'endl' to skip a line after printing" << endl;
	cout << "use ';' to end a line of code" << endl;
	space(1);
	cout << "the line will look like:" << endl;
	cout << "cout << 'statement' << endl;" << endl;
}
void print_ex() {
	cout << "example:" << endl;
	cout << "cout << 0 << endl;" << endl;
	space(2);
	cout << "terminal:" << endl;
	cout << "0" << endl;

}
void if_def() {
	cout << "if is a condition" << endl;
	cout << "() is where you put your condition" << endl;
	cout << "in here {} is where is put what you want to happen<" << endl;
	space(1);
	cout << "the line will look like:" << endl;
	cout << "if (condition is true) { do this } " << endl;
}
void if_ex() {
	cout << "example:" << endl;
	cout << "int x = 1;" << endl;
	cout << "if (x == 1){" << endl;
	cout << "x++;" << endl;
	cout << "cout << 1;" << endl;
	cout << "}" << endl;
	space(2);
	cout << "terminal:" << endl;
	cout << "1" << endl;
}
void elseif_def() {
	cout << "else if is a secondary condition" << endl;
	space(1);
	cout << "the line will look like:" << endl;
	cout << "else if (condition is true) { do this } " << endl;

}
void elseif_ex() {
	cout << "example:" << endl;
	cout << "else if (x == 2){" << endl;
	cout << "cout << 2;" << endl;
	cout << "}" << endl;
	space(2);
	cout << "terminal:" << endl;
	cout << "2" << endl;
}
void else_def() {
	cout << "else is a condition" << endl;
	space(1);
	cout << "the line will look like:" << endl;
	cout << "else { do this } " << endl;
}
void else_ex() {
	cout << "example:" << endl;
	cout << "else {" << endl;
	cout << "cout << 3;" << endl;
	cout << "}" << endl;
	space(2);
	cout << "terminal:" << endl;
	cout << "3" << endl;
}
void for_def() {
	cout << "for is use to make a loop with an increasing variable or for a specific amount of time" << endl;
	cout << "# is a stand in for a number" << endl;
	cout << "x is a stand in for a variable name" << endl;
	cout << "x++ adds 1 to a variable" << endl;
	space(1);
	cout << "the line will look like:" << endl;
	cout << "for(int x = 0; x < #; x++) { do this } " << endl;
}
void for_ex() {
	cout << "example:" << endl;
	cout << "for(int v = 0; v < 2; v++){" << endl;
	cout << "cout << v;" << endl;
	cout << "}" << endl;
	space(2);
	cout << "terminal:" << endl;
	cout << "1" << endl;
	cout << "2" << endl;
	cout << "3" << endl;
}
void while_def() {
	cout << "while is use to make an infinite loop" << endl;
	cout << "make sure to make sure it stops at some point" << endl;
	space(1);
	cout << "the line will look like:" << endl;
	cout << "while (condition is true) { do this } " << endl;
}
void while_ex() {
	cout << "int y = 10;" << endl;
	cout << "example:" << endl;
	cout << "while(y == 10) {" << endl;
	cout << "cout << 'hey';" << endl;
	cout << "y = 11;" << endl;
	cout << "}" << endl;
	space(2);
	cout << "terminal:" << endl;
	int y = 10;
	while (y == 10) {
		cout << "hey" << endl;
		y = 11;
	}
}