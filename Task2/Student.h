
#include "Community.h"

class Student : public Community
{
public:

	Student();                                      //Default Constructor
	Student(char* n, int i);                         //Parametrized Constructor
	void displayStudent();                          //Display
};