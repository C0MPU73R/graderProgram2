#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "student.h"
#include "gradeBook.h"
using namespace std;
#define outFile "classgrades.txt"
int main()
{
	const int size = 10;
	string studInfoLineFromFile;
	vector<vector<string>> studInfo;
	studInfo.resize(size);
	for (int index = 0; index < studInfo.size(); index++)
	{
		studInfo[index].resize(size);
	}
	ifstream ins;
	//student file
	string studFileName;
	cout << "Enter student file name: ";
	cin >> studFileName;
	ins.open(studFileName);
	if (ins.fail())
	{ 
		cout << "Cannot open" << studFileName << endl;
		system("pause");
		return EXIT_FAILURE;
	}
	int index = 0;
	while (!ins.eof())
	{
		getline(ins, studInfoLineFromFile, ' ');
		studInfo[index].push_back(studInfoLineFromFile);
		index++;
	}
	//test print
	for (int index = 0; index < studInfo.size(); index++)
	{
		for (int index2 = 0; index2 < studInfo[index].size(); index2++)
		{
			cout << studInfo[index][index2];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}