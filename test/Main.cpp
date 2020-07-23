#include "Array_List.h"
void score(Array_List& b) {
	cout << "scores" << endl;
	int x;
	cin >> x;
	b.add(x);
	/*if (x == 1 ||x== 2 || x == 3 || x == 4 || x == 5 || x == 6 || x == 7 || x == 8 || x == 9 || x == 0) {
		for (int a = 0; a < x; a++) {
			score(b);
		}
	}
	else {
		score(b);
	}*/
}
void score_num(Array_List& b) {
	int x;
	cout << "How many score are there?" << endl;
	cin >> x;
	for (int a = 0; a < x; a++) {
		score(b);
	}
	/*if (x == 1 ||x== 2 || x == 3 || x == 4 || x == 5 || x == 6 || x == 7 || x == 8 || x == 9 || x == 0) {
		for (int a = 0; a < x; a++) {
			score(b);
		}
	}
	else {
		score_num(b);
	}*/
}
double avarage (Array_List &b){
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
void continue_stuff(Array_List &b) {
	string x;
	cout << "Do you want to continue?" << endl;
	cin >> x;
	if (x == "yes"){
		score_num(b);
		continue_stuff(b);
}
	else if (x == "no") {
		avarage(b);
		cout << endl << avarage(b);
	}
	else {
		continue_stuff(b);
	}

}
int main(){
	Array_List b;
	score_num(b);
	continue_stuff(b);
}