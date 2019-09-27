#pragma once
#include "student.h"
#include <vector>
class gradeBook
{
public:
	gradeBook();
	void addStudent(student stud);
	void calcClassAverage();
	void setClassLetterAverage();
	double getClassAverage();
	char getClassLetterAverage();

private:
	vector<student> students;
	double classAvg;
	char classAvgLetterGrade;
};