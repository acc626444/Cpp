#include "player.h"
player::player (){
	name = "Default";
}
player::player (string inputName){
	name = inputName;
}
void player::Greet (){
	cout << "Hey there " << name << "!" << endl;
}