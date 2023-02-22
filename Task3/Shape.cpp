#include "Shape.h"

Shape::Shape()                                                   //Default Constructor
{
	sides = 0;
}

Shape::Shape(int s)                                                //Parametrized Constructor
{
	sides = s;
}

void Shape::displayShape()                                     //Display
{
	cout << "This shape has " << sides << " sides \n";
}

Shape::~Shape()                                              //Destructor
{

}