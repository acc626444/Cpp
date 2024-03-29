#include "Array_List.h" 
#include <fstream>
#include<string>

void  save(Array_List& b) {
	int ad = b.Whats_my_size();
	ofstream file("C:\\Users\\Test\\Source\\Repos\\hi\\test\\Text.txt");
	if (!file.is_open()) {
		cout << "file not found" << endl;
		exit(1);
	}
	for (int sd = 0; sd < ad; sd++) {
		file << b.get_value(sd) << endl;
	}
	file.close();
}
int add_0(int a, int b) {
	int q = a;
	for (int c = 0; c < b; c++) {
		q = (q * 10);
	}
	return q;
}
int convert_digits(string a) {
	int as = a.size();
	int q;
	int i = 0;
	int t;
	for (int s = 0; s < as; s++) {
		q = a[s] - 48;
		t = add_0(q, (as - s) - 1);
		i = i + t;
	}
	return i;
}
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
		cout << x << " does not exist" << endl;
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
	cout << as << endl;
	return as;
}
void quite() {
	cout << "thank you for using my program";
	exit(0);
}
string from_file(Array_List& b) {
	ifstream name("C:\\Users\\Test\\Source\\Repos\\hi\\test\\Text.txt");
	string a = "";
	if (!name.is_open()) {
		cout << "file not found" << endl;
		exit(1);
	}
	string line;
	while (getline(name, line)) {
		int c = convert_digits(line);
		b.add(c);
		a = a + line + "\n";
	}
	name.close();
	b.print_list();
	return a;
}
void start(Array_List& b) {
	while (true) {
		cout << "What do you want to do? add, remove, show_score, show_average, claer, quite" << endl;
		string x;
		cin >> x;
		if (x == "add") {
			add_score(b);
		}
		else if (x == "remove") {
			remove_stuff(b);
		}
		else if (x == "show_score") {
			show_scores(b);
		}
		else if (x == "show_average") {
			average(b);
		}
		else if (x == "clear") {
			b.clear();
			cout << "You succesfully clear the scores!" << endl;
		}
		else if (x == "quite") {
			cout << "Would you like to save? (yes, no, cancel)" << endl;
			string w;
			cin >> w;
			if (w == "yes") {
				save(b);
				quite();
			}
			else if (w == "no") {
				quite();
			}
			else if(w != "cancel") {
					cout << "try again" << endl;
			}
		}
		else {
			cout << "try again" << endl;
		}
	}
}
int main(){
	Array_List b;
	from_file(b);
	start(b);
}