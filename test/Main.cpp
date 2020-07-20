#include "Array_List.h"
int score(Array_List b) {
	cout << "scores" << endl;
	int x;
	cin >> x;
	b.add(x);
}

int main(){
	Array_List b;
	cout << "scores" << endl;
	int x;
	cin >> x;
	b.add(x);
	b.print_list();

}