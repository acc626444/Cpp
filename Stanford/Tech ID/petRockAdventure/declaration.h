#include <chrono>
#include <random>
#include <thread>
#include "enemy.h"
using namespace std;
void delayScroll (int delayInMs, int lineCount);
character* generateEnemy ();
void encounterEnemy (character* player, character* enemy);
void fightDecisions (character* player);

