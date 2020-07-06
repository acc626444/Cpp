#include "Array_List.h"
Array_List::Array_List() {
	q = new int[10];
}
int Array_List::add(int add) {
	if (size >= max_size) {
		max_size = max_size * 2;
		int* a = new int[max_size];
		for (int b = 0; b < size; b++) {
			a[b] = q[b];
		}
		q = a;
	}
	q[size] = add;
	size++;
	return 0;
}
void Array_List::print_list() {
	for (int a = 0; a < size; a++) {
		cout << q[a] << endl << endl;
	}
}