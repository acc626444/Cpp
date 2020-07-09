#include "Array_List.h"
int main() {
	Array_List a;
	for (int b = 0; b <= 20; b++) {
		a.add(b);
	}
		a.remove(20);
		a.print_list();
		cout << "                               " << a.remove(10) << endl;
		/*a.change(26, 55555);
		a.print_list();*/
		cout << a.do_i_have(111) << endl;
		cout << a.do_i_have(7) << endl;
		cout << endl << a.count(0) << endl<< a.indexof(6) << endl;
}