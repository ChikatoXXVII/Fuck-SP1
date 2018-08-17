#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct stats
{
	int health;
	int attack;
	int defense;
	float speed;

};
void LevelUp( int Icharlvl)
{
	struct stats charstat;
	charstat.health = 10+ (Icharlvl - 1) * 5;
	charstat.attack = 3 + (Icharlvl - 1);
	charstat.defense = 3 + (Icharlvl - 1);


}