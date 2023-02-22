#include "Tetrahedon.h"

Tetrahedon::Tetrahedon()                                              //Default Constructor
{

}

Tetrahedon::Tetrahedon(int s) : ThreeDShape(s)                      //parametrized Constructor
{

}

void Tetrahedon::displayTetrahedon()                             //Display
{
	display3D();
	cout << "This is a Tetrahedon\n";
}

Tetrahedon::~Tetrahedon()                                       //Destructor
{

}