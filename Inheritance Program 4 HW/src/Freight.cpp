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

#include "Freight.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Freight::Freight() : company(""), capacity("")
{

}

Freight::Freight(int theNumOfSeats, int theNumOfEngines, std::string theCompany, std::string theCapacity) :
		Aircraft(theNumOfSeats, theNumOfEngines), company(theCompany), capacity(theCapacity)
{

}

virtual Freight::~Freight()
{

}

virtual void Freight::printCharacteristics() const
{
	cout << "This aircraft has: " << numberOfSeats << " seats. and " << numberOfEngines << " engines." << endl;
	cout << "Owned by: " << company << endl;
	cout << "It can hold " << capacity << endl << endl;
}

std::string Freight::getCompany() const
{
	return company;
}

std::string Freight::getCapacity() const
{
	return capacity;
}

void Freight::setCompany(std::string theCompany)
{
	company = theCompany;
}

void Freight::setCapacity(std::string theCapacity)
{
	capacity = theCapacity;
}

