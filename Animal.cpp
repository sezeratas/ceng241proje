#include "Animal.h"

void Animals::showInfos() {
	cout << Animals::species << endl;
	cout << Animals::breed << endl;
	cout << Animals::gender << endl;
	cout << Animals::age << endl;
	cout << Animals::locationFound << endl;
	cout << Animals::description << endl;
	cout << Animals::name << endl;
	cout << Animals::surname << endl;
	cout << Animals::phoneNumber << endl;
	cout << Animals::emailAdress << endl;
	cout << Animals::personDescription << endl;
}

string Animals::getTur() {
	return species;
}
void Animals::setTur(string a) {
	species = a;
}

string Animals::getCins() {
	return breed;
}
void Animals::setCins(string b) {
	breed = b;
}

string Animals::getGender() {
	return gender;
}
void Animals::setGender(string c) {
	gender = c;
}

int Animals::getAge() {
	return age;
}
void Animals::setAge(int d) {
	age = d;
}

string Animals::getLocationFound() {
	return locationFound;
}
void Animals::setLocationFound(string e) {
	locationFound = e;
}

string Animals::getDescription() {
	return description;
}
void Animals::setDescription(string f) {
	description = f;
}