
#include "TwoDShape.h"

class Square : public TwoDShape
{
public:

	Square();                                  //Default Constructor
	Square(int);                               //Parametrized Constructor
	void displaySq();                          //Display
	~Square();                                 //Destructor

};