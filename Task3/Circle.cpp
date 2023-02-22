#include "Circle.h"

Circle::Circle()                                                       //Default Constructor
{
	cout << " Default Constructor Called  ";
}

Circle::Circle(int s) : TwoDShape(s)                                   //Parametrized  Constructor
{

}

void Circle::displayCircle()                                          //Display
{
	display2D();
	cout << "This is a Circle\n";
}

Circle::~Circle()                                                   //Destructor
{

}