
#include "ThreeDShape.h"
class Cube : public ThreeDShape
{
public:

	Cube();                                   //Default Constructor
	Cube(int s);                              //Parametrized Constructor
	void displayCube();                       //Display
	~Cube();                                 //Destructor

};