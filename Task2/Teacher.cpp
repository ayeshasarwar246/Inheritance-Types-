#include "Teacher.h"

Teacher::Teacher()                             //Default Constructor
{
	cout << " Default Constructor Called";
}

Teacher::Teacher(char* n, int i) : Faculty(n, i)      //Parametrized Constructor
{

}

void Teacher::displayTeacher()                        //Display
{
	displayFaculty();
	cout << "Faculty Type : Teacher" << endl;
}