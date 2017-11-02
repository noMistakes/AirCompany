
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
	string place_number;
	Passenger passenger;
	bool isfree;

public:
	Place();
	Place(string _place_nubmer, bool _check_for_free);
	string getPlace_number()const;
	void setPlace_nubmer(string _place_number);
	bool getIsFree()const;
	void setIsFree(bool _isfree);
	void isPassenger() const;
	void info();
	~Place();

};



#endif /* PLACE_H_ */
