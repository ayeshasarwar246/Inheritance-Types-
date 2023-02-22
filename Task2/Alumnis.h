#pragma once
#include "Community.h"

class Alumnis : public Community
{
public:

	Alumnis();                                    //Default Constructor
	Alumnis(char* n, int i);                       //Parametrized Constructor
	void displayAlumni();                           //Display

};