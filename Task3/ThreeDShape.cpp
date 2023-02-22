#include "ThreeDShape.h"

ThreeDShape::ThreeDShape()                                              //Default Constructor
{
	cout << " Default Constructor Called ";
}

ThreeDShape::ThreeDShape(int s) : Shape(s)                                   //Parametrized Constructor
{

}

void ThreeDShape::display3D()                                          //Display
{
	displayShape();
	cout << "This is a three dimensional shape\n";
}

ThreeDShape::~ThreeDShape()                                            //Destructor
{

}