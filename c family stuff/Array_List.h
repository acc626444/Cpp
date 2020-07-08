#pragma once
#include <iostream>
using namespace std;
class Array_List {
private:
	void error(int n);
	int *q;
	int size = 0;
	int max_size = 10;
public:
	int get_value(int index);
	Array_List();
	int add(int add);
	void print_list();
	int remove(int remove);
	void change(int change, int n1);
};

