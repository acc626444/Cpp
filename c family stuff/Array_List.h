#pragma once
#include <iostream>
using namespace std;
class Array_List {
private:
	int *q;
	int size = 0;
	int max_size = 10;
public:
	Array_List();
	int add(int add);
	void print_list();
};

