#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string fourthlevel()
{
	string total;
	string line;
	ifstream myfile("map3.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			for (unsigned int index = 0; index < line.size(); index++)
			{
				switch (line[index])
				{
				case '#':
					line[index] = (char)219;
					break;
				case '$':
					line[index] = ' '; //negative trap tile
					break;
				case '!':
					line[index] = ' '; // positive trap tile
					break;
				case '&':
					line[index] = ' ';//monster tile
					break;
				case '@':
					line[index] = (char)177; // ending tile
					break;
				case '%':
					line[index] = 'P'; // player tile
					break;
				}
			}
			total += line + '\n';
		}
		myfile.close();
		return total;
	}
}
