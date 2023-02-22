#include "Bowler.h"

Bowler::Bowler()                                                 // Default constructor
{
	wickets = 0;
}

Bowler::Bowler(char* n, int m, int w) : Player(n, m)              //Parametrized constructor
{
	wickets = w;
}

Bowler::~Bowler()                                               //Destructor
{

}

void Bowler::display()                                         //Display function
{
	cout << "Wickets Taken : " << wickets << endl << endl;
}

