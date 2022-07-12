#include <iostream>
#include <string>
using namespace std;
void attack( bool game ) {

}
void game() {
  bool playGame = true;

  while (playGame == true) {
    int playerChoice;
    int enemyChoice = 0;

    cout << endl << "Attack Options:" << endl;
    cout << "1) Sword Smash" << endl;
    cout << "2) Fire Explosion" << endl;
    cout << "3) Sneaky Dagger" << endl;
    cout << "4) END GAME" << endl;
    cout << "Enter your selection: ";
    cin >> playerChoice;

    switch (playerChoice) {
      case 1:
        cout << endl << "You swing away with your sword!" << endl;
        break;
      case 2:
       cout << endl << "You shoot blazing fire out of your hands!" << endl;
       break;
      case 3:
        cout << endl << "You poke at the enemy with your dagger!" << endl;
        break;
      case 4: 
        cout << endl << "Ending the game now, goodbye!" << endl;
        playGame = false;
        break;
      default: 
        cout << endl << "You trip over your own feet and skip your turn!" << endl;
    }
    if (playGame == false) {
      break;
    }

    switch (enemyChoice) {
      case 0:
        cout << endl << "Your enemy runs at you with his sword!" << endl;
        break;
      case 1:
        cout << endl << "Your enemy shoots fireballs at you!" << endl;
        break;
      case 2:
        cout << endl << "Your enemy disappears, only to reappear next to you with a dagger!" << endl;
    }
  }
} 