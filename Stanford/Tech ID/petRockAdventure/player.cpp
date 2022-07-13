/*****************************************************************************
										NOTES
*
*			CODE						  |						MEANING
*										  |
* 1)		->							  |						file of
*										  |
* ex.	other->currentHealth			  |				in other, go to the														  current health file
*										  |
*										  |
*										  |
* 2)		-=							  |		minus what's after the equals
*										  |
* ex.	other->currentHealth -= damage	  |		other's current health minus															damge
*
*****************************************************************************/
#include "player.h"
void player::fight (character* other){
	/********************************************************************
	* 
	*						DAMAGE
	* 
	********************************************************************/
	other->currentHealth -= damage;
	cout << name << "hit " << other->name << " for " << damage << " damage!" << endl;
	cout << other->name << " has ";
		//if health of other is less than 0
	if ((other->currentHealth) < 0){
		cout << "0";
	} else{
		//else display the health #
		cout << other->currentHealth;
	}
	cout << " out of " << other->totalHealth;
	cout << " health remaining." << endl;
}
bool player::isAlive (){
	//is alive
	if (currentHealth > 0){
		return true;
	}
	//is not alive
	else{
		return false;
	}
}
void player::setStats (int level){
	/********************************************************************
	* Damage is[(a random # divided by 15) plus 10] times the level
	* 
	* Damage = [(a random # / 15) + 10] * the level
	********************************************************************/
	damage = (rand () % 15 + 10) * level;
	/********************************************************************
	* Total health is [(a random # divided by 100) plus 100] times the level
	*
	* Total health = [(a random # / 100) + 100] * the level
	********************************************************************/
	currentHealth = totalHealth = (rand () % 100 + 100) * level;
}
