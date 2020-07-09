#include "Array_List.h"
void Array_List::error(int n) {
	if (n < 0 || n >= size) {
		cout << "why" << endl;
		exit(1);
	}
}
int Array_List::get_value(int index) {
	error(index);
	return q[index];
}
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
int Array_List::remove(int remove) {
	error(remove);
	int s = q[remove];
	for (int a = remove; a < size; a++) {
		q[a] = q[a + 1];
	}
	size--;
	return s;
}
void Array_List::change(int change, int n1) {
	error(change);
	q[change] = n1;
}
int Array_List::Whats_my_size() {
	return size;
}
bool Array_List::do_i_have(int n) {
	for (int a = 0; a < size; a++) {
		if (q[a] == n) {
			return true;
		}
	}
	return false;
}
int Array_List::indexof(int n) {
	for (int a = 0; a < size; a++) {
		if (q[a] == n) {
			return a;
		}
	}
	return -1;
}
int Array_List::count(int n) {
	int as = 0;
	for (int a = 0; a < size; a++) {
		if (q[a] == n) {
			as++;
		}
	}
	return as;
}
Array_List Array_List::no_more_than_1() {
	Array_List b;
	b.add()

	return b;
}

Array_List Array_List::clone() {
	Array_List b;
	for (int a = 0; a = size; a++){
		b.add(a);
	}
	return Array_List();
}


