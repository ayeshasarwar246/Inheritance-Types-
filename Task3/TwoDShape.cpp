#include "TwoDShape.h"

TwoDShape::TwoDShape()                                            //Default Constructor
{

}

TwoDShape::TwoDShape(int s) : Shape(s)                            //Parametrized Constructor
{

}

void TwoDShape::display2D()                                      //Display
{
	displayShape();
	cout << "This is a Two Dimensional Shape\n";
}

TwoDShape::~TwoDShape()                                       //Destructor
{

}