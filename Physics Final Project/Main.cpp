#include "functions.h"

void other() {

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


int main() {
	/*
		PRINT
	*/
	//print();
	/*
		CONDITIONS
	*/
	//cout << "IF/ ELSE STATEMENT:" << endl;
	/*
				IF
	*/
	//if_condition();
	/*static CONSOLE_FONT_INFOEX  fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(hOut, 0, &fontex);
	fontex.FontWeight = 700;
	fontex.dwFontSize.X = 36;
	fontex.dwFontSize.Y = 36;
	SetCurrentConsoleFontEx(hOut, NULL, &fontex);
	cout << "This text is bold, like me.\n";


	fontex.FontWeight = 0;
	fontex.dwFontSize.X = 12;
	fontex.dwFontSize.Y = 12;
	SetCurrentFontEx(hOut, NULL, &fontex);
	cout << "This text is not.\n";//<-----------How do I make this line different from the first?
	return 0;*/


}