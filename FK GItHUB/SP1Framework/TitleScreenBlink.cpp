#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string titleblink()
{
	string total;
	string line;
	ifstream myfile("blinkC.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			for (unsigned int row = 0; row <line.size(); row++)
			{

				switch (line[row])
				{
				case '-':
					line[row] = (char)196;
					break;
				case '|':
					line[row] = (char)179;
					break;
				case '.':
					line[row] = (char)218;
					break;
				case ',':
					line[row] = (char)192;
					break;
				}

			}
			total += line + '\n';
		}
		myfile.close();
		return total;
	}
}
