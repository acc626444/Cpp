#include "declaration.h"
void delayScroll (int delayInMs, int lineCount){
	for (int i = 0; i < lineCount; i++){
		cout << endl;
		this_thread::sleep_for (chrono::milliseconds (delayInMs));
	}
}
inline character* geneateEnemy (){
	return nullptr;
}
