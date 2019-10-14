//============================================================================
// Name			: File name??????????
// Author		: Mohammed Ahmed
// Course		: UTDallas CS 1337.502 F19
// Version		: 1.0
// Copyright	: 2019
//
// Description :
//
//		???????????????
//
//
//============================================================================

#include "Aircraft.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


Aircraft::Aircraft() : numberOfSeats(0), numberOfEngines(0)
{

}

Aircraft::Aircraft(int theNumOfSeats, int theNumOfEngines) : numberOfSeats(theNumOfSeats), numberOfEngines(theNumOfEngines)
{

}

Aircraft::~Aircraft()
{

}

void Aircraft::printCharacteristics() const
{
	cout << "This aircraft has: " << numberOfSeats << " seats. and " << numberOfEngines << " engines." << endl << endl;
}

int Aircraft::ObjectTypeID()
{
	return 0;
}

int Aircraft::getNumberOfSeats() const
{
	return numberOfSeats;
}

int Aircraft::getNumberOfEngines() const
{
	return numberOfEngines;
}

void Aircraft::setNumberOfSeats(int numOfSeats)
{
	numberOfSeats = numOfSeats;
}

void Aircraft::setNumberOfEngines(int numOfEngines)
{
	numberOfEngines = numOfEngines;
}




