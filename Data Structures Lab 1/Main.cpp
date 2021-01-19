/*Racy Halterman
* Data Structures Spring 2021
* Due: January 20th
* Lab 1: C++ Class Example
* Make a student class that stores important information about a student.
*/

#include <iostream>
#include "Student.h" //Including the header file.

using namespace std;
using std::cin;
using std::cout; //cin and cout became ambiguous

Student Student1;
Student Student2;
Student Student3;
Student Student4;//creating the different students
Student Student5;
Student Student6;
Student Student7;

void menu();
void menulist();
void rusure();
void changestudentrecords(); //The different functions that run this main.cpp program
void searchstudentrecords();
void showstudents(int& x);
void clearscreen();

int main()
{
	changestudentrecords();//This forces the user to input at least one person before accessing the menu.
	rusure();

	return 0;
}

/***********************
* This shows the menu so that the user can choose a selection of what s/he wants to do, including accessing the data on students, altering
* the data on students, searching for the student records that match a letter grade in a specific student, or to exit the program.
*
*Preconditions - Requires that the menulist function is properly formatted, requires the std library, the iostream library, the student.h header
* file is loaded, also requires menulist(), clearscreen(), showstudents(), changestudents(), and searchstudents() functions to be working properly.
*Postconditions - Shows a menu that can be navigated, and when prompted, it clears the menu and brings up the prompted functions.
*
***********************/
void menu()
{
	clearscreen();

	char menuitem = ' ';//resets the menuitem
	bool menu = true;//This is so that it can check to see if the input was valid, allowing a loop if it is not. Resets every time the function is called.

	menulist();//calls the menulist so that I didn't have to copy and paste it into the bottom if statement in this function
	cin >> menuitem;

	while (menu == true)
	{
		if (menuitem == 'A' || menuitem == 'a')//allows the user to input either a capital or lowercase A,C,L, or E
		{
			menu = false; //So the loop doesn't reset. It shouldn't anyway, this is just reasurrance.

			clearscreen();

			int m;
			cout << "You may look at a specific students' record, or all of them.\n";
			cout << "To view all students, press 8. To view a specific student, type their assigned number between 1 and 7.\n";
			cin >> m;//Got tired of using abbreviations of student for a variable name

			clearscreen();

			showstudents(m);//m is transferred to the showstudents function so that it can choose properly what to do.
		}
		if (menuitem == 'C' || menuitem == 'c')
		{
			menu = false;

			clearscreen();

			changestudentrecords();//if C is chosen, the user can then change the student they previously added, or add new students
		}
		if (menuitem == 'L' || menuitem == 'l')
		{
			menu = false;

			clearscreen();

			searchstudentrecords();//if L is chosen, the user can then search amongst a specfic students' records to view classes that match a particular grade
		}
		if (menuitem == 'E' || menuitem == 'e')
		{
			menu = false;
		}
		//This following if statement just checks to see if the input was invalid and displays an error message while returning
		//the menu items to the screen.
		if (menuitem != 'C' && menuitem != 'A' && menuitem != 'L' && menuitem != 'E' && menuitem != 'c' && menuitem != 'a' && menuitem != 'l' && menuitem != 'e')
		{
			menu = true;//reruns the loop if the input was invalid, allowing the user to correctly choose something from the menu

			clearscreen();
			cout << "Invalid input, please try again.\n";

			menulist();
			cin >> menuitem;
		}

	}
}

/***********************
* This is the menu display function.
*
*Preconditions - Std and iostream libraries are loaded.
*Postconditions - Shows the menu prompts to the user, so they know how to navigate the program.
*
***********************/
void menulist()
{
	cout << "You may choose one of the following selections by typing in the correct character following the menu item.\n";
	cout << "Access student records.\tA\n";
	cout << "Change student records.\tC\n"; //Took out about 5 lines of code from the end product by doing this
	cout << "Look up student grades.\tL\n";
	cout << "To exit, press E.\n";
}

/***********************
* This is simply a function that makes sure the user want to quit.
*
*Preconditions - Std and iostream libraries are loaded. menu() is loaded properly.
*Postconditions - Based on input, exits the program or sends the user back to the menu.
*
***********************/
void rusure()
{ 
	char positive;
	cout << "Are you sure that you want to leave the program?\nPress E to exit, pressing anything else will send you back to the menu.\n";
	cin >> positive;
	if (positive != 'E' && positive != 'e')
	{
		menu();
	}
}

