#pragma once
#include <string>
#include <vector>
using namespace std;
class student
{
public:
	student(string full_name);
	void setName(string full_name);
	void setId(int id);
	void setScores(vector<double> scores);
	void calcAverageStudentScore();
	double getAverageStudentScore();
	char getLetterGrade();


private:
	string full_name;
	int id;
	vector<double> scores;
	char letterGrade;
	double avg;


};