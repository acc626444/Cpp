
#include <iostream>
#include <string>
#include <fstream>
//puts 0s 
using namespace std;
int add_0(int a, int b) {
	int q = a;
	for(int c = 0; c<b; c++){
		q = (q * 10);
}
	return q;
}

// string to int
int convert_digits(string a) { 
	int as = a.size();
	int q;
	int i = 0;
	int t;
	for (int s = as; s > 0; s--) {
		q = a[s - 1] - 48;
		t = add_0(q, s - 1);
		i = i + t;
	}
	return i;
}
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
	name.close();*/

	int u = convert_digits("326");
	cout << u;
	
	//save file

}