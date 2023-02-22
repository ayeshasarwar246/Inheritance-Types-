
#include "ThreeDShape.h"
class Cylinder : public ThreeDShape
{
public:

	Cylinder();                                                    //Default Constructor
	Cylinder(int s);                                              //Parametrized  Constructor
	void displayCylinder();                                       //Display
	~Cylinder();                                                 //Destructor

};