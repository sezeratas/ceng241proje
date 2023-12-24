#pragma once

#include<iostream>
#include "Animal.h"
#include <vector>
#include <string>

vector<Animals*> animalV;

using namespace std;

void showInfos(Animals* animal) {
	cout << "Animal's species: " << animal->getSpecies() << endl;
	cout << "Animal's breed: " << animal->getBreed() << endl;
	cout << "Animal's gender: " << animal->getGender() << endl;
	cout << "Animal's age: " << animal->getAge() << endl;
	cout << "Animal's location: " << animal->getLocationFound() << endl;
	cout << "Animal's description: " << animal->getAnimalDescription() << endl << endl;

	cout << "Animal's owner's name: " << animal->getName() << endl;
	cout << "Animal's owner's surname: " << animal->getSurname() << endl;
	cout << "Animal's owner's phone number: " << animal->getPhoneNumber() << endl;
	cout << "Animal's owner's email address: " << animal->getEmailAddress() << endl;
	cout << "Animal's owner's description: " << animal->getPersonDescription() << endl;
	cout << "***********************************" << endl << endl;
}

void AddAdvertisement() {

	Animals* animal = new Animals();

	//  Local variable to input
	string species;
	string breed;
	string gender;
	string age;
	string locationFound;
	string animalDescription;
	string name;
	string surname;
	string phoneNumber;
	string emailAddress;
	string personDescription;

	//Animal class inputs
	cout << "Input the animal's species: ";
	getline(cin, species);
	animal->setSpecies(species);

	cout << "Input the animal's breed: ";
	getline(cin,breed);
	animal->setBreed(breed);

	cout << "Input the animal's gender: ";
	getline(cin, gender);
	animal->setGender(gender);

	cout << "Input the animal's age: ";
	getline(cin, age);
	animal->setAge(age);

	cout << "Input the animal's location lost (or found): ";
	getline(cin, locationFound);
	animal->setLocationFound(locationFound);

	cout << "Input the animal's descrition: ";
	getline(cin, animalDescription);
	animal->setAnimalDescription(animalDescription);

	//Person class inputs
	cout << endl << "Input the pet owner's name: ";
	getline(cin, name);
	animal->setName(name);

	cout << "Input the pet owner's surname: ";
	getline(cin, surname);
	animal->setSurname(surname);

	cout << "Input the pet owner's phone numbers: ";
	getline(cin, phoneNumber);
	animal->setPhoneNumber(phoneNumber);

	cout << "Input the pet owner's email address: ";
	getline(cin, emailAddress);
	animal->setEmailAddress(emailAddress);

	cout << "Input the pet owner's descrition: ";
	getline(cin, personDescription);
	animal->setPersonDescription(personDescription);

	cout << "*****************************" << endl;
	
	animalV.push_back(animal);

	//animalCode = locationFound + "/" + species + "/" + breed; //+ "/" + animalcounter;
}

void initialAnimals() {
	/*Animals animal1;
	Animals animal2;
	Animals animal3;*/

	Animals* animal1 = new Animals();
	Animals* animal2 = new Animals();
	Animals* animal3 = new Animals();

	animal1->setSpecies("Dog");
	animal1->setBreed("Golden");
	animal1->setGender("Male");
	animal1->setAge("2 years old.");
	animal1->setLocationFound("Cankaya Uni");
	animal1->setAnimalDescription("The red collar");
	animal1->setName("Sezer");
	animal1->setSurname("Atas");
	animal1->setPhoneNumber("0534 11111");
	animal1->setEmailAddress("aaaaaa@gmail.com");
	animal1->setPersonDescription("inan bilmiyorum");

	animal2->setSpecies("Cat");
	animal2->setBreed("Tekir");
	animal2->setGender("Female");
	animal2->setAge("5 months old.");
	animal2->setLocationFound("Koru");
	animal2->setAnimalDescription("Blue eyes.");
	animal2->setName("Yusuf");
	animal2->setSurname("Ozcan");
	animal2->setPhoneNumber("0535 666666");
	animal2->setEmailAddress("yyyyyyy@gmail.com");
	animal2->setPersonDescription("inan simdi biliyorum");

	animalV.push_back(animal1);
	animalV.push_back(animal2);
	animalV.push_back(animal3);
}