#include "gradeBook.h"

gradeBook::gradeBook()
{
	this->classAvg = 0.0;
	this->classAvgLetterGrade = ' ';
}
void gradeBook::addStudent(student stud)
{
	this->students.push_back(stud);
}
void gradeBook::calcClassAverage()
{
	for (int index = 0; index < students.size(); index++)
	{
		classAvg += students[index].getAverageStudentScore();
	}
	classAvg /= students.size();
}
void gradeBook::setClassLetterAverage()
{
	if (getClassAverage() >= 90)
	{
		classAvgLetterGrade = 'A';
	}
	else if (getClassAverage() < 90 && getClassAverage() >= 80)
	{
		classAvgLetterGrade = 'B';
	}
	else if (getClassAverage() < 80 && getClassAverage() >= 70)
	{
		classAvgLetterGrade = 'C';
	}

	else if (getClassAverage() < 70 && getClassAverage() >= 60)
	{
		classAvgLetterGrade = 'D';
	}
	else if (getClassAverage() < 60 && getClassAverage() >= 50)
	{
		classAvgLetterGrade = 'E';
	}
	else if (getClassAverage() < 50)
	{
		classAvgLetterGrade = 'F';
	}
}
double gradeBook::getClassAverage()
{
	return this->classAvg;
}
char gradeBook::getClassLetterAverage()
{
	return this->classAvgLetterGrade;
}
