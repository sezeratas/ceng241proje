#include "Animal.h"
#include <string>
#include <vector>

using namespace std;

int usercounter = 0;
int animalcounter = 0;

//Constructors and Destructors
PersonsInfo::PersonsInfo() {
	usercounter++;
	id = "@user" + to_string(usercounter);

	name = "-Not known-";
	surname = "-Not known-";
	phoneNumber = "-Not known-";
	emailAddress = "-Not known-";
	personDescription = "-Not known-";

	cout << "New person created." << endl;
	cout << "The person's id is: " << id << endl;
	cout << "***********" << endl;
}

PersonsInfo::PersonsInfo(string id, string name, string surname, string phoneNumber, string emailAddress, string personDescription) {

	this->id = id;

	this->name = name;
	this->surname = surname;
	this->phoneNumber = phoneNumber;
	this->emailAddress = emailAddress;
	this->personDescription = personDescription;

	cout << "Person " << id << " updated." << endl;
	cout << "***********" << endl;
}

AnimalsInfo::AnimalsInfo() {
	ilanid = NULL;
	animalcounter += 1;
	species = "-Not known-";
	breed = "-Not known-";
	gender = "-Not known-";
	age = "-Not known-";
	locationFound = "-Not known-";
	animalDescription = "-Not known-";

	animalStatus = "-Not known-";

	animalC = animalcounter;

	cout << "New animal created. (By " << "PersonsInfo.getId()" << ")" << endl << endl;
}

/*AnimalsInfo::AnimalsInfo(string id, string name, string surname, string phoneNumber, string emailAddress, string personDescription)
{

	this->id = id;

	this->name = name;
	this->surname = surname;
	this->phoneNumber = phoneNumber;
	this->emailAddress = emailAddress;
	this->personDescription = personDescription;

	animalC = animalcounter;

	cout << "New animal created. (By " << id << ")" << endl << endl;
}*/

PersonsInfo::~PersonsInfo() {
	cout << "Person " << id << "  deleted." << endl << endl;
	usercounter--;
}

AnimalsInfo::~AnimalsInfo() {
	animalcounter--;
	cout << "Animal deleted." << "(" << "id" << ")" << endl << endl;
}

//  Encapsulation for Animal class variables.

int AnimalsInfo::getAnimalC() {
	return animalC;
}
/*void AnimalsInfo::setAnimalCode(string animalnum) {
	animalC += animalnum;
}*/

string AnimalsInfo::getSpecies() {
	return species;
}
void AnimalsInfo::setSpecies(string species) {
	this->species = species;
}

string AnimalsInfo::getBreed() {
	return breed;
}
void AnimalsInfo::setBreed(string breed) {
	this->breed = breed;
}

string AnimalsInfo::getGender() {
	return gender;
}
void AnimalsInfo::setGender(string gender) {
	this->gender = gender;
}

string AnimalsInfo::getAge() {
	return age;
}
void AnimalsInfo::setAge(string age) {
	this->age = age;
}

string AnimalsInfo::getLocationFound() {
	return locationFound;
}
void AnimalsInfo::setLocationFound(string locationFound) {
	this->locationFound = locationFound;
}

string AnimalsInfo::getAnimalDescription() {
	return animalDescription;
}
void AnimalsInfo::setAnimalDescription(string description) {
	this->animalDescription = description;
}

string AnimalsInfo::getAnimalStatus() {
	return animalStatus;
}
void AnimalsInfo::setAnimalStatus(string animalStatus) {
	this->animalStatus = animalStatus;
}

//  Encapsulation for Person class variables.

string PersonsInfo::getId() {
	return id;
}

/*Mantik hatasi olusturabilir.
void Animals::setId(int idNumber) {
	id = "@user" + to_string(idNumber);
}*/

string PersonsInfo::getName() {
	return name;
}
void PersonsInfo::setName(string name) {
	this->name = name;
}

string PersonsInfo::getSurname() {
	return surname;
}
void PersonsInfo::setSurname(string surname) {
	this->surname = surname;
}

string PersonsInfo::getPhoneNumber() {
	return phoneNumber;
}
void PersonsInfo::setPhoneNumber(string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

string PersonsInfo::getEmailAddress() {
	return emailAddress;
}
void PersonsInfo::setEmailAddress(string emailAddress) {
	this->emailAddress = emailAddress;
}

string PersonsInfo::getPersonDescription() {
	return personDescription;
}
void PersonsInfo::setPersonDescription(string personDescription) {
	this->personDescription = personDescription;
}