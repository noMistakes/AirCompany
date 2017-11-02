#include "Passenger.h"
#include <iostream>
Passenger::Passenger():first_name("first name"),second_name("second name") {

}

Passenger::Passenger(string _first_name, string _second_name) {
	first_name = _first_name;
	second_name = _second_name;
}

void Passenger::setFirstName(string _first_name) {
	first_name = _first_name;
}

string Passenger::getFirstName() const {
	return first_name;
}
void Passenger::setSecondName(string _second_name) {
	second_name = _second_name;
}


void Passenger::info() const {
	cout << "First Name: " << first_name << endl;
	cout << "Second Name: " << second_name << endl;
}

Passenger::~Passenger() {
}
