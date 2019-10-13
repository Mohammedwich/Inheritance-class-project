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

#ifndef FIGHTER_H_
#define FIGHTER_H_


#include "Aircraft.h"
#include <iostream>


class Fighter : public Aircraft
{
public:
	Fighter();
	Fighter(int theNumOfSeats, int theNumOfEngines, std::string theDescription);
	virtual ~Fighter();

	virtual void printCharacteristics() const;

	std::string getDescription() const;

	void setDescription(std::string description);

private:
	std::string speedAndRangeDescription;
};


#endif /* FIGHTER_H_ */
