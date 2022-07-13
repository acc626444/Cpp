#include<iostream>
#include<string>
using namespace std;
void skip (int a){
	for (int b = 0; b < a; b++){
		cout << endl;
	}
}
int main (){
	//strings
	string world [4];
	world [0] = "Hello! ";
	*(world + 1) = "How";
	cout << "String Size: " << sizeof (string) << " bytes" << endl;
	for (int i = 0; i < sizeof (world [0]) * 4; i += sizeof (world [0])){
		cout << "Array Byte #" << i << " Address: " << &world [i] << endl;
	}
	skip (2);

	//ints
	int a;
	cout << "Int Size: " << sizeof (int) << " bytes" << endl;
	int i = sizeof (a);
		cout << "Byte #" << i << " Address: " << &a << endl;
		skip (2);
	//chars
		char o;
		cout << "Char Size: " << sizeof (char) << " bytes" << endl;
		int q = sizeof (o);
		cout << "Byte #" << q << " Address: " << &o << endl;
		skip (2);
	//bools
		bool w;
		cout << "Bool Size: " << sizeof (bool) << " bytes" << endl;
		int e = sizeof (w);
		cout << "Byte #" << e << " Address: " << &w << endl;
		skip (2);
}