#pragma once

#include<iostream>
#include "Animal.h"

using namespace std;

void Hi()
{
    cout << "hello" << endl;
}

void showInfos(Animals animal) {
	cout << animal.getSpecies() << endl;
	cout << animal.getBreed() << endl;
	cout << animal.getGender() << endl;
	cout << animal.getAge() << endl;
	cout << animal.getLocationFound() << endl;
	cout << animal.getAnimalDescription() << endl;

	cout << animal.getName() << endl;
	cout << animal.getSurname() << endl;
	cout << animal.getPhoneNumber() << endl;
	cout << animal.getEmailAddress() << endl;
	cout << animal.getPersonDescription() << endl;
}

void AddAdvertisement(Animals* animal) {

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
	cin >> species;
	animal->setSpecies(species);

	cout << "Input the animal's breed: ";
	cin >> breed;
	animal->setBreed(breed);

	cout << "Input the animal's gender: ";
	cin >> gender;
	animal->setGender(gender);

	cout << "Input the animal's age: ";
	cin >> age;
	animal->setAge(age);

	cout << "Input the animal's location lost (or found): ";
	cin >> locationFound;
	animal->setLocationFound(locationFound);

	cout << "Input the animal's descrition: ";
	cin >> animalDescription;
	animal->setAnimalDescription(animalDescription);

	//Person class inputs
	cout << "Input the pet owner's name: ";
	cin >> name;
	animal->setName(name);

	cout << "Input the pet owner's surname: ";
	cin >> surname;
	animal->setSurname(surname);

	cout << "Input the pet owner's phone numbers: ";
	cin >> phoneNumber;
	animal->setPhoneNumber(phoneNumber);

	cout << "Input the pet owner's email address: ";
	cin >> emailAddress;
	animal->setEmailAddress(emailAddress);

	cout << "Input the pet owner's descrition: ";
	cin >> animalDescription;
	animal->setAnimalDescription(animalDescription);

	//animalCode = locationFound + "/" + species + "/" + breed; //+ "/" + animalcounter;
}

/*void initialAnimals() {
	Animals animal1;
	Animals animal2;
	Animals animal3;

	animal1.setSpecies("Dog");
	animal1.setBreed("Golden");
	animal1.setGender("Male");
	animal1.setAge("2 years old.");
	animal1.setLocationFound("Cankaya Uni");
	animal1.setAnimalDescription("The red collar");
	animal1.setName("Sezer");
	animal1.setSurname("Atas");
	animal1.setPhoneNumber("0534 11111");
	animal1.setEmailAddress("aaaaaa@gmail.com");

	animal2.setSpecies("Cat");
	animal2.setBreed("Tekir");
	animal2.setGender("Female");
	animal2.setAge("5 months old.");
	animal2.setLocationFound("Koru");
	animal2.setAnimalDescription("Blue eyes.");
	animal2.setName("Yusuf");
	animal2.setSurname("Ozcan");
	animal2.setPhoneNumber("0535 666666");
	animal2.setEmailAddress("yyyyyyy@gmail.com");
}*/