#include <iostream>
#include "Flight.h"
#include <fstream>
Flight::Flight() {}

Flight::Flight(string _Place_of_departure, string _Place_of_landing, string _Departure_time, string _Arrival_time, string _airplane_number, int _number_of_places)
{
	first_airport = _Place_of_departure;
	second_airport = _Place_of_landing;
	time_start = _Departure_time;
	time_end = _Arrival_time;
	plane.set_airplane_number(_airplane_number);
	plane.set_number_of_places(_number_of_places);
}

string Flight::getFirstAirport() const {
	return first_airport;
}
string Flight::getSecondAirport() const {
	return second_airport;
}
string Flight::getTimeStart() const {
	return time_start;
	//return time_start;
}
string Flight::getTimeEnd() const
{
	return time_end;
}
Plane Flight::getPlaneName() const
{
	return plane;
}

void Flight::info() const {
	cout << plane.get_airplane_number() << "\t\t" << first_airport
		<< "\t—\t" << second_airport << "\t\t" << time_start
		<< "\t\t" << time_end << "\t\t" << plane.get_number_of_places() << endl;
}
void Flight::set_plane(string _airplane_number, int _number_of_places)
{
	plane.set_airplane_number(_airplane_number);
	plane.set_number_of_places(_number_of_places);
}
void Flight::write_out()const
{
	string path = first_airport + "-" + second_airport;
	path += ".txt";
	fstream file(path, fstream::out);
	file << first_airport << ' ' << second_airport << ' ' << time_start << ' ' << time_end << ' ' << plane.get_airplane_number() << ' ' << plane.get_number_of_places() << endl;
	file.close();
}

Flight::~Flight() {
}
istream& operator >> (istream& os, Flight& flight)
{
	string _airplane_number;
	int _number_of_places;
	os >> flight.first_airport >> flight.second_airport >> flight.time_start >> flight.time_end >> _airplane_number >> _number_of_places;
	flight.set_plane(_airplane_number, _number_of_places);
	return os;
}