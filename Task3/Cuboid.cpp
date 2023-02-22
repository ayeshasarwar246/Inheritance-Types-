#include "Cuboid.h"

Cuboid::Cuboid()                                                  //Default Constructor
{

}

Cuboid::Cuboid(int s) : ThreeDShape(s)                           //Parametrized Constructor
{

}

void Cuboid::displayCuboid()                                   //Display
{
	display3D();
	cout << "This is a Cuboid\n";
}

Cuboid::~Cuboid()                                           //Destructor
{

}