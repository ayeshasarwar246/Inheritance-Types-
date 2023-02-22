#include "Sphere.h"

Sphere::Sphere()                                     //Default Constructor
{
	cout << " Default COnstructor Called ";
}

Sphere::Sphere(int s) : ThreeDShape(s)               //Parametrized Constructor
{

}

void Sphere::displaySphere()                       //Display
{
	display3D();
	cout << "This is a Sphere\n";
}

Sphere::~Sphere()                                  //Destructor
{

}