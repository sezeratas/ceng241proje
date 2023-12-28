#pragma once

#include<iostream>
#include "Animal.h"
#include <vector>
#include <string>

vector<AnimalsInfo*> animalV;
vector<AnimalsInfo*> personsAnimalV;

using namespace std;

//  Karisikligi onlemek ve okunabilirligi arttirmak icin.
void showInfos(AnimalsInfo* animal);
void AddAdvertisement();
void AddAnotherAdvertisement();
void DeleteAdvertisement(string userid);
void initialAnimals();
void mainScreen();
void idAuthentication(string user);
void myAdvertisements();
void showVectorInfos(vector<AnimalsInfo*>* pV);
void DeleteAllAdvertisements();
void EditAdvertisements();
void reportanimal();
void showInfos(AnimalsInfo* animal) {
	cout << "\033[1;34mAnimal's species: " << animal->getSpecies() << endl;
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

	AnimalsInfo* animal = new AnimalsInfo();

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
	getline(cin, breed);
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

void AddAnotherAdvertisement() {

	string id = personsAnimalV[0]->getId();

	string name = personsAnimalV[0]->getName();
	string surname = personsAnimalV[0]->getSurname();
	string phoneNumber = personsAnimalV[0]->getPhoneNumber();
	string emailAddress = personsAnimalV[0]->getEmailAddress();
	string personDescription = personsAnimalV[0]->getPersonDescription();

	AnimalsInfo* animal = new AnimalsInfo(id, name, surname, phoneNumber, emailAddress, personDescription);

	//  Local variable to input
	string species;
	string breed;
	string gender;
	string age;
	string locationFound;
	string animalDescription;

	//Animal class inputs
	cout << "Input the animal's species: ";
	getline(cin, species);
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	animal->setSpecies(species);

	cout << "Input the animal's breed: ";
	getline(cin, breed);
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
	animal->setName(name);

	animal->setSurname(surname);

	animal->setPhoneNumber(phoneNumber);

	animal->setEmailAddress(emailAddress);

	animal->setPersonDescription(personDescription);

	cout << "*****************************" << endl;

	animalV.push_back(animal);

	cout << "Your changes will save after logout." << endl << endl;

	//animalCode = locationFound + "/" + species + "/" + breed; //+ "/" + animalcounter;
}

void DeleteAdvertisement(string userid) {
	idAuthentication(userid);
	for (int i = 0; i < personsAnimalV.size(); i++) {
		delete personsAnimalV[i];
	}
	personsAnimalV.clear();
}

void initialAnimals() {

	AnimalsInfo* animal1 = new AnimalsInfo();
	AnimalsInfo* animal2 = new AnimalsInfo();
	AnimalsInfo* animal3 = new AnimalsInfo();

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

void mainScreen() {
	cout << "\033[1;33mStray Animals Platform" << endl;
	cout << "Please choose the operation:" << endl;
	cout << "1.My advertisements" << endl; // add add,delete add ,fix add 3 alt dal
	cout << "2.Show all advertisements." << endl;
	cout << "3.Report an animal." << endl; // hayvan bildirme sebebi
	cout << "4.Adopt an animal" << endl;    // sect?kten sonra bar?nak ya da ba?kas?ndan diye iki secenek sunacak
	cout << "5.Adopt my  animal." << endl;
	cout << "6.Exit" << endl;
}

void idAuthentication(string user) {

	for (int i = 0; i < animalV.size(); i++) {
		if (user == animalV[i]->getId()) {
			personsAnimalV.push_back(animalV[i]);
		}
	}
}

void myAdvertisements() {
	cout << "\033[1;34mPlease choose the operation:" << endl;
	cout << "1.Add an advertisement." << endl;
	cout << "2.Delete an advertisement." << endl;
	cout << "3.Edit an advertisement." << endl;
	cout << "4.Show my advertisements." << endl;
	cout << "5.Return the main menu." << endl;
}

void showVectorInfos(vector<AnimalsInfo*>* pV) {
	for (int i = 0; i < pV->size(); i++) {
		showInfos((*pV)[i]);
	}
}

void DeleteAllAdvertisements() {
	for (int i = 0; i < animalV.size(); i++) {
		delete animalV[i];
	}
	animalV.clear();
	personsAnimalV.clear();
}

void EditAdvertisements() {
	int choice;
	cout << "Select the information you want to change: " << endl;
	cout << "1) Animal's species " << endl;
	cout << "2) Animal's breed " << endl;
	cout << "3) Animal's gender " << endl;
	cout << "4) Animal's age " << endl;
	cout << "5) Animal's location found" << endl;
	cout << "6) Animal's description " << endl << endl;

	cout << "7) Animal's owner's name " << endl;
	cout << "8) Animal's owner's surname " << endl;
	cout << "9) Animal's owner's phone number " << endl;
	cout << "10) Animal's owner's email address " << endl;
	cout << "11) Animal's owner's description " << endl;
	cin >> choice;
	switch (choice) {
	case 1:
	{
		string species;
		cout << "Input the new species: ";
		cin >> species;
		personsAnimalV[0]->setSpecies(species);
		break;
	}
	case 2:
	{
		string breed;
		cout << "Input the new breed: ";
		cin >> breed;
		personsAnimalV[0]->setBreed(breed);
		break;
	}
	case 3:
	{
		string gender;
		cout << "Input the new gender: ";
		cin >> gender;
		personsAnimalV[0]->setGender(gender);
		break;
	}
	case 4:
	{
		string age;
		cout << "Input the new age: ";
		cin >> age;
		personsAnimalV[0]->setAge(age);
		break;
	}
	case 5:
	{
		string location;
		cout << "Input the new location: ";
		cin >> location;
		personsAnimalV[0]->setLocationFound(location);
		break;
	}
	case 6:
	{
		string description;
		cout << "Input the new description: ";
		cin >> description;
		personsAnimalV[0]->setAnimalDescription(description);
		break;
	}
	case 7:
	{
		string name;
		cout << "Input the new name: ";
		cin >> name;
		personsAnimalV[0]->setName(name);
		break;
	}
	case 8:
	{
		string surname;
		cout << "Input the new surname: ";
		cin >> surname;
		personsAnimalV[0]->setSurname(surname);
		break;
	}
	case 9:
	{
		string phonenumber;
		cout << "Input the new phone number: ";
		cin >> phonenumber;
		personsAnimalV[0]->setPhoneNumber(phonenumber);
		break;
	}
	case 10:
	{
		string emailaddress;
		cout << "Input the new email address: ";
		cin >> emailaddress;
		personsAnimalV[0]->setEmailAddress(emailaddress);
		break;
	}
	case 11:
	{
		string persondescription;
		cout << "Input the new person description: ";
		cin >> persondescription;
		personsAnimalV[0]->setPersonDescription(persondescription);
		break;
	}

	}
}
void adoptmyanimal() {
	AnimalsInfo* animal = new AnimalsInfo();

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
	cout << "\033[1;34mMy animal's species: " << endl;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	getline(cin, species);
	animal->setSpecies(species);

	cout << "My animal's breed: " << endl;
	getline(cin, breed);
	animal->setBreed(breed);

	cout << "My animal's gender: " << endl;
	getline(cin, gender);
	animal->setGender(gender);

	cout << "My animal's age:" << endl;
	getline(cin, age);
	animal->setAge(age);

	cout << "My animal's location: " << endl;
	getline(cin, locationFound);
	animal->setLocationFound(locationFound);

	cout << "My animal's description and reason why I want adopt my animal: " << endl;
	getline(cin, animalDescription);
	animal->setAnimalDescription(animalDescription);

	//Person class inputs
	cout << endl << "My name: ";
	getline(cin, name);
	animal->setName(name);

	cout << "My surname: ";
	getline(cin, surname);
	animal->setSurname(surname);

	cout << "My phone number: ";
	getline(cin, phoneNumber);
	animal->setPhoneNumber(phoneNumber);

	cout << "My email address: ";
	getline(cin, emailAddress);
	animal->setEmailAddress(emailAddress);

	cout << "My description: ";
	getline(cin, personDescription);
	animal->setPersonDescription(personDescription);
	cout << "*****************************" << endl;

	animalV.push_back(animal);

	//animalCode = locationFound + "/" + species + "/" + breed; //+ "/" + animalcounter;
}
void reportanimal() {
	int sidechoice;
	cout << "\033[1;34m=============================\n";
	cout << "Welcome, please choose reason to report: " << endl;
	cout << "1. I found a lost animal." << endl;
	cout << "2. There is an animal here that needs help." << endl;
	cout << "3. Return to the main menu" << endl;
	cout << "=============================\n";
	cin >> sidechoice;
	bool returnToMainMenu = false;
	do {
		switch (sidechoice) {
		case 1: {
			AnimalsInfo* animal = new AnimalsInfo();
			string species;
			string breed;
			string gender;
			string age;
			string locationFound;
			string animalDescription;

			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // cin.ignore ekledim

			cout << "Input the animal's species: ";
			getline(cin, species);
			animal->setSpecies(species);

			cout << "Input the animal's breed: ";
			getline(cin, breed);
			animal->setBreed(breed);

			cout << "Input the animal's gender: ";
			getline(cin, gender);
			animal->setGender(gender);

			cout << "Input the animal's age if you know: ";
			getline(cin, age);
			animal->setAge(age);

			cout << "Input the animal's found location: ";
			getline(cin, locationFound);
			animal->setLocationFound(locationFound);

			cout << "Input the animal's description: ";
			getline(cin, animalDescription);
			animal->setAnimalDescription(animalDescription);

			/* eðer hayvan varsa ilanlarda ilan sahibine haber veriliyor, eðer o hayvan ilanlarda yoksa böyle bir hayvan bulunamadý uyarýsý veriyor
			þeklinde devam etmeli.*/
			cout << "=============================\n";
			returnToMainMenu = true;
			break;
		}
		case 2: {
			int sidesidechoice;
			cout << "=============================\n";
			cout << "Welcome, please choose one of them : " << endl;
			cout << "1. Emergency situation." << endl;
			cout << "2. Minor injury or sickness." << endl;
			cout << "=============================\n";
			cin >> sidesidechoice;
			if (sidesidechoice == 1) {
				cout << "First of all, stay calm. Assess the animal's condition and call a veterinarian immediately if injured. If the animal is still alive, move it to a safe place." << endl;
				cout << "To assess the animal's condition, first look to see if it is moving. If it moves, check for injuries. If it is not moving, check its pulse and call a veterinarian immediately." << endl;
				cout << "=============================\n";
				returnToMainMenu = true;
			}
			else if (sidesidechoice == 2) {
				cout << "You can take the animal to a veterinarian or notify the municipality." << " \033[1;31mNever try to administer medication on your own:\033[0m." << endl;
				cout << "=============================\n";
				returnToMainMenu = true;
			}
			break;
		}
		case 3:
			returnToMainMenu = true;
			break;
		}
	} while (!returnToMainMenu);
}