/***********************
* This function allows the user to alter the student records as is needed.
*
*Preconditions - Std and iostream libraries are loaded. Requires Student.h, Student.cpp are loaded, and the functions in them are configured
* properly. Also requires that the clearscreen() and menu() functions are set up properly.
*Postconditions - Allows alterations to the student record to happen. This will change all of that students' record however, so be weary of
* changing it if that record already has data in it.
*
***********************/
void changestudentrecords()
{
	int studentno;
	cout << "You can set up to seven students. Which student record would you like to alter?\n";
	cout << "Use the numbers 1-7 to change that students record.\n";
	cin >> studentno;
 //Do not enter anything but an integer. It will go into an infinite loop.
	switch (studentno)//The reason this code is so long is so that it allows the user to set more than one student
	{
	case 1:
		Student1.SetStudentName();
		Student1.SetStudentID();
		clearscreen();//This is nested here so that the screen doesn't fill up so quickly
		Student1.SetStudentClassesGradesSemester();
		Student1.CalculateGPA();
		break;
	case 2:
		Student2.SetStudentName();
		Student2.SetStudentID();
		clearscreen();
		Student2.SetStudentClassesGradesSemester();
		Student2.CalculateGPA();
		break;
	case 3:
		Student3.SetStudentName();
		Student3.SetStudentID();
		clearscreen();
		Student3.SetStudentClassesGradesSemester();
		Student3.CalculateGPA();
		break;
	case 4:
		Student4.SetStudentName();
		Student4.SetStudentID();
		clearscreen();
		Student4.SetStudentClassesGradesSemester();
		Student4.CalculateGPA();
		break;
	case 5:
		Student5.SetStudentName();
		Student5.SetStudentID();
		clearscreen();
		Student5.SetStudentClassesGradesSemester();
		Student5.CalculateGPA();
		break;
	case 6:
		Student6.SetStudentName();
		Student6.SetStudentID();
		clearscreen();
		Student6.SetStudentClassesGradesSemester();
		Student6.CalculateGPA();
		break;
	case 7:
		Student7.SetStudentName();
		Student7.SetStudentID();
		clearscreen();
		Student7.SetStudentClassesGradesSemester();
		Student7.CalculateGPA();
		break;
	default: break;
	}
	clearscreen();
	cout << "You will now be sent back to the menu.\n";
	menu();//sends the user back to the menu
}

/***********************
*This allows the user to search through a specific students' record to look for any classes that match the grade they are looking for.
*
*Preconditions - Std and iostream libraries loaded, as well as Student.h and Student.cpp are loaded properly. Clearscreen() and menu() functions
* are properly configured.
*Postconditions - Displays classes saved with the grade that was searched.
*
***********************/
void searchstudentrecords()
{
	int stu = 0;
	bool yeah = true, valid = false;
	char grad;

	cout << "Which student are you trying to view? Input a number 1 through 7.\n";
	cin >> stu;

	cout << "You may enter a letter grade and the computer will look up any of the students' grades which match your criteria.\n";
	cout << "Grades are written as uppercase letters, if it is not, then the computer will not display anything.\n";
	cin >> grad;
	for (int i = 0; i < 100; i++)
	{
		switch (stu)//Again, this is why it is so long
		{
		case 1: if (Student1.lettergrade[i] == grad)
		{
			cout << Student1.FullName << '|' << Student1.classes[i] << '|' << Student1.semester[i] << '|' << Student1.lettergrade[i] << endl;
		}
			break;
		case 2: if (Student2.lettergrade[i] == grad)
		{
			cout << Student2.FullName << '|' << Student2.classes[i] << '|' << Student2.semester[i] << '|' << Student2.lettergrade[i] << endl;
		}
			break;
		case 3: if (Student3.lettergrade[i] == grad)
		{
			cout << Student3.FullName << '|' << Student3.classes[i] << '|' << Student3.semester[i] << '|' << Student3.lettergrade[i] << endl;
		}
			break;
		case 4: if (Student4.lettergrade[i] == grad)
		{
			cout << Student4.FullName << '|' << Student4.classes[i] << '|' << Student4.semester[i] << '|' << Student4.lettergrade[i] << endl;
		}
			break;
		case 5: if (Student5.lettergrade[i] == grad)
		{
			cout << Student5.FullName << '|' << Student5.classes[i] << '|' << Student5.semester[i] << '|' << Student5.lettergrade[i] << endl;
		}
			break;
		case 6: if (Student6.lettergrade[i] == grad)
		{
			cout << Student6.FullName << '|' << Student6.classes[i] << '|' << Student6.semester[i] << '|' << Student6.lettergrade[i] << endl;
		}
			break;
		case 7: if (Student7.lettergrade[i] == grad)
		{
			cout << Student7.FullName << '|' << Student7.classes[i] << '|' << Student7.semester[i] << '|' << Student7.lettergrade[i] << endl;
		}
			break;
		default: break;
		}
	}
	cout << "Press E to exit back to the menu.\n";
	char run;
	bool running = true;
	cin >> run;
	while (running == true)
	{
		if (run == 'e' || run == 'E')
		{
			running = false;
		}
		if (run != 'e' && run != 'E')
		{
			cout << "That was not an E. The screen will remain up\n";
			cin >> run;
		}
	}
	clearscreen();
	menu();
}

