
#include "TwoDShape.h"
class Rectangle : public TwoDShape
{
public:

	Rectangle();                                    //Default Constructor
	Rectangle(int s);                     //Parametrized Constructor
	void displayRectangle();              //Display
	~Rectangle();                  //Destructor

};