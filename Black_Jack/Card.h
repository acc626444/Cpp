
#include<iostream>
#include<vector>
#include<stdlib.h>
#include <time.h>
using namespace std;
class Card{
private:
	int value;
	string suit;
public:
	Card(int v, string s);
	Card();
	int get_value();
	string get_suit();
	void print_card();
};