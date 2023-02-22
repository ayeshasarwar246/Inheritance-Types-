#include "Rectangle.h"

Rectangle::Rectangle()                                              //Default Constructor
{

}

Rectangle::Rectangle(int s) : TwoDShape(s)                        //Parametrized Constructor
{

}

void Rectangle::displayRectangle()                                 //Display
{
	display2D();
	cout << "This is a Rectangle\n";
}

Rectangle::~Rectangle()                                          //Destructor
{

}