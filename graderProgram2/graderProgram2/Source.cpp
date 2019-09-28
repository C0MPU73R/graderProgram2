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
	int index = 0;
	while (!ins.eof())
	{
		getline(ins, studInfoLineFromFile);
		
	}
	
	system("pause");
	return 0;
}