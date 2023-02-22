#include "Triangle.h"

Triangle::Triangle()                                               //Default Constructor
{

}

Triangle::Triangle(int s) : TwoDShape(s)                        //Parametrized Constructor
{

}

void Triangle::displayTriangle()                                 //DisplAY
{
	display2D();
	cout << "This is a Triangle\n";
}

Triangle::~Triangle()                                         //Destructor
{

}