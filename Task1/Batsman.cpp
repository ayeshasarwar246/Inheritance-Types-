#include "Batsman.h"

Batsman::Batsman()                                                                    //Default Constructor
{
	total_score = 0;
	match_score = nullptr;
	average = 0.0;
}

Batsman::Batsman(char* n, int m, int t, int* m1) : Player(n, m)                    // Parametrized Constructor
{
	total_score = t;

	match_score = new int[matches];

	for (int i = 0; i < matches; i++)
		match_score[i] = m1[i];

	average = 0;
}

void Batsman::calculateAvg()                                                        //AverageCalculating
{
	for (int i = 0; i < matches; i++)
		average += match_score[i];

	average /= matches;
}

Batsman::~Batsman()                                                                    //Destructor
{
	delete[] match_score;
	match_score = nullptr;
}

void Batsman::display()                                                                 //Display function
{
	cout << "Score : " << total_score << endl;
	cout << "Average: " << average << endl << endl;
}

