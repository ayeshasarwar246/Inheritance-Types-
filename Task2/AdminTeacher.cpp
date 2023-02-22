#include "AdminTeacher.h"

AdminTeacher::AdminTeacher()                                                   //Default Constructor
{
	cout << " Default Constructor Called";
}

AdminTeacher::AdminTeacher(char* n, int i) : Administrator(n, i), Teacher(n, i)                 //Parametrized Constructor
{

}

void AdminTeacher::displayAdmin()                                              //Display
{
	displayAdministrator();
	displayTeacher();
	cout << "Administrating Teacher" << endl;
}