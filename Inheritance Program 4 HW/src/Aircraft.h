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

#ifndef AIRCRAFT_H_
#define AIRCRAFT_H_

class Aircraft
{
public:
	Aircraft();
	Aircraft(int theNumOfSeats, int theNumOfEngines);
	virtual ~Aircraft();

	virtual void printCharacteristics() const;

	int getNumberOfSeats() const;
	int getNumberOfEngines() const;

	void setNumberOfSeats(int numOfSeats);
	void setNumberOfEngines(int numOfEngines);

private:
	int numberOfSeats;
	int numberOfEngines;
};



#endif /* AIRCRAFT_H_ */
