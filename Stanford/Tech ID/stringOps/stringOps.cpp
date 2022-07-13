#include<iostream>
#include<string>
using namespace std;
int main (){
	string userName;
	cout << "Your Name: ";
	cin >> userName;
	string time;
	cout << "What time do you want this to happen? ";
	cin >> time;
	string story = "One upon a time, there was a person who's name was charName... \nHere's another addition to the story to test out replacing charName...\n";
	int index = story.find ("charName");
	int index2 = story.find ("One upon a time");
	cout << story << endl;
	while (index != -1){
		story.replace (index, 8, userName);
		index = story.find ("charName");
		story.replace (index2, 15, time);
		index = story.find ("One upon a time");
	}
	cout << endl <<story<< endl;
}