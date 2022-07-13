#include "Character.h"
character::character (): character::character ("A Name", "A Description"){};
character::character (string nameInput, string descriptionInput){
	name = nameInput;
	description = descriptionInput;
}
void character::describe (){
	cout << name << " " << description << endl;
}