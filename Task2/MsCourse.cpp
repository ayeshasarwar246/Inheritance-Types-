#include "MsCourse.h"

MsCourse::MsCourse()                                            //Default Constructor
{
	cout << " Default Constructor Called";
}

MsCourse::MsCourse(char* n, int i) : Ms(n, i)                  //Parametrized Constructor
{

}

void MsCourse::displayMsCourse()                              //Display
{
	displayMs();
	cout << "MS Type : MS by Course Work" << endl;
}