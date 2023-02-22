#include "Alumnis.h"

Alumnis::Alumnis()                                                      //Default Constructor
{
	cout << " Default Constructor Called";
}

Alumnis::Alumnis(char* n, int i) : Community(n, i)                    //Parametrized Constructor
{

}

void Alumnis::displayAlumni()                                    //Display
{
	displayCommunity();
	cout << "Type : Alumni" << endl;
}