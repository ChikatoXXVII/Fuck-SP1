#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string CombatUIFight()
{
	string total;
	string line;
	ifstream myfile("CombatUIfight.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			for (unsigned int index = 0; index < line.size(); index++)
			{
				switch (line[index])
				{
				case '>':
					line[index] = (char)175;
					break;
				case '-':
					line[index] = (char)196;
					break;
				case '|':
					line[index] = (char)179;
					break;
				case '.':
					line[index] = (char)192;
					break;
				case ',':
					line[index] = (char)191;
					break;
				case '?':
					line[index] = (char)217;
					break;
				case '<':
					line[index] = (char)218;
					break;
				}
			}
			total += line + '\n';
		}
		myfile.close();
		return total;
	}
}