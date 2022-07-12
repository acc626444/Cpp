#include <iostream>
#include <string>
#include <fstream>
using namespace std;
fstream file;
string readline;
string readword;
void skip( int a ) {
	for ( int b = 0; b < a; b++ ) {
		cout << endl;
	}
}
void write_to_file( ) {
	file.open( "test.txt" , ios::in );
	if ( file.is_open( ) ) {
		file >> readword;
	}
}
void read_from_file( ) {
	file.open( "test.txt" , ios::in );
	if ( file.is_open( ) ) {
		file >> readword;
		getline( file , readline );
	}
}
void open( ) {
	file.open( "test.txt" , ios::out );
	if ( file.is_open( ) ) {
		cout << "The file opened successfully!";
		skip( 2 );
		cout << "Yes?\n";
		string a;
		cin >> a;
		if ( a == "no" || a=="close" ) {
			cout << "Good Bye" << endl;
		}
		else {
			file << a<<endl;;
			cout << "Saving to the file!" << endl;
			skip( 2 );
		}
	}
}
void File( ) {
	//open file
	open( );
	file.close( );
	cout << "closed";
	skip( 3 );

	//write to file
	write_to_file( );
	file.close( );
	skip( 3 );

	//read from file
	read_from_file( );
	file.close( );
	skip( 3 );

	cout << readword;
	cout << readline;
}