#pragma once

#include<iostream>
#include<vector>
using namespace std;

int sqlf(string s1);

// Person class is a subclass of Animal class.
class PersonsInfo {
protected:
    string id;
    string name;
    string surname;
    string phoneNumber;
    string emailAddress;
    string personDescription;

public:
    string species;
    string breed;
    string gender;
    string age;
    string locationFound;
    string animalDescription;

    string animalStatus;

    int animalC;
//public:

    //Constructor and Destructor
    AnimalsInfo();
    //AnimalsInfo(string, string, string, string, string, string);  // Constructor overloading for person's multiple pet.
    ~AnimalsInfo();

    // Encapsulation for Animal class
    int getAnimalC();
    //void setAnimalC(string animalnumber);

    string getSpecies();
    void setSpecies(string species);

    string getBreed();
    void setBreed(string breed);

    string getGender();
    void setGender(string gender);

    string getAge();
    void setAge(string page);

    string getLocationFound();
    void setLocationFound(string locationfound);

    string getAnimalDescription();
    void setAnimalDescription(string animalDescription);

    string getAnimalStatus();
    void setAnimalStatus(string animalStatus);
};

class PersonsInfo {
protected:
    string id;
    string name;
    string surname;
    string phoneNumber;
    string emailAddress;
    string personDescription;

public:

    vector<AnimalsInfo*> personsAnimalV;

    
    //Constructor and Destructor
    PersonsInfo();
    PersonsInfo(string id, string name, string surname, string phoneNumber, string emailAddress, string personDescription);
    ~PersonsInfo();

    // Encapsulation for Person class

    string getId();
    //void setId(int idNumber);

    string getName();
    void setName(string name);

    string getSurname();
    void setSurname(string surname);

    string getPhoneNumber();
    void setPhoneNumber(string phoneNumber);

    string getEmailAddress();
    void setEmailAddress(string emailAddress);

    string getPersonDescription();
    void setPersonDescription(string personDescription);
};