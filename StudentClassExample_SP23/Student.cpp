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

float Student::calculateGPA()
{
	return 0.0f;
}

Course* Student::findCoursesByGrade(Grade grade)
{
	return nullptr;
}
