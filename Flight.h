#include "Airport.h"
#include "Plane.h"
/*
 * Flight.h
 *
 *  Created on: Nov 2, 2017
 *      Author: vitalik
 */

#ifndef FLIGHT_H_
#define FLIGHT_H_
class Flight
{
protected:
	Airport first_airport;
	Airport  second_airport;
	string time_start;
	string time_end;
	Plane plane_name;

public:
	Flight();
	Flight(Airport air_start, Airport air_end, Plane _plane, string time_start, string time_end);
	Airport getFirstairport() const;
	Airport getSecondairport() const;
	string getTimeStart() const;
	string getTimeEnd() const;
	Plane getPlaneName() const;
	void info() const;
	~Flight();
};




#endif /* FLIGHT_H_ */
