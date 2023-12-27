#pragma once

#include<iostream>
#include<vector>
using namespace std;

// Person class is a subclass of Animal class.
class Person {
protected:
    string id;
    string name;
    string surname;
    string phoneNumber;
    string emailAddress;
    string personDescription;

public:
    //Constructor and Destructor
    Person();
    Person(string id, string name, string surname, string phoneNumber, string emailAddress, string personDescription);
    ~Person();
};

class Animals : private Person {

private:
    string species;
    string breed;
    string gender;
    string age;
    string locationFound;
    string animalDescription;
    //string animalCode;
public:

    //Constructor and Destructor
    Animals();
    Animals(string, string, string, string, string, string);  // Constructor overloading for person's multiple pet.
    ~Animals();

    // Encapsulation for Animal class
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
}; Animal.h