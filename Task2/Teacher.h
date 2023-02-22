
#include "Faculty.h"

class Teacher : public Faculty
{
public:

	Teacher();                                         //Default Constructor
	Teacher(char* n, int i);                             //Parametrized Constructor
	void displayTeacher();                               //Display

};