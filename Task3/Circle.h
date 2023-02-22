
#include "TwoDShape.h"

class Circle : public TwoDShape
{
public:

	Circle();                                                  //Default Constructor
	Circle(int s);                                               //Parametrized Constructor
	void displayCircle();                                         //Display
	~Circle();                                                 //Destructor

}; 