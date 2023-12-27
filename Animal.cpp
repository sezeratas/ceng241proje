#include "Animal.h"
#include <string>
#include <vector>

using namespace std;

int usercounter = 0;

//Constructors and Destructors
Person::Person() {
	usercounter++;
	id = "@user" + to_string(usercounter);

	name = "-Not known-";
	surname = "-Not known-";
	phoneNumber = "-Not known-";
	emailAddress = "-Not known-";
	personDescription = "-Not known-";

	cout << "New person created." << endl;
	cout << "The person's id is: " << id << endl;
	cout << "*****************************" << endl;
}

Person::Person(string id, string name, string surname, string phoneNumber, string emailAddress, string personDescription) {

	this->id = id;

	this->name = name;
	this->surname = surname;
	this->phoneNumber = phoneNumber;
	this->emailAddress = emailAddress;
	this->personDescription = personDescription;

	cout << "Person " << id << " updated." << endl;
	cout << "*****************************" << endl;
}

Animals::Animals() {

	species = "-Not known-";
	breed = "-Not known-";
	gender = "-Not known-";
	age = "-Not known-";
	locationFound = "-Not known-";
	animalDescription = "-Not known-";

	//animalCode = locationFound + "/" + species + "/" + breed; //+ "/" + animalcounter;

	cout << "New animal created. (By " << id << ")" << endl << endl;
}

Animals::Animals(string id, string name, string surname, string phoneNumber, string emailAddress, string personDescription) :
	Person(id, name, surname, phoneNumber, emailAddress, personDescription)
{

	this->id = id;

	this->name = name;
	this->surname = surname;
	this->phoneNumber = phoneNumber;
	this->emailAddress = emailAddress;
	this->personDescription = personDescription;

	//animalCode = locationFound + "/" + species + "/" + breed; //+ "/" + animalcounter;

	cout << "New animal created. (By " << id << ")" << endl << endl;
}

Person::~Person() {
	cout << "Person " << id << "  deleted." << endl << endl;
	usercounter--;
}

Animals::~Animals() {
	cout << "Animal deleted." << "(" << id << ")" << endl << endl;
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

string Animals::getAge() {
	return age;
}
void Animals::setAge(string age) {
	this->age = age;
}

string Animals::getLocationFound() {
	return locationFound;
}
void Animals::setLocationFound(string locationFound) {
	this->locationFound = locationFound;
}

string Animals::getAnimalDescription() {
	return animalDescription;
}
void Animals::setAnimalDescription(string description) {
	this->animalDescription = description;
}

//  Encapsulation for Person class variables.

string Animals::getId() {
	return id;
}

/*Mantik hatasi olusturabilir.
void Animals::setId(int idNumber) {
	id = "@user" + to_string(idNumber);
}*/

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

string Animals::getPhoneNumber() {
	return phoneNumber;
}
void Animals::setPhoneNumber(string phoneNumber) {
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
void Animals::setPersonDescription(string personDescription) {
	this->personDescription = personDescription;
} Animal.cpp