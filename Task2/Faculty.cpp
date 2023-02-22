#include "Faculty.h"

Faculty::Faculty()                                   //Default Constructor
{
	cout << " Deafult Constructor Called ";
}

Faculty::Faculty(char* n, int i) : Employee(n, i)     //Parametrized Constructor
{

}

void Faculty::displayFaculty()                       //Display
{
	displayEmployee();
	cout << "Employee Type : Faculty Member" << endl;
}