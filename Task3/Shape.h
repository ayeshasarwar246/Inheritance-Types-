
#include <iostream>
using namespace std;

class Shape
{
	int sides;

public:
	Shape();                                                 //Default Constructor
	Shape(int s);                                               //Parametrized Constructor
	void displayShape();                                       //Display
	~Shape();                                                 //Destructor

};