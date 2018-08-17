#include <iostream>
using namespace std;
int damageCal(int atk, int def)
{
	int damage;
	damage = atk - def;
	return damage;
}
