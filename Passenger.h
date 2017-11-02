/*
 * Passenger.h
 *
 *  Created on: Nov 2, 2017
 *      Author: vitalik
 */

#ifndef PASSENGER_H_
#define PASSENGER_H_
#include <string>

using namespace std;

class Passenger
{
protected:
	string first_name;
	string second_name;

public:
	Passenger();
	Passenger(string first_name, string second_name);
	string getFirstName()const;
	string getSecondName()const;
	void setFirstName(string first_name);
	void setSecondName(string second_name);
	void info() const;
	~Passenger();
};




#endif /* PASSENGER_H_ */
