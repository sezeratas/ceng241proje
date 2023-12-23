#include "Animal.h"
#include <string>

int usercounter = 0;
//int animalcounter = 1;

void Animals::showInfos() {
	cout << Animals::species << endl;
	cout << Animals::breed << endl;
	cout << Animals::gender << endl;
	cout << Animals::age << endl;
	cout << Animals::locationFound << endl;
	cout << Animals::animalDescription << endl;
	cout << Animals::id << endl;
	cout << Animals::name << endl;
	cout << Animals::surname << endl;
	cout << Animals::phoneNumber << endl;
	cout << Animals::emailAddress << endl;
	cout << Animals::personDescription << endl << endl;
}

/*  add fonksiyonu mainFunc icinde olacak.
void Animals::inputAdvertisement() {

	cout << "Input the animal's species: ";
	cin >> species;

	cout << "Input the animal's breed: ";
	cin >> breed;

	cout << "Input the animal's gender: ";
	cin >> gender;

	cout << "Input the animal's age: ";
	cin >> age;
	cout << "Input the animal's location lost (or found): ";
	cin >> locationFound;

	cout << "Input the animal's descrition: ";
	cin >> animalDescription;
	cout << "Input the pet owner's name: ";
	cin >> name;
	cout << "Input the pet owner's surname: ";
	cin >> surname;
	cout << "Input the pet owner's phone numbers: ";
	cin >> phoneNumber;
	cout << "Input the pet owner's email address: ";
	cin >> emailAddress;
	cout << "Input the pet owner's descrition: ";
	cin >> personDescription;
	cout << "*****************************" << endl;

	//animalCode = locationFound + "/" + species + "/" + breed; + "/" + animalcounter;
}*/


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

Animals::Animals() {

	species = "-Not known-";
	breed = "-Not known-";
	gender = "-Not known-";
	age = -1;
	locationFound = "-Not known-";
	animalDescription = "-Not known-";

	//animalCode = locationFound + "/" + species + "/" + breed; //+ "/" + animalcounter;
	cout << "New animal created. (By " << id << ")" << endl << endl;
}

Person::~Person() {
	cout << "Person " << id <<"  deleted." << endl << endl;
	usercounter--;
}

//Hayvan kodu yaparsak kullanilabilir veya direkt Animal deleted yapilabilir.
Animals::~Animals() {
	cout << "Animal deleted." << endl << endl;
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
	return animalDescription;
}
void Animals::setDescription(string description) {
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
void Animals::setPersonDescription(string persondescription) {
	this->personDescription = persondescription;
}