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
	cout << Animals::emailAddress << endl;
	cout << Animals::personDescription << endl;
}

//  Encapsulation for Animal class variables.
string Animals::getSpecies() {
	return species;
}
void Animals::setSpecies(string species) {
	this->species = species;
}

string Animals::getBreed() {
	return breed;
}
void Animals::setBreed(string breed) {
	this->breed = breed;
}

string Animals::getGender() {
	return gender;
}
void Animals::setGender(string gender) {
	this->gender = gender;
}

int Animals::getAge() {
	return age;
}
void Animals::setAge(int age) {
	this->age = age;
}

string Animals::getLocationFound() {
	return locationFound;
}
void Animals::setLocationFound(string locationFound) {
	this->locationFound = locationFound;
}

string Animals::getDescription() {
	return description;
}
void Animals::setDescription(string description) {
	this->description = description;
}

//  Encapsulation for Person class variables.
string Animals::getName() {
	return name;
}
void Animals::setName(string name) {
	this->name = name;
}

string Animals::getSurname() {
	return surname;
}
void Animals::setSurname(string surname) {
	this->surname = surname;
}

long int Animals::getPhoneNumber() {
	return phoneNumber;
}
void Animals::setPhoneNumber(long int phoneNumber) {
	this->phoneNumber = phoneNumber;
}

string Animals::getEmailAddress() {
	return emailAddress;
}
void Animals::setEmailAddress(string emailAddress) {
	this->emailAddress = emailAddress;
}

string Animals::getPersonDescription() {
	return personDescription;
}
void Animals::setPersonDescription(string persondescription) {
	this->personDescription = persondescription;
}