
#include "Faculty.h"

class Administrator : public Faculty
{
public:

	Administrator();                                             //Default Constructor
	Administrator(char* n, int i);                               //Parametrized Constructor
	void displayAdministrator();                                  //Display


};