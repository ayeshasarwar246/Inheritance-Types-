#include "Employee.h"

Employee::Employee()                                                         //Default Constructor
{
	cout << " Default Constructor Called";
}

Employee::Employee(char* n, int i) : Community(n, i)                        //Parametrized Constructor
{

}

void Employee::displayEmployee()                                           //Display
{
	displayCommunity();
	cout << "Type : Employee" << endl;
}