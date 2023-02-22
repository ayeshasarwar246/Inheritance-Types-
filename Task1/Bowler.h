#include "Player.h"

class Bowler : public Player
{
	int wickets;

public:

	Bowler();                                            //Default constructor
	Bowler(char* n, int m, int w);                      //Parametrized Constructor
	~Bowler();                                         //Destructor
	void display();                                    //Display function

};