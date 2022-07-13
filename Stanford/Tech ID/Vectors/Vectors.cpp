#include<iostream>
#include<string>
#include <vector>
using namespace std;

int main (){
	//string
	vector<string> list;
	list.push_back ("Hey look, a string!");
	list.push_back ("Wow, another string already?");
	list.push_back ("Is that? No way! A string again!");
	cout << "Vector Elements: " << endl;
	for (string element : list){
		cout << element << endl;
	}
	cout << endl << "second Vector Elements: " << list [1] << endl;
	
	//int
	vector<int> a;
	a.push_back (1);
	a.push_back (2);
	a.push_back (3);
	cout << "Vector Elements: " << endl;
	for (int e : a){
		cout << e << endl;
	}
	cout << endl << "second Vector Elements: " << a [1] << endl;
}