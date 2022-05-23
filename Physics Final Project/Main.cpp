#include "functions.h"

void while_loop() {
	cout << "WHILE LOOP:" << endl;
	while_def();
	space(1);
	while_ex();
	space(3);
}
void print() {
	cout << "writting to the sceeen means to PRINT" << endl;
	print_def();
	space(1);
	print_ex();
	space(3);
}
void if_condition() {
	if_def();
	space(1);
	if_ex();
	space(2);
}
void elseif_condition() {
	elseif_def();
	space(1);
	elseif_ex();
	space(2);
}
void else_condition() {
	else_def();
	space(1);
	else_ex();
	space(3);
}
void for_loop() {
	cout << "FOR LOOP:" << endl;
	for_def();
	space(1);
	for_ex();
	space(3);
}


int main() {
	/*
		PRINT
	*/
	//print();
	/*
		CONDITIONS
	*/
	cout << "IF/ ELSE STATEMENT:" << endl;
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