#include <iostream>
using namespace std;

class Player
{
protected:

	char* name;
	int matches;

public:

	Player();                                              //Default Constructor
	Player(char* n, int m);                                //Parametrized Constructor
	~Player();                                            // Destructor
	void displayP();                                        //Display function
};