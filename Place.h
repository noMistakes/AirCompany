
/*
 * Place.h
 *
 *  Created on: Nov 2, 2017
 *      Author: vitalik
 */

#ifndef PLACE_H_
#define PLACE_H_
#include <iostream>
#include "Passenger.h"
#include <string>


class Place {
protected:
	int place_number;
	Passenger passenger;
	bool isfree;

public:
	Place();
	Place(int _place_nubmer, bool _check_for_free);
	int getPlace_number()const;
	void setPlace_number(int _place_number);
	bool getIsFree()const;
	void setIsFree(bool _isfree);
	void isPassenger() const;
	void info() const;
	~Place();
	void Place::set_passenger(string _name, string _surname);
	friend ostream& operator << (ostream& os, Place& place);
	friend istream& operator >> (istream& os, Place& place);
};



#endif /* PLACE_H_ */
