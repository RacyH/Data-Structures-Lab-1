/*Racy Halterman
* Data Structures Spring 2021
* Due: January 20th
* Lab 1: C++ Class Example
* Make a student class that stores important information about a student.
*/

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <iomanip>
using namespace std;


class Student
{
public:

	string FullName;
	string FirstName;
	string LastName;
	int StudentID;
	string classes[100];
	string semester[100];
	char lettergrade[100];
	float GPA;

	string GetStudentName();
	void SetStudentName();
	int GetStudentID();
	void SetStudentID();
	void GetStudentClassesGradesSemester();
	void SetStudentClassesGradesSemester();
	void CalculateGPA();
	float GetGPA();

};

#endif  //!STUDENT_H
