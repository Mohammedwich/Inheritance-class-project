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

#ifndef FREIGHT_H_
#define FREIGHT_H_


#include "Aircraft.h"
#include <iostream>


class Freight : public Aircraft
{
public:
	Freight();
	Freight(int theNumOfSeats, int theNumOfEngines, std::string theCompany, std::string theCapacity);
	virtual ~Freight();

	virtual void printCharacteristics() const;

	std::string getCompany() const;
	std::string getCapacity() const;

	void setCompany(std::string theCompany);
	void setCapacity(std::string theCapacity);

private:
	std::string company;
	std::string capacity;
};


#endif /* FREIGHT_H_ */
