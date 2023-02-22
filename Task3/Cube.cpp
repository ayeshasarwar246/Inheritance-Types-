#include "Cube.h"

Cube::Cube()                                              //Default Constructor
{
	cout << " Default Constructor Called ";
}

Cube::Cube(int s) : ThreeDShape(s)                     //Parametrized Constructor
{

}

void Cube::displayCube()                             //Display
{
	display3D();
	cout << "This is a Cube\n";
}

Cube::~Cube()                                     //Destructor
{

}