#include "functions.h"
int main() {
	/*
		PRINT
	*/
	cout << "PRINT STAEMENT:" << endl;
	print_def();
	space(1);
	print_ex();
	space(3);
	/*
		CONDITIONS
	*/
	cout << "IF/ ELSE STATEMENT:" << endl;
	/*
				IF
	*/
	if_def();
	space(1);
	if_ex();
	space(2);
	/*
		ELSE IF
*/
	elseif_def();
	space(1);
	elseif_ex();
	space(2);
	/*
			ELSE
	*/

	else_def();
	space(1);
	else_ex();
	space(3);
	/*
			FOR
	*/
	cout << "FOR LOOP:" << endl;
	for_def();
	space(1);
	for_ex();
	space(3);
	/*
			WHILE
	*/
	cout << "WHILE LOOP:" << endl;
	while_def();
	space(1);
	while_ex();
	space(3);
}