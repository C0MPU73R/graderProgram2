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
	vector<student> students;
	string studInfoLineFromFile;
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
	vector<vector<string>> temp;
	temp.resize(4);
	int spaceIndex; 
	int index = 0;
	while (!ins.eof())
	{
		getline(ins, studInfoLineFromFile);
		spaceIndex = studInfoLineFromFile.find(" ");
		
		while (spaceIndex >= 0) //source, inspired by: (lines 29 - 37) Eric Charnesky
		{
			temp[index].push_back(studInfoLineFromFile.substr(0, spaceIndex));
			studInfoLineFromFile = studInfoLineFromFile.substr(spaceIndex + 1, studInfoLineFromFile.size() - spaceIndex);
			spaceIndex = studInfoLineFromFile.find(" ");
		}
		index++;
	}
	//transfer information from file in 2d string vector to 2d student vector;

	for (int index = 0; index < temp.size(); index++)
	{
		student* nS = new student();
		nS->setName(temp[index][0]);
		for (int index2 = 0; index2 < temp[index].size; index2++)
		{
			nS->setScores(stoi(temp[index][index2+1]));
		}
		students.push_back(*nS);
	}

	//vector of students

	//add each student to gradebook.
	gradeBook a;
	for (int index = 0; index < students.size(); index++)
	{
		a.addStudent(students[index]);
	}












	
	system("pause");
	return 0;
}