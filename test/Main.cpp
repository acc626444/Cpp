#include "Array_List.h"
void add_score(Array_List& b) {
	cout << "scores" << endl;
	int x;
	cin >> x;
	b.add(x);
}
void remove_stuff(Array_List& b) {
	cout << "scores" << endl;
	int x;
	cin >> x;
	if (b.do_i_have(x)==true) {
		b.remove(b.indexof(x));
	}
	else {
		cout << x << "does not exist" << endl;
	}
}
void show_scores(Array_List& b) {
	b.print_list();
}
double average (Array_List &b){
	double x = b.Whats_my_size();
	int qw=0;
	int qe=0;
	int df=0;
	for (int a = 0; a< x; a++) {
		qw=b.get_value(a);
		df = qw + qe;
		qe = df;
	}
	double as = df / x;
	return as;
}
void quite() {
	cout << "thank you for using my program";
	exit(0);
}
void start(Array_List& b) {
	cout << "What do you want to do? add, remove, show score, show average, quite" << endl;
	string x;
	cin >> x;
	if (x == "add") {
		add_score(b);
	}
	else if (x == "remove") {
		remove_stuff(b);
	}
	else if (x == "show score") {
		show_scores(b);
	}
	else if (x == "show average") {
		average(b);
	}
	else if (x == "quite") {
		quite();
	}
	else {
		cout << "try bagain" << endl;
		start(b);
	}
}
int main(){
	Array_List b;
	start(b);
}