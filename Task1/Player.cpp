#include "Player.h"

Player::Player()                                                //Default constructor
{
	name = nullptr;
	matches = 0;
}

Player::Player(char* n, int m)                                //Parametrized constructor
{
	int len = 0;

	for (len = 0; n[len] != '\0'; len++);

	name = new char[len + 1];

	for (int i = 0; i < len; i++)
		name[i] = n[i];
	name[len] = '\0';

	matches = m;
}


Player::~Player()                                                   //Destructor
{
	delete[] name;
	name = nullptr;
}

void Player::displayP()                                             //Display Function
{
	cout << "Name : " << name << endl;
	cout << "Matches Played : " << matches << endl;
}
