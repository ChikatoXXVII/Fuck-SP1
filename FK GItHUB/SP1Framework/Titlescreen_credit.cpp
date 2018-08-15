#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string titlecredits()
{
	string total;
	string line;
	ifstream myfile("credits.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			for (unsigned int index = 0; index < line.size(); index++)
			{
				switch (line[index])
				{
				case '-':
					line[index] = (char)196;
					break;
				case '|':
					line[index] = (char)179;
					break;
				case '.':
					line[index] = (char)218;
					break;
				case ',':
					line[index] = (char)192;
					break;
				}
			}
			total += line + '\n';
		}
		myfile.close();
		return total;
	}
}