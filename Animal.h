#pragma once

#include<iostream>
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
    ~Person();
};

class Animals : private Person {

private:
    string species;
    string breed;
    string gender;
    int age;
    string locationFound;
    string description;

    string animalCode;
public:

    //Constructor and Destructor
    Animals();
    ~Animals();

    void showInfos();   // Hayvanın bütün bilgilerine anlık erişim.

    // Encapsulation for Animal class
    string getSpecies();
    void setSpecies(string species);

    string getBreed();
    void setBreed(string breed);

    string getGender();
    void setGender(string gender);

    int getAge();
    void setAge(int page);

    string getLocationFound();
    void setLocationFound(string locationfound);

    string getDescription();
    void setDescription(string description);

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