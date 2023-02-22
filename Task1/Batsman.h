#include "Bowler.h"

class Batsman : public Player
{
	int total_score;
	int* match_score;
	double average;

public:

	Batsman();                                                     //Default Constructor
	Batsman(char* n, int m, int t, int* m1);                      //Parametrized Constructor
	~Batsman();                                                  //Destructor
	void calculateAvg();                                         //AverageCalculating function
	void display();                                             //Display function


};