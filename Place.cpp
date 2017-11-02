
#include "Place.h"
#include <string>
Place::Place() : place_number("..."),isfree(0){

}

Place::Place(string _place_number, bool _isfree) {
	place_number = _place_number;
	isfree = _isfree;
	if (isfree)
		passenger = Passenger();
}

string Place::getPlace_number() const {
	return place_number;
}

void Place::setPlace_nubmer(string _place_number) {
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

void Place::info() const {
	cout << place_number <<" : ";
	if (isfree)	cout << "free" << endl;
	else
		cout << "not free" << endl;
}

Place::~Place() {
}
