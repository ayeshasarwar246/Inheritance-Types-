
#include "Employee.h"

class Staff : public Employee
{
public: 

	Staff();                              //Default Constructor
	Staff(char* n, int i);                  //Parametrized Constructor
	void displayStaff();                     //Display

};