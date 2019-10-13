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

#ifndef ACROBAT_H_
#define ACROBAT_H_


#include "Aircraft.h"
#include <iostream>


class Acrobat : public Aircraft
{
public:
	Acrobat();
	Acrobat(int theNumOfSeats, int theNumOfEngines, std::string theManufacturer, std::string thePerformance);
	virtual ~Acrobat();

	virtual void printCharacteristics() const;

	std::string getManufacturer() const;
	std::string getPerformance() const;

	void setManufacturer(std::string theManufacturer);
	void setPerformance(std::string thePerformance);

private:
	std::string manufacturer;
	std::string performance;
};


#endif /* ACROBAT_H_ */
