/*Racy Halterman
* Data Structures Spring 2021
* Due: January 20th
* Lab 1: C++ Class Example
* Make a student class that stores important information about a student.
*/

#include "Student.h"

/***********************
* Gets the students full name from what was inputted.
*
*Preconditions - Std and iostream libraries loaded. Student.h loaded. Function loaded.
*Postconditions - Gets the students full name so that it can be displayed.
*
***********************/
string Student::GetStudentName()
{
	string studname;

	studname = Student::FullName;
	return studname;
}

/***********************
* Sets the first name, the last name, and the full name of the student based on input.
*
*Preconditions - Std and iostream libraries loaded. Student.h loaded. Function loaded.
*Postconditions - Sets Students first name, last name, and full name.
*
***********************/
void Student::SetStudentName()
{
	string StufName = "", StulName = "", Name;

	cout << "What is the student's first name?\n";
	cin >> StufName;
	cout << "What is the student's last name?\n";
	cin >> StulName;

	Student::FirstName = StufName;
	Student::LastName = StulName;
	Student::FullName = StufName + ' ' + StulName;
}

/***********************
*Allows the user to display the ID based on what was set.
*
*Preconditions - Std and iostream libraries loaded. Student.h loaded. Function loaded.
*Postconditions - Gets the students ID.
*
***********************/
int Student::GetStudentID()
{
	int studentid;
	studentid = Student::StudentID;
	return studentid;
}

/***********************
*Allows the user to set the student ID.
*
*Preconditions - Std and iostream libraries loaded. Student.h loaded. Function loaded.
*Postconditions - Sets the students ID.
*
***********************/
void Student::SetStudentID()
{
	int stuid, confirm = 0;
	while (confirm != 1)
	{
		cout << "What is the student's ID?\n";
		cin >> stuid;
		cout << "You entered " << stuid << ". Is that correct? Press 1 for yes, 2 for no.\n";
		cin >> confirm;
	}
	Student::StudentID = stuid;
}

/***********************
* Allows the user to acces the information in the semester, grade, and class data.
*
*Preconditions - Student.h is attached, function has been loaded properly, and std and iostream libraries loaded.
*Postconditions - Gets the correct data and displays it.
*
***********************/
void Student::GetStudentClassesGradesSemester()
{
	for (int i = 0; i < 100; i++)
	{
		if(i > 0)//This makes it so that names of the class, the semester and the grade aren't bunched up towards the front under
			//the headers for name, id, and gpa
		{
			cout << setw(18);
		}
		cout << '\t' << Student::classes[i] << '\t' << Student::semester[i]  << '\t' << Student::lettergrade[i] << endl;
		if (Student::semester[i] == "")
		{
			break;
		}
	}
}

/***********************
* Allows the user to set the data correctly.
*
*Preconditions - Std and iostream libraries are loaded. Student.h is loaded. Function has been loaded properly.
*Postconditions - Sets the correct data in the correct location.
*
***********************/
void Student::SetStudentClassesGradesSemester()
{
	int amount;

	cout << "How many classes are you entering for this student?\n";
	cin >> amount;
	for (int counter = 0; counter < amount; counter++)
	{
		char grade = ' ';
		string coursename = "", sem = "";
		cout << "Enter the semester of the course, please. This should be entered the 3 letter prefix for time of year, followed by the year\n";
		cout << "For example, Sum2020 would be the Summer of 2020.\n";

		cin >> sem;
		Student::semester[counter] = sem;
		cout << "\nEnter the course name. Press enter when finished typing course name.\n";
		cout << "Remember to shorten the name of the course here, and not to press a space or enter while entering.\n";
		cout << "For example, CalcI would be a correct input for Calculus I.\n";
		cout << "However, Calculus I will only be inputted as Calculus.\n";
		
			cin >> coursename;

		Student::classes[counter] = coursename;

		cout << "\nEnter the letter grade that the student recieved in this course.\n";
		cout << "Remember to use capitals in this instance, and remember to only use A, B, C, D, and F.\n";
		cin >> grade;
		while (grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'F')
		{
			cout << "Invalid input.\n" << "Please input an actual grade.\n";
			cin >> grade;
		}
		Student::lettergrade[counter] = grade;
	}
}

/***********************
* Calculates GPA based on the inputs from the grades.
*
*Preconditions - Std and iostream libraries loaded. Student.h loaded. Function loaded properly. Requires data or it will calculate as 0.
*Postconditions - Calculates the GPA based on inputs from the grades recieved from the different classes.
*
***********************/
void Student::CalculateGPA()
{
	float GPA = 0;
	int x = 0;
	for (int count = 0; count < 100; count++)
	{
		if (Student::lettergrade[count] == 'A')
		{
			GPA = GPA + 4;
			x++;
		}
		else if (Student::lettergrade[count] == 'B')
		{
			GPA = GPA + 3;
			x++;
		}
		else if (Student::lettergrade[count] == 'C')
		{
			GPA = GPA + 2;
			x++;
		}
		else if (Student::lettergrade[count] == 'D')
		{
			GPA = GPA + 1;
			x++;
		}
		else if (Student::lettergrade[count] == 'F')
		{
			GPA = GPA;
			x++;
		}
		else
		{
			GPA = GPA;
		}
	}

	GPA = GPA / x;

	Student::GPA = GPA;
}

/***********************
*Allows the user to get GPA so that it can be displayed.
*
*Preconditions - Std and iostream libraries loaded. Student.h loaded. Function loaded properly.
*Postconditions - Gets GPA based on the calculations in Student::CalculateGPA().
*
***********************/
float Student::GetGPA()
{
	float gpa;
	gpa = Student::GPA;

	return gpa;
}