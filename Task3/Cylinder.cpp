#include "Cylinder.h"

Cylinder::Cylinder()                                                //Default Constructor
{
	cout << " Default Constructor ";
}

Cylinder::Cylinder(int s) : ThreeDShape(s)                            //Parametrized Constructor
{

}

void Cylinder::displayCylinder()                                     //Display
{
	display3D();
	cout << "This is a Cylinder\n";
}

Cylinder::~Cylinder()                                                  //Destructor
{

}