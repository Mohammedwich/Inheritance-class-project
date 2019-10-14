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
//Aircraft type ID: 0, Fighter type ID: 1, Aircraft type ID: 2, Aircraft type ID: 3
//Return codes: -1: Failed to open file, -2: Error while reading file, -3: Error while finding iterator range for string from "line"
//				-4: Program broke while trying to execute print command.
//============================================================================

#include "Aircraft.h"
#include "Fighter.h"
#include "Acrobat.h"
#include "Freight.h"
#include "stdio.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	std::string line;	//used to hold every line from input file for processing
	std::vector<Aircraft *> planesVector;	//will be filled with aircrafts from the input file

	std::string fileName;
	cout << "Enter input file name: " <<endl;
	getline(cin, fileName);

	std::ifstream fileReader;
	fileReader.open(fileName);

	if(!(fileReader.is_open()) )
	{
		cout << "Error occurred while opening file. Exiting..." << endl;
		return -1;
	}


		while(getline(fileReader, line))
		{
			//try start
			try
			{

			//Get rid of commas from string
			for(auto iter = line.begin(); iter!=line.end(); ++iter)
			   {
				   if((*iter)==',')
				   {
					   line.erase(iter);
				   }
			   }

			std::string command;
			int typeToBuildOrPrint;
			std::string word;
			std::stringstream s(line);

			s >> command;
			s >> word;
			typeToBuildOrPrint = stoi(word);

			//check if we need to skip line
			if (!(command.compare("n") || command.compare("p")) )
			{
				cout << "Invalid command or object type. Skipping line..." << endl;
				continue;
			}


			if(command.compare("n"))
			{
				if(typeToBuildOrPrint == 0)
				{
					int seats;
					int engines;

					s >> word;
					seats = stoi(word);
					s >> word;
					engines = stoi(word);

					planesVector.push_back(new Aircraft(seats, engines));
				}
				else if(typeToBuildOrPrint == 1)
				{
					int seats;
					int engines;


					s >> word;
					seats = stoi(word);
					s >> word;
					engines = stoi(word);

					std::string::iterator firstWordStart;
					bool iter1Set = false;
					std::string::iterator firstWordEnd;
					bool iter2Set = false;

					//Getting the range of the phrase from the line to initialize a string with said range, so it can be passed to constructor
					for(auto iter = line.begin(); iter != line.end(); ++iter)
					{
						if((*iter) == '"')
						{
							if(iter1Set == false)
							{
								firstWordStart = (iter+1);
								iter1Set = true;
							}
							else if(iter2Set == false)
							{
								firstWordEnd = iter;
								iter2Set = true;
							}
							else
							{
								cout << "Issue at string range detector" << endl;
								return -3;
							}
						}
					}

					std::string description(firstWordStart, firstWordEnd);

					planesVector.push_back(new Fighter(seats, engines, description));

				}
				else if(typeToBuildOrPrint == 2)
				{
					int seats;
					int engines;

					s >> word;
					seats = stoi(word);
					s >> word;
					engines = stoi(word);

					// iterXset are flags to decide which iterator to assign to in the loop below
					std::string::iterator firstWordStart;
					bool iter1Set = false;
					std::string::iterator firstWordEnd;
					bool iter2Set = false;
					std::string::iterator secondWordStart;
					bool iter3Set = false;
					std::string::iterator secondWordEnd;
					bool iter4Set = false;

					//Getting the range of the phrases from the line to initialize a string with said range, so it can be passed to constructor
					for(auto iter = line.begin(); iter != line.end(); ++iter)
					{
						if((*iter) == '"')
						{
							if(iter1Set == false)
							{
								firstWordStart = (iter+1);
								iter1Set = true;
							}
							else if(iter2Set == false)
							{
								firstWordEnd = iter;
								iter2Set = true;
							}
							else if(iter3Set == false)
							{
								secondWordStart = (iter+1);
								iter3Set = true;
							}
							else if(iter4Set == false)
							{
								secondWordEnd = iter;
								iter4Set = true;
							}
							else
							{
								cout << "Issue at string range detector" << endl;
								return -3;
							}
						}
					}

					std::string description1(firstWordStart, firstWordEnd);
					std::string description2(secondWordStart, secondWordEnd);

					planesVector.push_back(new Acrobat(seats, engines, description1, description2));

				}
				else if(typeToBuildOrPrint == 3)
				{

					int seats;
					int engines;

					s >> word;
					seats = stoi(word);
					s >> word;
					engines = stoi(word);

					// iterXset are flags to decide which iterator to assign to in the loop below
					std::string::iterator firstWordStart;
					bool iter1Set = false;
					std::string::iterator firstWordEnd;
					bool iter2Set = false;
					std::string::iterator secondWordStart;
					bool iter3Set = false;
					std::string::iterator secondWordEnd;
					bool iter4Set = false;

					//Getting the range of the phrases from the line to initialize a string with said range, so it can be passed to constructor
					for(auto iter = line.begin(); iter != line.end(); ++iter)
					{
						if((*iter) == '"')
						{
							if(iter1Set == false)
							{
								firstWordStart = (iter+1);
								iter1Set = true;
							}
							else if(iter2Set == false)
							{
								firstWordEnd = iter;
								iter2Set = true;
							}
							else if(iter3Set == false)
							{
								secondWordStart = (iter+1);
								iter3Set = true;
							}
							else if(iter4Set == false)
							{
								secondWordEnd = iter;
								iter4Set = true;
							}
							else
							{
								cout << "Issue at string range detector" << endl;
								return -3;
							}
						}
					}

					std::string description1(firstWordStart, firstWordEnd);
					std::string description2(secondWordStart, secondWordEnd);

					planesVector.push_back(new Freight(seats, engines, description1, description2));

				}
				else
				{
					cout << "An error occurred while reading the file. Exiting" << endl;
					return -2;
				}
			}
			else if (command.compare("p"))
			{
				if(typeToBuildOrPrint == 0)
				{
					for(auto iter = planesVector.begin(); iter != planesVector.end(); ++iter)
					{
						(*iter)->printCharacteristics();
					}
				}
				else if(typeToBuildOrPrint == 1)
				{
					for(auto iter = planesVector.begin(); iter != planesVector.end(); ++iter)
					{
						if((*iter)->ObjectTypeID() == 1)
						{
							(*iter)->printCharacteristics();
						}
					}
				}
				else if(typeToBuildOrPrint == 2)
				{
					for(auto iter = planesVector.begin(); iter != planesVector.end(); ++iter)
					{
						if((*iter)->ObjectTypeID() == 2)
						{
							(*iter)->printCharacteristics();
						}
					}
				}
				else if(typeToBuildOrPrint == 3)
				{
					for(auto iter = planesVector.begin(); iter != planesVector.end(); ++iter)
					{
						if((*iter)->ObjectTypeID() == 3)
						{
							(*iter)->printCharacteristics();
						}
					}
				}
				else
				{
					cout << "Program broke while trying to execute print command" << endl;
					return -4;
				}

			}

			}
			catch(...)
			{
				cout << "Invalid arguments. Skipping to next line of input..." << endl;
				continue;
			}
			//try block end
		}


	fileReader.close();

	//Free allocated memory
	for(auto x : planesVector)
	{
		delete x;
	}
	planesVector.clear();

	return 0;
}
