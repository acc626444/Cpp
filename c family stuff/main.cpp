#include "Array_List.h"
int main() {
	Array_List a;
	Array_List a2;
	a2.add(1);
	a2.add(333333);
	a2.add(555673);
	a2.add(4);
	a2.add(1);
	a2.add(1);
	a2.add(1);
	a2.add(4);
	Array_List b = a2.clone();
	/*for (int b = 0; b <= 10; b++) {
		a.add(b);
	}
		a.remove(0);
		a.print_list();
		
		/*cout << "                               " << a.remove(9) << endl;
		/*a.change(26, 55555);
		a.print_list();
		cout << a.do_i_have(111) << endl;
		cout << a.do_i_have(7) << endl;
		cout << endl << a.count(0) << endl<< a.indexof(6) << endl;*/
		cout << endl << endl;
		//b.print_list();
		cout << endl << endl;
		b.no_more_than_1().print_list();
}