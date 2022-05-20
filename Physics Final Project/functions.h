#include <iostream>
using namespace std;
void space(int x) {
	for (int w = 0; w < x; w++) {
		cout << endl;
	}
}
void print_def() {
	cout << "Definition: The function of PRINT sends texts, variables, or another object to the screen." << endl << endl;
	cout << "1) To PRINT to the screen, start by typing the word cout. cout means character output." << endl;
	cout << "2) Directly after typing cout, you  must type << which tells the computer to display a stream of characters." << endl;
	cout << "3) After typing cout <<, you will need to type your statement. This means here you will tell the computer what you want the code to do.";
	cout << "This is what the screen will PRINT. " << endl;
	cout << "4) If you want the screen to show code on a new line after you PRINT, use << again and and endl after. This is the same thing as saying enter after the PRINT" << endl;
	cout << "5) Type ; to end the line of code. This is used for any code. It represent period to a computer, saying 'This line of code is done.' " << endl;
	cout << "Disclaimer: **IOf your statement is in letters, it needs to be incloses in double quotations, however I cannot display that here because I am writing in code." << endl << "              Therefor, I be using single quotations**" << endl;
	space(1);
	cout << "The line should look like this:" << endl;
	cout << "cout << 'your statement' << endl;" << endl;
}
void print_ex() {
	cout << "example 1a (I am telling the computer to PRINT 0, skip a line, and end the code):" << endl;
	cout << "cout << 0 << endl;" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "0" << endl;
	cout << "[Code ends here]" << endl;
	space(2);
	cout << "example 1b (I am telling the computer to PRINT 0 and end the code on the same line):" << endl;
	cout << "cout << 0;" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "0 [Code ends here]";

	space(2);
	cout << "example 2a (I am telling the computer to PRINT hi, skip a line, and end the code):" << endl;
	cout << "cout << 'hi' << endl;  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "hey" << endl;
	cout << "[Code ends here]" << endl;
	space(2);

	cout << "example 2b (I am telling the computer to PRINT hi and end the code on the same line):" << endl;
	cout << "cout << 'hi' << endl;  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "hey [Code ends here]";
	space(2);
}
void if_def() {
	cout << "Definition: The function of IF only activates if the statement inside is true." << endl << endl;
	cout << "1) Type thec word if. This tells the computer 'I am using the if condition' " << endl;
	cout << "2) After if, type () directly after. This tells the computer that a condition is being used. In () is where you put your condition." << endl;
	cout << "3) After if (), type you statement. This wil ONLY WORK IF it is true. The statement is the condition you want to happen in order to run what is inside the function." << endl;
	cout << "4) The next step is to add {}. This is what is going to happen if the condition is true." << endl;
	cout << "5) The major important part id done! Now for the fun part. Between {}, put any line of code you want to happen if the condition is true." << endl;
	cout << "Disclaimer: **If your statement is in letters, it needs to be incloses in double quotations, however I cannot display that here because I am writing in code." << endl << "              Therefor, I be using single quotations**" << endl;
	space(1);
	cout << "the line will look like:" << endl;
	cout << "if ('your condition') { do this } " << endl;
}
void if_ex() {
	cout << "example 1a (variable x is equal to integer 1, PRINT 1):" << endl;
	cout << "int x = 1;" << endl;
	cout << "if (x == 1){" << endl;
	cout << "x+1;" << endl;
	cout << "cout << 1;" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "line 1: 1" << endl << "[Code ends here]" << endl;
	space(2);

	cout << "example 1b (variable x is equal to integer 1, PRINT 1):" << endl;
	cout << "" << endl;
	cout << "if (x == 1){" << endl;
	cout << "x+1;" << endl;
	cout << "cout << 1;" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "line 1: 1" << endl << "line 2:" << endl << "[Code ends here]" << endl;
	space(2);

	cout << "example 2a (variable x is equal to string 'hey'. IF x ios equal to hey, PRINT hey):" << endl;
	cout << "string y = 'hey';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "if (y == 'hey'){  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "cout << 'hey';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "y = 'yo';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "line 1: hey" << endl << "[Code ends here]" << endl;
	space(2);

	cout << "example 2b (variable x is equal to string 'hey'. IF x ios equal to hey, PRINT hey):" << endl;
	cout << "if (y == 'hey'){  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "cout << 'hey';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "line 1: hey" << endl << "line 2:" << endl << "[Code ends here]" << endl;
	space(2);
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