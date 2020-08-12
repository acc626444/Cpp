
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int add_0(int a, int b) {
	int q = 0;
	int c=0;
	while (c < b) {
		q = q + (a * 10);
}
	return q;
}
/*int convert_digits(string a) {
	int as = a.size();
	int q = 0;
	int t = 0;
	for (int a = 0; a < as; a++) {                                  //if 1= 1, if 10= 1 + one 0
		// a control num of 0
		
		for (int s = 0; s < as; s++) {
			//adds num
			q = a[s] - 48;
			t = t + q;
		}
	}
	return t;
}*/


int main(){
	//print from file
	/*ifstream name("Text.txt");
	string a="";
	if (!name.is_open()) {
		cout << "file not found" << endl;
		exit(1);
	}
	string line;
	while (getline(name, line)) {
		cout << line << endl;
		a= a + line +"\n";
	}
	name.close();


	//print to file
	ofstream file("Text.txt");
	if (!file.is_open()) {
		cout << "file not found" << endl;
		exit(1);
	}
	file << a + "shrhtnszvewgs" << endl;
	file.close();*/

	// side stuff
	/*ifstream name("Text.txt");
	string a = "";
	if (!name.is_open()) {
		cout << "file not found" << endl;
		exit(1);
	}
	string line;
	while (getline(name, line)) {
		cout << line << endl;
		a = a + line + "\n";
	}
	name.close();
	int as = convert("326");
	cout << as;*/

	int a = add_0(3, 5);

	cout << a;
	//save file

}