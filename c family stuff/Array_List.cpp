#include "Array_List.h"
void Array_List::error(int n) {
	if (n < 0 || n >= size) { //if number is picked that is less than 0 or larger than the array itself, do the following
		cout << "why" << endl; //print why
		exit(1); //exit with an error
	}
}
int Array_List::get_value(int index) {
	error(index); // make sure the number used is not going to cause an error
	return q[index]; //number used is good to go
}
Array_List::Array_List() {
	q = new int[10]; //make a list of 10
}
int Array_List::add(int add) {
	if (size >= max_size) { // if size is more than the max size, do the following
		max_size = max_size * 2; double the size
		int* a = new int[max_size]; //make a new array with that new size
		for (int b = 0; b < size; b++) { 
			a[b] = q[b]; //put those initial values in the new array
		}
		q = a; //make the new array the default
	}
	q[size] = add; //add the new number
	size++; //increase the size
	return 0;
}
void Array_List::print_list() {
	for (int a = 0; a < size; a++) {
		cout << q[a] << endl << endl; //print the array
	}
}
int Array_List::remove(int remove) {
	error(remove); //check if you can remove something
	int s = q[remove]; //save new array
	for (int a = remove; a < size; a++) {
		q[a] = q[a + 1]; //make new array
	}
	size--; //reduce size
	return s; //make new as default
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
int Array_List::count(int v) {
	int a = 0;
	for (int as = 0; as < size; as++) {
		if (q[as] == v) {
			a++;
		}
	}
	return a;
}
Array_List Array_List::no_more_than_1() {
	Array_List b;
	for (int a = 0; a < size; a++) {
		if (b.do_i_have(q[a])==false) {
			b.add(q[a]);
		}
	}
	return b;
}
Array_List Array_List::clone() {
	Array_List b;
	for (int a = 0; a < size; a++){
		b.add(q[a]);
	}
	return b;
}
