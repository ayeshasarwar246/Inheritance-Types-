
#include "Community.h"

class Employee : public Community
{
public:

	Employee();                                  //Default Constructor
	Employee(char* n, int i);                     //Parametrized Constructor
	void displayEmployee();                       //Display

};