
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
	//print from file
	ifstream name("Text.txt");
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
	file.close();
}