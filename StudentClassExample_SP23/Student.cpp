#include "Student.h"

Student::Student()
{
	gpa = 0;
	numCourses = 0;
}

Student::~Student()
{
}

void Student::addCourse(Course course)
{
	courses[numCourses] = course;
	numCourses++;
}

void Student::removeCourse(string name_, string semester_)
{
}

Course* Student::getCourses()
{
	Course* temp = new Course[numCourses];

	for (int i = 0; i < numCourses; i++)
	{
		temp[i] = courses[i];
	}

	return temp;
}

float Student::calculateGPA()
{
	return 0.0f;
}

Course* Student::findCoursesByGrade(Grade grade)
{
	return nullptr;
}
