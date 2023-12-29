#pragma once

#include<iostream>
#include "Animal.h"
#include <vector>
#include <string>

vector<PersonsInfo*> personV;
vector<PersonsInfo*> personsAnimalV;

using namespace std;

//  Karisikligi onlemek ve okunabilirligi arttirmak icin.
void showInfos(PersonsInfo* person);
void AddAdvertisement(string animalStatus);
void AddAnotherAdvertisement(string animalStatus);
void DeleteAdvertisement(string userid);
void initialAnimals();
void mainScreen();
void idAuthentication(string user);
void myAdvertisements();
void showVectorInfos(vector<AnimalsInfo*>* pV, string animalStatus);
void DeleteAllAdvertisements();
void EditAdvertisements();
void AddAdvertisementsWithStatus();

void AddAdvertisementsWithStatus() {
	int chcnum;
	cout << "Which reports do you want to add: " << endl;
	cout << "1) My lost pet report." << endl;
	cout << "2) Potential lost pet report." << endl;
	cin >> chcnum;
	if (chcnum == 1) {
		AddAdvertisement("UsersLostAnimal");
	}
	else if (chcnum == 2) {
		AddAdvertisement("PotentialLostAnimal");
	}
}

void showInfos(PersonsInfo* person) {
	cout << "Animal's species: " << person->animal.getSpecies() << endl;
	cout << "Animal's breed: " << person->animal.getBreed() << endl;
	cout << "Animal's gender: " << person->animal.getGender() << endl;
	cout << "Animal's age: " << person->animal.getAge() << endl;
	cout << "Animal's location: " << person->animal.getLocationFound() << endl;
	cout << "Animal's description: " << person->animal.getAnimalDescription() << endl << endl;
	cout << "Animal's status: " << person->animal.getAnimalStatus() << endl << endl;

	cout << "Animal's owner's name: " << person->getName() << endl;
	cout << "Animal's owner's surname: " << person->getSurname() << endl;
	cout << "Animal's owner's phone number: " << person->getPhoneNumber() << endl;
	cout << "Animal's owner's email address: " << person->getEmailAddress() << endl;
	cout << "Animal's owner's description: " << person->getPersonDescription() << endl;
	cout << "***********************************" << endl << endl;
}

/*void AddAdvertisement(string animalStatus) {

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

	if (animalStatus == "UsersLostAnimal") {
		animal->setAnimalStatus("UsersLostAnimal");
	}
	else if (animalStatus == "PotentialLostAnimal") {
		animal->setAnimalStatus("PotentialLostAnimal");
	}

	cout << "*****************************" << endl;
	
	animalV.push_back(animal);
}
*/
/*void AddAnotherAdvertisement(string animalStatus) {

	string id = personsAnimalV[0]->getId();

	string name = personsAnimalV[0]->getName();
	string surname = personsAnimalV[0]->getSurname();
	string phoneNumber = personsAnimalV[0]->getPhoneNumber();
	string emailAddress = personsAnimalV[0]->getEmailAddress();
	string personDescription = personsAnimalV[0]->getPersonDescription();

	AnimalsInfo* animal = new AnimalsInfo(id, name, surname, phoneNumber, emailAddress, personDescription);

	personsAnimalV.erase(personsAnimalV.begin());

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

	if (animalStatus == "UsersLostAnimal") {
		animal->setAnimalStatus("UsersLostAnimal");
	}
	else if (animalStatus == "PotentialLostAnimal") {
		animal->setAnimalStatus("PotentialLostAnimal");
	}

	cout << "*****************************" << endl;

	animalV.push_back(animal);

	cout << "Your changes will save after logout." << endl << endl;
}*/

/*void DeleteAdvertisement(string userid) {
	idAuthentication(userid);
	int num;
	cout << "Input the item: ";
	cin >> num;
	delete personsAnimalV[num];
	personsAnimalV.erase(personsAnimalV.begin()+num);
	animalV.erase(animalV.begin() + (personsAnimalV[num]->getAnimalC()));
}*/

void initialAnimals() {

	PersonsInfo* person1 = new PersonsInfo();
	PersonsInfo* person2 = new PersonsInfo();
	PersonsInfo* person3 = new PersonsInfo();

	animal1->setSpecies("Dog");
	animal1->setBreed("Golden");
	animal1->setGender("Male");
	animal1->setAge("2 years old.");
	animal1->setLocationFound("Cankaya Uni");
	animal1->setAnimalDescription("The red collar");
	animal1->setAnimalStatus("UsersLostAnimal");
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
	animal2->setAnimalStatus("UsersLostAnimal");
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
	cout << "Stray Animals Platform" << endl;
	cout << "Please choose the operation:" << endl;
	cout << "1.My advertisements" << endl; // add add,delete add ,fix add 3 alt dal
	cout << "2.Show all advertisements." << endl;
	cout << "3.New user." << endl; // hayvan bildirme sebebi
	//cout << "4.Adopt an animal" << endl;    // sectýkten sonra barýnak ya da baþkasýndan diye iki secenek sunacak
	//cout << "5.Adopt my  animal." << endl;
	cout << "4.Exit" << endl;
}

void myAdvertisements() {
	cout << "Please choose the operation:" << endl;
	cout << "1.Add a user's lost pet reports." << endl;
	cout << "2.Delete a user's lost pet reports." << endl;
	cout << "3.Edit a user's lost pet reports." << endl;
	cout << "4.Show my lost animal reports." << endl << endl;
	cout << "5.Add a potantial lost pet reports." << endl;
	cout << "6.Delete a potential lost pet reports." << endl;
	cout << "7.Edit a potential lost pet reports." << endl;
	cout << "8.Show my potential lost pet reports." << endl;
	cout << "9.Return the main menu." << endl;
}

void idAuthentication(string user) {

	for (int i = 0; i < animalV.size(); i++) {
		if (user == animalV[i]->getId()) {
			personsAnimalV.push_back(animalV[i]);
		}
	}
}

void showVectorInfos(vector<AnimalsInfo*>* pV, string animalStatus) {
	for (int i = 0; i < pV->size(); i++) {
		if ((*pV)[i]->getAnimalStatus() == "UsersLostAnimal") {
			showInfos((*pV)[i]);
		}
		else if ((*pV)[i]->getAnimalStatus() == "PotentialLostAnimal") {
			showInfos((*pV)[i]);
		}	
	}
}
void showVectorInfos(vector<PersonsInfo*>* pV) {
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
	std::cout << "Select the information you want to change: " << endl;
	std::cout << "1) Animal's species " << endl;
	std::cout << "2) Animal's breed " << endl;
	std::cout << "3) Animal's gender " << endl;
	std::cout << "4) Animal's age " << endl;
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

/*void ShowAllAdvertisements() {
	for (int i = 0; i < animalV.size(); i++) {
		showInfos(animalV[i]);
	}
}*/