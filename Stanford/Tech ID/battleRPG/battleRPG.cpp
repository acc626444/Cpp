#include "functions.h"
int main( ) {
	while ( playGame == true ) {
		int enemyChoice = rd()%3;
		attack( );
		if ( playGame == false ) {
			break;
		}
		enemy( enemyChoice );
	}
}