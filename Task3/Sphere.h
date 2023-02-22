
#include "ThreeDShape.h"
class Sphere : public ThreeDShape
{
public:

	Sphere();                                      //Default Constructor
	Sphere(int s);                                //Parametrized Constructor
	void displaySphere();                        //Display
	~Sphere();                                    //Destructor

};