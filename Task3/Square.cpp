#include "Square.h"

Square::Square()                                              //Default Constructor
{

}

Square::Square(int s) : TwoDShape(s)                        //Parametrized Constructor
{

}

void Square::displaySq()                                  //Display
{
	display2D();
	cout << "This is a Sqaure\n";
}

Square::~Square()                                         //Destructor
{

}