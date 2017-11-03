
#include "Place.h"
#include <string>
Place::Place() : place_number(0),isfree(0){

}

Place::Place(int _place_number, bool _isfree) {
	place_number = _place_number;
	isfree = _isfree;
	if (isfree)
		passenger = Passenger();
}

int Place::getPlace_number() const {
	return place_number;
}

void Place::setPlace_number(int _place_number) {
	place_number = _place_number;
}

bool Place::getIsFree() const {
	return isfree;
}

void Place::setIsFree(bool _isfree) {
	isfree = _isfree;
	if (isfree)	passenger = Passenger();
}

void Place::isPassenger() const {
	if (isfree)	passenger.info();
	else
		cout << "\nEMPTY";
}
void Place::set_passenger(string _name, string _surname)
{
	if (_name != "")
	{
		isfree = true;
	}
	else
	{
		isfree = false;
	}
	this->passenger.setFirstName(_name);
	this->passenger.setSecondName(_surname);
}
void Place::info() const {
	cout << place_number <<" : ";
	if (isfree)	cout << "free" << endl;
	else
		cout << "not free" << endl;
}

Place::~Place() {
}
ostream& operator << (ostream& os, Place& place)
{
	os << place.place_number << ' ' << place.isfree << ' ' << place.passenger;
	return os;
}

istream& operator >> (istream& is, Place &place)
{
	is >> place.place_number >> place.isfree;
	return is;
}
