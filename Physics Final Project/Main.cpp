#include "functions.h"

void print() {
	cout << "writting to the sceeen means to PRINT" << endl;
	space(1);
	print_def();
	space(1);
	print_ex();
	space(11);
}
void if_condition() {
	cout << "IF STATEMENTS:" << endl;
	space(1);
	if_def();
	space(1);
	if_ex();
	space(11);
}
void elseif_condition() {
	cout << "IF ELSE STATEMENTS:" << endl;
	space(1);
	elseif_def();
	space(1);
	elseif_ex();
	space(11);
}
void else_condition() {
	cout << "ELSE STATEMENTS:" << endl;
	space(1);
	else_def();
	space(1);
	else_ex();
	space(11);
}
void for_loop() {
	cout << "FOR LOOP:" << endl;
	space(1);
	for_def();
	space(1);
	for_ex();
	space(11);
}
void while_loop() {
	cout << "WHILE LOOP:" << endl;
	space(1);
	while_def();
	space(1);
	while_ex();
	space(11);
}



int main() {
	/*
			PRINT
	*/
	print();

	/*
			IF
	*/
	if_condition();

	/*
			ELSE IF
	*/
	elseif_condition();

	/*
			ELSE
	*/
	else_condition();

	/*
			FOR
	*/
	for_loop();

	/*
			WHILE
	*/
	while_loop();
}