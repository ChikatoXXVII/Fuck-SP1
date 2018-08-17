#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string thirdlevelsec()
{
	string total;
	string line;
	ifstream myfile("map2.4 (second!).txt");
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
				case '1':
					line[index] = ' ';//mummy tile
					break;
				case '2':
					line[index] = ' ';//vampire bat tile
					break;
				case '3':
					line[index] = ' ';//serpent tile
					break;
				case '4':
					line[index] = ' ';//Myrmekes tile
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