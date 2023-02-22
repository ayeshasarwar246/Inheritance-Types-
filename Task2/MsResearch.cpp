#include "MsResearch.h"

MsResearch::MsResearch()                                    //Default Constructor
{
	cout << " Default Constructor Called ";
}

MsResearch::MsResearch(char* n, int i) : Ms(n, i)           //Parametrized Constructor
{

}

void MsResearch::displayMsResearch()                      //Display
{
	displayMs();
	cout << "MS Type : MS by Research" << endl;
}