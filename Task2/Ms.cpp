#include "Ms.h"

Ms::Ms()                                                           //Default Constructor
{
	cout << " Default Constructor Called";
}

Ms::Ms(char* n, int i) : Student(n, i)                              //Parametrized Constructor
{

}

void Ms::displayMs()                                                  //Display
{
	displayStudent();
	cout << "Student Type : Masters" << endl;
}