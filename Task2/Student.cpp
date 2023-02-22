#include "Student.h"

Student::Student()                                            //Default Constructor
{
	cout << " Default Constructor Called";
}

Student::Student(char* n, int i) : Community(n, i)            //Parametrized Constructor
{

}

void Student::displayStudent()                             //Display
{
	displayCommunity();
	cout << "Type : Student" << endl;
}