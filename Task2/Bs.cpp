#include "Bs.h"

Bs::Bs()                                                 //Default Constructor
{
	cout << "Default Constructor Called ";
}

Bs::Bs(char* n, int i) :Student(n, i)                    //Parametrized Constructor
{

}

void Bs::displayBs()                                   //Display Function
{
	displayStudent();
	cout << "Student Type : Bachelors" << endl;
}