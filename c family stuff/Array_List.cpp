#include "Array_List.h"
Array_List::Array_List(int s ) {
	q = new int [s];
}
int Array_List::add(int add) {
	q[size] = add;
	size++;
	return 0;
}
void Array_List::print_list() {
	for (int a = 0; a < size; a++) {
		cout << q[a] << endl << endl;
	}
}