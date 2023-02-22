#include "Staff.h"

Staff::Staff()                                                        //Default Constructor
{
	cout << "Default Constructor Called ";
}

Staff::Staff(char* n, int i) : Employee(n, i)                           //Parametrized Constructor
{

}

void Staff::displayStaff()                                            //Display
{
	displayEmployee();
	cout << "Employee Type : Staff Member" << endl;
}