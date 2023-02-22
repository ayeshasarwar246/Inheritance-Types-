
#include "Shape.h"

class ThreeDShape : public Shape
{
public:

	ThreeDShape();                                      //Default Constructor
	ThreeDShape(int s);                                   //Parametrized Constructor
	void display3D();                                    //Display
	~ThreeDShape();                                     //Destructor

};