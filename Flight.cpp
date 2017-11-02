#include <iostream>
#include "Flight.h"
Flight::Flight() {
	first_airport = Airport();
	second_airport = Airport();
	plane = Plane();
	//time_start = 0;
	//time_end
}

Flight::Flight(Airport _first_airport_, Airport _second_airport_, Plane _plane,
		int _time_start, int _time_end) {
	first_airport = _first_airport_;
	second_airport = _second_airport_;
	plane = _plane;
	//time_ = _time_;
}

Airport Flight::getFirstAirport() const {
	return first_airport;
}
Airport Flight::getSecondAirport() const {
	return second_airport;
}
string Flight::getTimeStart() const {
	return time_start;
	//return time_start;
}
Plane Flight::getPlane() const {
	return plane;
}

void Flight::info() const {
	cout << plane.get_airplane_number() << "\t\t" << first_airport.get_name()
			<< "\t—\t" << second_airport.get_city()<< "\t\t" << time
			<< "\t\t";
}

Flight::~Flight() {
}
