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
	string first_airport;
	string second_airport;
	string time_start;
	string time_end;
	Plane plane;

public:
	Flight();
	Flight(string _Place_of_departure, string _Place_of_landing, string _Departure_time, string _Arrival_time, string _airplane_number, int _number_of_places);
	void set_plane(string _airplane_number, int _number_of_places);
	string getFirstAirport() const;
	string getSecondAirport() const;
	string getTimeStart() const;
	string getTimeEnd() const;
	Plane getPlaneName() const;
	void info() const;
	void write_out()const;
	~Flight();
	friend istream& operator >> (istream& os, Flight& flight);
};




#endif /* FLIGHT_H_ */
