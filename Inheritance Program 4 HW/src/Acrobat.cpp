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

#include "Acrobat.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Acrobat::Acrobat() : manufacturer(""), performance("")
{

}

Acrobat::Acrobat(int theNumOfSeats, int theNumOfEngines, std::string theManufacturer, std::string thePerformance) :
		Aircraft(theNumOfSeats, theNumOfEngines), manufacturer(theManufacturer), performance(thePerformance)
{

}

virtual Acrobat::~Acrobat()
{

}

virtual void Acrobat::printCharacteristics() const
{
	cout << "This aircraft has: " << numberOfSeats << " seats. and " << numberOfEngines << " engines." << endl;
	cout << "It was made by " << manufacturer << endl;
	cout << performance << endl << endl;
}

int Acrobat::ObjectTypeID()
{
	return 2;
}

std::string Acrobat::getManufacturer() const
{
	return manufacturer;
}

std::string Acrobat::getPerformance() const
{
	return performance;
}

void Acrobat::setManufacturer(std::string theManufacturer)
{
	manufacturer = theManufacturer;
}

void Acrobat::setPerformance(std::string thePerformance)
{
	performance = thePerformance;
}

