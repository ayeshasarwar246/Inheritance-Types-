#include "Administrator.h"

Administrator::Administrator()                            //Default Constructor
{
	cout << " Default constructor Called ";
}

Administrator::Administrator(char* n, int i) : Faculty(n, i)          //Parametrized Constructor
{

}

void Administrator::displayAdministrator()                         //Display
{
	displayFaculty();
	cout << "Faculty Type : Administration" << endl;
}