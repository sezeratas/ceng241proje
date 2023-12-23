#include <iostream>
#include "Animal.h"
#include "mainFuncHeader.h"

using namespace std;

int main()
{
    Animals animal1;
    Animals animal2;

    Hi();

    animal1.setSpecies("Dog");
    animal1.setBreed("Golden");
    animal1.setGender("Male");
    animal1.setAge(2);
    animal1.setLocationFound("Cankaya Uni");
    animal1.setDescription("The red collar");
    animal1.setName("Sezer");
    animal1.setSurname("Atas");
    animal1.setPhoneNumber("0534 11111");
    animal1.setEmailAddress("aaaaaa@gmail.com");
    animal1.setPersonDescription("-----");

    animal2.setSpecies("Cat");
    animal2.setBreed("Tekir");
    animal2.setGender("Female");
    animal2.setAge(2);
    animal2.setLocationFound("Koru");
    animal2.setDescription("Blue eyes.");
    animal2.setName("Yusuf");
    animal2.setSurname("Ozcan");
    animal2.setPhoneNumber("0535 666666");
    animal2.setEmailAddress("yyyyyyy@gmail.com");
    animal2.setPersonDescription("-----");

    animal1.showInfos();
    cout << endl;
    animal2.showInfos();

    return 0;
}