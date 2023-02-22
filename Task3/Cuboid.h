
#include "ThreeDShape.h"
class Cuboid : public ThreeDShape
{
public:

	Cuboid();                                               //Default Constructor
	Cuboid(int s);                                           //Parametrized Constructor
	void displayCuboid();                                   //Display
	~Cuboid();                                              //Destructor

}; 