/***********************
*This shows a very basic table of the data that was entered.
*
*Preconditions - Std and iostream libraries are loaded. Student.h and Student.cpp are configured properly. menu() function is
* configured properly.
*Postconditions - Displays the table that was selected, whether you chose to display one student or all of them.
*
***********************/
void showstudents(int& x)
{
	int r;
	bool valid = false;
	cout << "Students that do not have any data saved in them will have 0's within their data, as the\ncomputer tries to calculate their GPA.\n";
	cout << "|  Name  |  ID  |  GPA  |  Class  |  Semester  |  Grade\n";

	if (x == 1)
	{
		cout << Student1.GetStudentName() << '\t' << Student1.GetStudentID() << '\t' << Student1.GetGPA();
		Student1.GetStudentClassesGradesSemester();
	}

	if (x == 2)
	{
		cout << Student2.GetStudentName() << '\t' << Student2.GetStudentID() << '\t' << Student2.GetGPA();
		Student2.GetStudentClassesGradesSemester();
	}

	if (x == 3)
	{
		cout << Student3.GetStudentName() << '\t' << Student3.GetStudentID() << '\t' << Student3.GetGPA();
		Student3.GetStudentClassesGradesSemester();
	}

	if (x == 4)
	{
		cout << Student4.GetStudentName() << '\t' << Student4.GetStudentID() << '\t' << Student4.GetGPA();
		Student4.GetStudentClassesGradesSemester();
	}

	if (x == 5)
	{
		cout << Student5.GetStudentName() << '\t' << Student5.GetStudentID() << '\t' << Student5.GetGPA();
		Student5.GetStudentClassesGradesSemester();
	}

	if (x == 6)
	{
		cout << Student6.GetStudentName() << '\t' << Student6.GetStudentID() << '\t' << Student6.GetGPA();
		Student6.GetStudentClassesGradesSemester();
	}

	if (x == 7)
	{
		cout << Student7.GetStudentName() << '\t' << Student7.GetStudentID() << '\t' << Student7.GetGPA();
		Student7.GetStudentClassesGradesSemester();
	}
	if (x == 8)//Displays all students and their associated data.
	{
		cout << Student1.GetStudentName() << '\t' << Student1.GetStudentID() << '\t' << Student1.GetGPA();
		Student1.GetStudentClassesGradesSemester();
		cout << Student2.GetStudentName() << '\t' << Student2.GetStudentID() << '\t' << Student2.GetGPA();
		Student2.GetStudentClassesGradesSemester();
		cout << Student3.GetStudentName() << '\t' << Student3.GetStudentID() << '\t' << Student3.GetGPA();
		Student3.GetStudentClassesGradesSemester();
		cout << Student4.GetStudentName() << '\t' << Student4.GetStudentID() << '\t' << Student4.GetGPA();
		Student4.GetStudentClassesGradesSemester();
		cout << Student5.GetStudentName() << '\t' << Student5.GetStudentID() << '\t' << Student5.GetGPA();
		Student5.GetStudentClassesGradesSemester();
		cout << Student6.GetStudentName() << '\t' << Student6.GetStudentID() << '\t' << Student6.GetGPA();
		Student6.GetStudentClassesGradesSemester();
		cout << Student7.GetStudentName() << '\t' << Student7.GetStudentID() << '\t' << Student7.GetGPA();
		Student7.GetStudentClassesGradesSemester();
	}
	cout << "Press E to exit back to the menu.\n";
	char run;
	bool running = true;
	cin >> run;
	while (running == true)
	{
		if (run == 'e' || run == 'E')
		{
			running = false;
		}
		if (run != 'e' && run != 'E')
		{
			cout << "That was not an E. The screen will remain up\n";
			cin >> run;
		}
	}
	clearscreen();
	menu();
}

/***********************
* Clears the screen so the window isn't always full of stuff.
*
*Preconditions - Requires std and iostream library.
*Postconditions - Scrolls screen down to the next blank portion.
*
***********************/
void clearscreen()
{
	cout << "\033[2J\033[1;1H";
}

//Dev note:The reason this is so long is because I wanted it so that you could add 7 students, so the code is 7 times as long.