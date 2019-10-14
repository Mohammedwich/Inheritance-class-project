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

#include "Fighter.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Fighter::Fighter() : speedAndRangeDescription("")
{

}

Fighter::Fighter(int theNumOfSeats, int theNumOfEngines, std::string theDescription) : Aircraft(theNumOfSeats, theNumOfEngines),
		speedAndRangeDescription(theDescription)
{

}

Fighter::~Fighter()
{

}

void Fighter::printCharacteristics() const
{
	cout << "This Fighter has: " << getNumberOfSeats() << " seats. and " << getNumberOfEngines() << " engines." << endl;
	cout << speedAndRangeDescription << endl << endl;
}

int Fighter::ObjectTypeID()
{
	return 1;
}

std::string Fighter::getDescription() const
{
	return speedAndRangeDescription;
}

void Fighter::setDescription(std::string description)
{
	speedAndRangeDescription = description;
}

