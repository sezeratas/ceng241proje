#include <iostream>
#include "Animal.h"

using namespace std;

int main()
{
    Animals animal1;
    Animals animal2;

    animal1.setSpecies("Dog");
    animal1.setBreed("Golden");
    animal1.setGender("Male");
    animal1.setAge(2);
    animal1.setLocationFound("Cankaya Uni");
    animal1.setDescription("The red collar");
    animal1.setName("Sezer");
    animal1.setSurname("Atas");
    animal1.setPhoneNumber(111111);
    animal1.setEmailAddress("aaaaaa@gmail.com");
    animal1.setPersonDescription("-----");

    animal2.setSpecies("Cat");
    animal2.setBreed("Tekir");
    animal2.setGender("Female");
    animal2.setAge(2);
    animal2.setLocationFound("Koru");
    animal2.setDescription("-----");
    animal2.setName("-----");
    animal2.setSurname("-----");
    animal2.setPhoneNumber(0);
    animal2.setEmailAddress("-----");
    animal2.setPersonDescription("-----");

    animal1.showInfos();
    cout << endl;
    animal2.showInfos();

    return 0;
}