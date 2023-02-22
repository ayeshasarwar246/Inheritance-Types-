
#include <iostream>
using namespace std;

class Community
{
	char* name;
	int id;

public:

	Community();                                   //Default Constructor
	~Community();                                   //Destructor
	Community(char* n, int i);                       //Parametrized Constructor
	void displayCommunity();                        //Display
	
};