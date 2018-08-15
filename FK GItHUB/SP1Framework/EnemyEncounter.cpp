#include <iostream>
#include<cstdlib>
using namespace std;
int *weight;
enum monsterId
{
	Mummy,
	Centaur,
	Serpent,
	VampireBat,
	Scorpion,
	Cyclops,
	Argus,
	Crocotta,
	Harpie,
	Pharoah,
	Siren,
	Medusa,
	Hydra,
	Minotaur,
};
void enemyencounter(int levl)
{
	switch (levl)
	{
	case 1:
		int a = rand() % 100;
		if (a >= 90)
		{
			a = a % 10;
				switch (a)
				{
				case Mummy:

				default:
					break;
				}

		}
		else
			// Don't spawn
	case 2:
		int a = rand() % 100;
		if (a >= 70)
		{

		}
		else
			// Don't spawn
	default:
		break;
	}

	
}
