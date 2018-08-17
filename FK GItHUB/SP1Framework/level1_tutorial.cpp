#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string firstlevel()
{
	string total;
	string line;
	ifstream myfile("tutmap.txt");
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
					line[index] = (char)176;
					break;
				case '!':
					line[index] = (char)178; // positive trap tile
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
