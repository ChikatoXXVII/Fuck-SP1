#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string GAMEOVER()
{
	string total;
	string line;
	ifstream myfile("gameover.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			for (unsigned int index = 0; index < line.size(); index++)
			{
				switch (line[index])
				{
				case 'A':
					line[index] = (char)219;
					break;
				case 'B':
					line[index] = (char)220;
					break;
				case 'C':
					line[index] = (char)177;
					break;
				case 'D':
					line[index] = (char)176;
					break;
				case 'E':
					line[index] = (char)178;
					break;
				case 'F':
					line[index] = (char)222;
					break;
				case 'G':
					line[index] = (char)221;
					break;
				case 'H':
					line[index] = (char)223;
					break;
				case 'J':
					line[index] = (char)220;
					break;
				case '3':
					line[index] = 'E';
					break;
				case '1':
					line[index] = 'A';
					break;
				case '2':
					line[index] = 'C';
					break;
				}
			}
			total += line + '\n';
		}
		myfile.close();
		return total;
	}
}