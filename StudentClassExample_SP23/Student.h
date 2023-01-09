#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

enum Grade
{
	A,
	B,
	C,
	D, 
	F
};

struct Courses
{
	string name;
	string semester;
	Grade grade;
};

class Student
{
public:
	Student();
	~Student();

private:

	string name;
	string id;
	Courses courses[100];
	int gpa;
};

#endif // !STUDENT_H
