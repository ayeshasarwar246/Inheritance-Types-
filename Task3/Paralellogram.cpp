#include "Paralellogram.h"

Paralellogram::Paralellogram()                                         //Default Constructor
{

}

Paralellogram::Paralellogram(int s) : TwoDShape(s)                     //Parametrized Constructor
{

}

void Paralellogram::displayParalellogram()                           //Display
{
	display2D();
	cout << "This is a Paralellogram\n";
}

Paralellogram::~Paralellogram()                                  //Destructor
{

}