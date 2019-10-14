//============================================================================
// Name			: Fighter.h
// Author		: Mohammed Ahmed
// Course		: UTDallas CS 1337.502 F19
// Version		: 1.0
// Copyright	: 2019
//
// Description :
// Aircraft type ID: 0, Fighter type ID: 1, Aircraft type ID: 2, Aircraft type ID: 3
//
// The program takes an input file with each lines structured like:
// "command(n for new, p for print characteristics), type ID(0,1,2, or 3), #seats, #engines, description1(if applicable), description2(if applicable)"
// Descriptions must be in quotations
//
// n commands will create a plane with the traits mentioned and put it in a vector. p command will call displayCharacteristics()
// for all planes if typeID: 0; Fighters only if typeID: 1; Acrobats only if typeID: 2; Freights only if typeID: 3
//
// lines with invalid commands or typeID's will be skipped. Lines with bad descriptions will create a plane without a description.
// extra text after the needed information on the same line is ignored
//
// Return codes: -1: Failed to open file, -2: Error while reading file, -3: Error while finding iterator range for string from "line"
//				-5: Error while checking command type
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
	virtual int ObjectTypeID();

	std::string getDescription() const;

	void setDescription(std::string description);

private:
	std::string speedAndRangeDescription;
};


#endif /* FIGHTER_H_ */
