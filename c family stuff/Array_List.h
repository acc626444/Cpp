#pragma once
#include <iostream>
using namespace std;
class Array_List {
private:
	int *q;
	int size = 0;
public:
	Array_List(int size);
	int add(int add);
	void print_list();
};

