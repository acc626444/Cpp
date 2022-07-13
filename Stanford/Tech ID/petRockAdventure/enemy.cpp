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
#include "enemy.h"
void enemy::fight (character* other){
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
bool enemy::isAlive (){
   //is alive
	if (currentHealth > 0){
		return true;
	}
	//is not alive
	else{
		return false;
	}
}
void enemy::setStats (int level){
	/********************************************************************
	* Damage is ( a random # divided by 10) plus [(10 times the level) minus 5]
	*
	* Damage = (a random # / 10) + [(10 * the level) - 5]
	********************************************************************/
	damage = (rand () % 10) + (10 * level - 5);
	/********************************************************************
	* Damage is ( a random # divided by 10) plus [(10 times the level) minus 5]
	*
	* Damage = (a random # / 20) + [(10 * the level) + 10]
	********************************************************************/
	currentHealth = totalHealth = (rand () % 20) + (10 * level + 10);
}
