
#include "Administrator.h"
#include "Teacher.h"

class AdminTeacher : public Administrator, public Teacher
{
public:

	AdminTeacher();                                           //Default Constructor
	AdminTeacher(char* n, int roll);                          //Parametrized Constructor
	void displayAdmin();                                      //Display

};