#include<iostream>
#include<string>
#include <vector>
using namespace std;
void skip (int a){
	for (int b = 0; b < a; b++){
		cout << endl;
	}
}
vector<int> vector1 (){
	vector<int> numbers (100, 5);
	cout << "This vetor has " << numbers.size () << " Integers in it." << endl;
	numbers.resize (10);
	cout << "This vetor has " << numbers.size () << " Integers in it." << endl;
	numbers.erase (numbers.begin () + 2);
	numbers.insert (numbers.begin () + 1, 10);
	for (vector<int>::iterator it = numbers.begin (); it < numbers.end (); it++){
		cout << *it << endl;
	}
	return numbers;
}
vector<int> vector2 (){
	cout << "This is a custom vector" << endl;
	vector<int> numbers;
	return numbers;
}
void add (vector<int> b){
	cout << "What number do you want to add? ";
	int a;
	cin >> a;
	cout << "What position number do you want to add it in? ";
	int c;
	cin >> c;
	b.insert (b.begin () + (c-1), a);
	for (vector<int>::iterator it = b.begin (); it < b.end (); it++){
		cout << *it << endl;
	}
}
void remove (vector<int> b){
	cout << "What position number do you want to reomve? ";
	int c;
	cin >> c;
	b.erase (b.begin () + (c - 1));
	for (vector<int>::iterator it = b.begin (); it < b.end (); it++){
		cout << *it << endl;
	}
}
int main (){
	vector1 ();
	skip (3);
	add (vector2 ());
	remove (vector2 ());
}