#include "Student.h"
#include <iostream>

using namespace std;

int main()
{
	Student s;
	s.setName("John Doe");
	s.setID("12345");
	
	cout << "Name: " << s.getName() << endl;
	cout << "ID: " << s.getID() << endl;

	Course calc1;
	calc1.name = "Calculus 1";
	calc1.semester = "FA12";
	calc1.grade = Grade::B;

	Course calc2;
	calc2.name = "Calculus 2";
	calc2.semester = "SP13";
	calc2.grade = Grade::C;

	s.addCourse(calc1);
	s.addCourse(calc2);

	return 0;
}