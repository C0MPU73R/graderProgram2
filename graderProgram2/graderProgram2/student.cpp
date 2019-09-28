#include "student.h"

student::student(string full_name)
{
	this->full_name = full_name;
	this->avg = 0.0;
}

void student::setName(string full_name)
{
	this->full_name = full_name;
}

void student::setId(int id)
{
	this->id = id;
}

void student::setScores(vector<double> scores)
{
	this->scores = scores; //invokes overloaded assignment operator
}

void student::calcAverageStudentScore()
{
	for (int index = 0; index < scores.size(); index++)
	{
		avg += scores[index];
	}
	avg /= scores.size();
}

double student::getAverageStudentScore()
{
	return this->avg;
}

char student::getLetterGrade()
{
	if (getAverageStudentScore() >= 90)
	{
		letterGrade = 'A';
	}
	else if (getAverageStudentScore() < 90 && getAverageStudentScore() >= 80)
	{
		letterGrade = 'B';
	}
	else if (getAverageStudentScore() < 80 && getAverageStudentScore() >= 70)
	{
		letterGrade = 'C';
	}

	else if (getAverageStudentScore() < 70 && getAverageStudentScore() >= 60)
	{
		letterGrade = 'D';
	}
	else if (getAverageStudentScore() < 60 && getAverageStudentScore() >= 50)
	{
		letterGrade = 'E';
	}
	else if (getAverageStudentScore() < 50)
	{
		letterGrade = 'F';
	}
	return letterGrade;
}
