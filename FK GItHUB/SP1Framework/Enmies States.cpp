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
void enemyStats() 
{
	struct stats
	MummyStat,CentaurStat, SerpentStat, VampireBatStat,
	ScorpionStat,CyclopsStat, ArgusStat, CrocottaStat,
	HarpieStat,PharoahStat, SirenStat, MedusaStat,
	HydraStat,MinotuarStat, MyrmekeStat, DryadStat,
	NTFStat,KeresStat	;
	//mummy stats
	MummyStat.health = 5;
	MummyStat.attack = 1;
	MummyStat.defense = 0;
	MummyStat.speed = 8.0f;
	//centaur stats
	CentaurStat.health = 15;
	CentaurStat.attack = 3;
	CentaurStat.defense = 2;
	CentaurStat.speed = 4.0f;
	//serpent stats
	SerpentStat.health = 5;
	SerpentStat.attack = 1;
	SerpentStat.defense = 1;
	SerpentStat.speed = 5.0f;
	//Vampire bat stats
	VampireBatStat.health = 3;
	VampireBatStat.attack = 1;
	VampireBatStat.defense = 0;
	VampireBatStat.speed = 5.0f;
	//Scorpion stats
	ScorpionStat.health = 15;
	ScorpionStat.attack = 2;
	ScorpionStat.defense = 2;
	ScorpionStat.speed = 5.0f;
	//Cyclops stats
	CyclopsStat.health = 20;
	CyclopsStat.attack = 5;
	CyclopsStat.defense = 1;
	CyclopsStat.speed = 9.0f;
	// Argus stats
	ArgusStat.health = 20;
	ArgusStat.attack = 5;
	ArgusStat.defense = 1;
	ArgusStat.speed = 9.0f;
	//Crocotta stats
	CrocottaStat.health = 10;
	CrocottaStat.attack = 5;
	CrocottaStat.defense = 0;
	CrocottaStat.speed = 2.0f;
	//Harpie stats
	HarpieStat.health = 10;
	HarpieStat.attack = 1;
	HarpieStat.defense = 0;
	HarpieStat.speed = 2.0f;
	// Phaoraoh stats
	PharoahStat.health = 35;
	PharoahStat.attack = 6;
	PharoahStat.defense = 2;
	PharoahStat.speed = 10.0f;
	//Siren stats
	SirenStat.health = 15;
	SirenStat.attack = 0;
	SirenStat.defense = 2;
	SirenStat.speed = 3.0f;
	//Medusa stats
	MedusaStat.health = 20;
	MedusaStat.attack = 4;
	MedusaStat.defense = 0;
	MedusaStat.speed = 6.0f;
	//Hydra stats
	HydraStat.health = 45;
	HydraStat.attack = 10;
	HydraStat.defense = 0;
	HydraStat.speed = 3.0f;
	// Minotaur stats
	MinotuarStat.health = 50;
	MinotuarStat.attack = 15;
	MinotuarStat.defense = 4;
	MinotuarStat.speed = 8.0f;
	// Myrmekes Stats
	MyrmekeStat.health = 5;
	MyrmekeStat.attack = 3;
	MyrmekeStat.defense = 5;
	MyrmekeStat.speed = 7.0f;
	// Dryad stats 
	DryadStat.health = 10;
	DryadStat.attack = 2;
	DryadStat.defense = 0;
	DryadStat.speed = 7.0f;
	// Nine tailed Fox stats 
	NTFStat.health = 10;
	NTFStat.attack = 3;
	NTFStat.defense = 2;
	NTFStat.speed = 5.0f;
	// Keres stats
	KeresStat.health = 2;
	KeresStat.attack = 1;
	KeresStat.defense = 0;
	KeresStat.speed = 1.0f;
}