#include "Array_List.h"
int main() {
	Array_List a;
	for (int b = 0; b < 20; b++) {
		a.add(b);
	}
	a.print_list();
}