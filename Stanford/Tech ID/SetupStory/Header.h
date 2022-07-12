#include <iostream>
using namespace std;
void skip( int a ) {
	for ( int b = 0; b < a; b++ ) {
		cout << endl;
	}
}
void story( ) {
	string a;
	string b;
	string c;
	string d;
	string e;
	string f;
	string g;

	cout << "One upon a time, there was a\n";
	cin >> a;
	if ( a == "dragon" ) {
		cout << "The" << a << "flew around the world eating all the smaller creatures.\n One day it came across an elf named\n";
		cin >> b;
		cout << b << "looked frail and weak.";
		cout << " He challenged the dragon to a\n";
		cin >> c;
		cout << " He added 2 conditions. One where he won, the other where he lost. If he won, he asked to\n";
		cin >> d;
		cout << "And if he lost, he would\n";
		cin >> e;
		cout << "The very confused dragon ask why he should agree to this game. The elf, calm and care free, revealed, with a decrepit hand, a\n";
		cin >> f;
		cout << "He responded that " << f << " was a ruin that was passed down his family that bounded itself to its host, from birth.\n It granted them any ability of their choosing. He added that, if the host was to die by someone's hand, the ruin would bound to someone of their choosing";
		cout << "The dragon intrigued by the story, agreed to the tournament. After several hours, the elf\n";
		cin >> g;
		if ( g == "won" ) {
			cout << "As agreed, the reluctant dragon granted his request.";
			skip( 3 );
			cout << "Here is the complete story:\n";
			skip( 1 );
			cout << "The dargon flew around the world eating all the smaller creatures.\nOne day it came across an elf named " << b << ". " << b << "looked frail and weak. He challenged the dragon to a " << c << ". He added 2 conditions. One where he won, the other where he lost.\nIf he won, he asked to " << d << ". And if he lost, he would " << e << ". The very confused dragon ask why he should agree to this game. The elf, calm and care free, revealed, with a decrepit hand, a " << f << ". He responded that the " << f << " was a ruin that was passed down his family that bounded itself to its host, from birth.\nIt granted them any ability of their choosing. He added that, if the host was to die by someone's hand, the ruin would bound to someone of their choosing. \nThe dragon intrigued by the story, agreed to the tournament. After several hours, the elf won. \nAs agreed, the reluctant dragon granted his request. ";
			skip( 3 );

		}
		else {
			cout << "The excited dragon, ate the elf and asked the ruin to grant an endless supply of humans and elves he could feast on.";
			skip( 3 );
			cout << "Here is the complete story:\n";
			skip( 1 );
			cout << "The dargon flew around the world eating all the smaller creatures.\nOne day it came across an elf named " << b << ". " << b << "looked frail and weak. He challenged the dragon to a " << c << ". He added 2 conditions. One where he won, the other where he lost.\nIf he won, he asked to " << d << ". And if he lost, he would " << e << ". The very confused dragon ask why he should agree to this game. The elf, calm and care free, revealed, with a decrepit hand, a " << f << ". He responded that the " << f << " was a ruin that was passed down his family that bounded itself to its host, from birth.\nIt granted them any ability of their choosing. He added that, if the host was to die by someone's hand, the ruin would bound to someone of their choosing. \nThe dragon intrigued by the story, agreed to the tournament. After several hours, the elf lost. \nThe excited dragon, ate the elf and asked the ruin to grant an endless supply of humans and elves he could feast on. ";
			skip( 3 );
		}

	}
	else {
		cout << "The" << a << " traveled far and wide in search of their lost relative. One day while at a pub, they came across a\n";
		cin >> b;
		cout << "The " << a << " recognized the " << b << " as her father's friend, whom she had admired since she was a child. After reminiscing about the past, he asked\n";
		cin >> c;
		cout << "'Why are you here'. To see friends? " << c << ", not wanting to reveal too much information, answereb that she is looking for someone.\n Intrigued, the " << b << " asked who it was. However, " << c << ", as if not even hearing the question, rose from her seat and said, 'I'd better get going now.'\n They said their goodbyes and " << c << " went into the forest. In the forest she ran into a\n";
		cin >> d;
		cout << " an\n";
		cin >> e;
		cout << " and a\n";
		cin >> f;
		cout << " who asked for help finding their friends. " << c << " knowing that she wanted to find her relative asap, said, 'Sorry, I can't help you, I'm in a rush' and ran passed.\n After two days of none-stp searching, " << c << "found her relative, dead,\n";
		cin >> g;
		skip( 3 );
		cout << "Here is the complete story:\n";
		skip( 1 );
		cout << "The" << a << " traveled far and wide in search of their lost relative. One day while at a pub, they came across a\n" << b << "The " << a << " recognized the " << b << " as her father's friend, whom she had admired since she was a child. After reminiscing about the past, he asked\n" << c << ", 'Why are you here'. To see friends? " << c << ", not wanting to reveal too much information, answereb that she is looking for someone.\n Intrigued, the " << b << " asked who it was. However, " << c << ", as if not even hearing the question, rose from her seat and said, 'I'd better get going now.'\n They said their goodbyes and " << c << " went into the forest. In the forest she ran into a " << d << " an " << e << " and a" << f << " who asked for help finding their friends. " << c << " knowing that she wanted to find her relative asap, said, 'Sorry, I can't help you, I'm in a rush' and ran passed.\n After two days of none-stp searching, " << c << "found her relative, dead," << g;
		skip( 3 );

	}
}