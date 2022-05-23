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
	cout << "Disclaimer: **If your statement is in letters, it needs to be incloses in double quotations, however I cannot display that here because I am writing in code." << endl;
	cout << "              Therefor, I be using single quotations**" << endl;
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
	cout << "Definition: The function activates granted that the given condition is true." << endl << endl;
	cout << "1) Type the word else if. This tells the computer 'I am using the if condition' " << endl;
	cout << "2) After if, type () directly after. This tells the computer that a condition is being used. In () is where you put your condition." << endl;
	cout << "3) After if (), type you statement. This will ONLY WORK IF it is true. The statement is the condition you want to happen";
	cout << " in order to run what is inside the function." << endl;
	cout << "4) The next step is to add {}. This is what is going to happen if the condition is true." << endl;
	cout << "5) The major important part is done! Now for the fun part. Between {}, put any line of code you want to happen if the condition is true." << endl;
	cout << "Disclaimer: **If your statement is in letters, it needs to be enclosed in double quotations, however I cannot display that here because I am writing in code." << endl;
	cout << "              Therefor, I be using single quotations**" << endl;
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
	cout << "1 [Code ends here]" << endl;
	space(2);

	cout << "example 1b (variable x is equal to integer 1, PRINT 1):" << endl;
	cout << "int x = 1;" << endl;
	cout << "if (x == 1){" << endl;
	cout << "x+1;" << endl;
	cout << "cout << 1 << endl;" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "1" << endl << "[Code ends here]" << endl;
	space(2);

	cout << "example 2a (variable x is equal to string 'hey'. IF x ios equal to hey, PRINT hey):" << endl;
	cout << "string y = 'hey';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "if (y == 'hey'){  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "cout << 'hey';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "y = 'yo';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "hey [Code ends here]" << endl;
	space(2);

	cout << "example 2b (variable x is equal to string 'hey'. IF x ios equal to hey, PRINT hey):" << endl;
	cout << "string y = 'hey';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "if (y == 'hey'){  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "cout << 'hey' << endl;  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "hey" << endl << "[Code ends here]" << endl;
	space(2);
}
void elseif_def() {
	cout << "Definition: The function activates granted that the given condition is true. It is an  addon to the if(){} function." << endl << endl;
	cout << "1) Type the word else if. This tells the computer 'I am using a 2nd condition' " << endl;
	cout << "2) After else if, type () directly after. This tells the computer that a condition is being used. In () is where you put your condition." << endl;
	cout << "3) After else if (), type you statement. This will ONLY WORK IF it is true. The statement is the condition you want to happen";
	cout << " in order to run what is inside the function." << endl;
	cout << "4) The next step is to add {}. This is what is going to happen if the condition is true." << endl;
	cout << "5) The major important part is done! Now for the fun part. Between {}, put any line of code you want to happen if the condition is true." << endl;
	cout << "Disclaimer: **If your statement is in letters, it needs to be enclosed in double quotations, however I cannot display that here because I am writing in code." << endl;
	cout << "              Therefor, I be using single quotations**" << endl;
	space(1);
	cout << "the line will look like:" << endl;
	cout << "else if ('your condition') { do this } " << endl;
}
void elseif_ex() {
	cout << "example 1a (variable x is equal to integer 1, PRINT 1):" << endl;
	cout << "int x = 1;" << endl;
	cout << "if (x == 0){" << endl;
	cout << "x+1;" << endl;
	cout << "cout << 0;" << endl;
	cout << "}" << endl;
	cout << "else if (x == 1){" << endl;
	cout << "x+1;" << endl;
	cout << "cout << 1;" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "1 [Code ends here]" << endl;
	space(2);

	cout << "example 1b (variable x is equal to integer 1, PRINT 1):" << endl;
	cout << "int x = 1;" << endl;
	cout << "if (x == 0){" << endl;
	cout << "x+1;" << endl;
	cout << "cout << 0;" << endl;
	cout << "}" << endl;
	cout << "else if (x == 1){" << endl;
	cout << "x+1;" << endl;
	cout << "cout << 1 << endl;" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "1" << endl << "[Code ends here]" << endl;
	space(2);

	cout << "example 2a (variable x is equal to string 'hey'. IF x ios equal to hey, PRINT hey):" << endl;
	cout << "string y = 'hey';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "if (x == 'yo'){" << endl;
	cout << "cout << 'yo';" << endl;
	cout << "}" << endl;
	cout << "else if (y == 'hey'){  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "cout << 'hey';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "hey [Code ends here]" << endl;
	space(2);

	cout << "example 2b (variable x is equal to string 'hey'. IF x ios equal to hey, PRINT hey):" << endl;
	cout << "string y = 'hey';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "if (x == 'yo'){" << endl;
	cout << "cout << 'yo' << endl;" << endl;
	cout << "}" << endl;
	cout << "else if (y == 'hey'){  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "cout << 'hey';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "hey" << endl << "[Code ends here]" << endl;
	space(2);
}
void else_def() {
	cout << "Definition: The function activates when allother conditions are false." << endl << endl;
	cout << "1) Type the word else. This tells the computer 'when all other conditions are false' " << endl;
	cout << "2) After else, type {} directly after. no need for (), because all other conditions were not true." << endl;
	cout << "3) Between {}, put any line of code you want to happen if the other conditions are not true." << endl;
	cout << "Disclaimer: **If your statement is in letters, it needs to be enclosed in double quotations, however I cannot display that here because I am writing in code." << endl;
	cout << "              Therefor, I be using single quotations**" << endl;
	space(1);
	cout << "the line will look like:" << endl;
	cout << "else { do this } " << endl;
}
void else_ex() {
	cout << "example 1a (variable x is not equal to integer 0, PRINT x=? ):" << endl;
	cout << "int x = 1;" << endl;
	cout << "if (x == 0){" << endl;
	cout << "x+1;" << endl;
	cout << "cout << 0;" << endl;
	cout << "}" << endl;
	cout << "else {" << endl;
	cout << "cout << x = 1 << endl;" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "x = 1" << endl << "[Code ends here]" << endl;
	space(2);

	cout << "example 1b (variable x is equal to integer 1, PRINT 1):" << endl;
	cout << "int x = 1;" << endl;
	cout << "if (x == 0){" << endl;
	cout << "x+1;" << endl;
	cout << "cout << 0;" << endl;
	cout << "}" << endl;
	cout << "else {" << endl;
	cout << "cout << x = 1;" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "x = 1 [Code ends here]" << endl;
	space(2);

	cout << "example 2a (variable x is equal to string 'hey'. IF x ios equal to hey, PRINT hey):" << endl;
	cout << "string y = 'hey';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "if (y == 'yo'){  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "cout << 'yo';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "}" << endl;
	cout << "else {" << endl;
	cout << "cout << 'hey' << endl;  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "hey" << endl << "[Code ends here]" << endl;
	space(2);

	cout << "example 2b (variable x is equal to string 'hey'. IF x ios equal to hey, PRINT hey):" << endl;
	cout << "string y = 'hey';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "if (y == 'yo'){  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "cout << 'yo';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "}" << endl;
	cout << "else {" << endl;
	cout << "cout << 'hey';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	cout << "hey [Code ends here]" << endl;
	space(2);
}
void for_def() {
	cout << "Definition: The function activates for a certain amount of time." << endl << endl;
	cout << "1) Type the word for. This tells the computer 'I am using a condition repeatatively' " << endl;
	cout << "2) After for, type () directly after. This tells the computer that a condition is being used. " << endl;
	cout << "3) After for (), inside the (), type int x=0; x<#; x++ . This statement tells the computer";
	cout << " 'hey, variable x is 0. As long as x is less than, you number of choice," << endl;
	cout << " do something and increase x by 1' " << endl;
	cout << "4) After for (statement), type {} directly after." << endl;
	cout << "5) Between {}, put any line of code you want to happen repeatedly." << endl;
	space(1);
	cout << "the line will look like:" << endl;
	cout << "for(int x = 0; x < #; x++) { do this } " << endl;
}
void for_ex() {
	cout << "example 1a (every times v is less than, print the number of previous repeatitions):" << endl;
	cout << "for (int v = 0; v < 2; v++){" << endl;
	cout << "cout << v;" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	for (int x = 0; x < 2; X++) {
		cout << v;
	}
	cout << "[Code ends here]" << endl;
	space(2);

	cout << "example 1b (every times v is less than, print the number of previous repeatitions):" << endl;
	cout << "for (int v = 0; v < 3; v++){" << endl;
	cout << "cout << v << endl;" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	for (int x = 0; x < 3; X++) {
		cout << v << endl;
	}
	cout << "[Code ends here]" << endl;
	space(2);

	cout << "example 2a (every times v is less than, print yo):" << endl;
	cout << "for (int v = 0; v < 6; v++){" << endl;
	cout << "cout << 'yo';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	for (int x = 0; x < 6; X++) {
		cout << "yo";
	}
	cout << "[Code ends here]" << endl;
	space(2);

	cout << "example 2b (every times v is less than, print yo):" << endl;
	cout << "for (int v = 0; v < 5; v++){" << endl;
	cout << "cout << 'yo' << endl;  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	for (int x = 0; x < 5; X++) {
		cout << "yo" << endl;
	}
	cout << " [Code ends here]" << endl;
	space(2);
}
void while_def() {
	cout << "Definition: The function activates for a infinite amount of times." << endl << endl;
	cout << "1) Type the word while. This tells the computer 'I am using a condition repeatatively' " << endl;
	cout << "3) After while (), type you statement. This will ONLY WORK IF it is true. The statement is the condition you want to happen";
	cout << " in order to run what is inside the function." << endl;
	cout << "4) The next step is to add {}. This is what is going to happen if the condition is true." << endl;
	cout << "5) The major important part is done! Now for the fun part. Between {}, put any line of code you want to happen if the condition is true." << endl;
	cout << "Disclaimer: **If your statement is in letters, it needs to be enclosed in double quotations, however I cannot display that here because I am writing in code." << endl;
	cout << "              Therefor, I be using single quotations**" << endl;	space(1);
	cout << "the line will look like:" << endl;
	cout << "while('your statement') { do this } " << endl;
}
void while_ex() {
	cout << "example: 1a (while x is equal to 10, print hey" << endl;
	cout << "int y = 10;" << endl;
	cout << "while(y == 10) {" << endl;
	cout << "cout << 'hey';  (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "y = 11;" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	int y = 10;
	while (y == 10) {
		cout << "hey";
		y = 11;
	}
	cout << " [Code ends here]" << endl;
	space(2);

	cout << "example: 1b (while x is equal to 10, print hey" << endl;
	cout << "int y = 9;" << endl;
	cout << "while(y == 9) {" << endl;
	cout << "cout << 'hey' << endl; (NOTE: remember to use DOUBLE QUOTATIONS)" << endl;
	cout << "y = 13;" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	int y = 9;
	while (y == 9) {
		cout << "hey" << endl;
		y = 13;
	}
	cout << " [Code ends here]" << endl;
	space(2);

	cout << "example: 2a (while x is equal to 10, print hey" << endl;
	cout << "int y = 9;" << endl;
	cout << "while(y == 9) {" << endl;
	cout << "cout << y;" << endl;
	cout << "y = 11;" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	int y = 9;
	while (y == 9) {
		cout << y;
		y = 11;
	}
	cout << " [Code ends here]" << endl;
	space(2);
	cout << "example: 2b (while x is equal to 10, print hey" << endl;
	cout << "int y = 10;" << endl;
	cout << "while(y == 10) {" << endl;
	cout << "cout << y << endl;" << endl;
	cout << "y = 11;" << endl;
	cout << "}" << endl;
	space(1);
	cout << "What you see on the screen after printing:" << endl;
	int y = 10;
	while (y == 10) {
		cout << y << endl;
		y = 11;
	}
	cout << " [Code ends here]" << endl;
	space(2);
}

