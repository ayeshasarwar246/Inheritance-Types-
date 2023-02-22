#include "Community.h"

Community::Community()                                              //Default Constructor
{
	name = nullptr;
	id = 0;
}


Community::~Community()                                      //Destructor
{
	delete[] name;
	name = nullptr;
}

Community::Community(char* n, int i)                              //Parametrized Constructor
{
	int len = 0;
	
	for (len = 0; n[len] != '\0'; len++);
	name = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		name[i] = n[i];
	}
	name[len] = '\0';

	id = i;
}


void Community::displayCommunity()                             //Display
{
	cout << "Name : " << name << endl;
	cout << "ID : " << id << endl;
}
