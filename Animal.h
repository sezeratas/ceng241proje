#pragma once

#include<iostream>
using namespace std;

class Person {
public:
    string name;
    string surname;
    long int phoneNumber;
    string emailAdress;
    string personDescription;
};

class Animals : public Person {

private:
    string species;
    string breed;
    string gender;
    int age;
    string locationFound;
    string description;

public:
    void showInfos();   // Hayvanın bütün bilgilerine anlık erişim.

    string getTur();
    void setTur(string a);

    string getCins();
    void setCins(string b);

    string getGender();
    void setGender(string c);

    int getAge();
    void setAge(int d);

    string getLocationFound();
    void setLocationFound(string e);

    string getDescription();
    void setDescription(string f);

    void addAdvertisement() {

    }
};