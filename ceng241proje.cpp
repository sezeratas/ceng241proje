#include <iostream>
#include "Animal.h"

using namespace std;

int main()
{
    Animals animal1;
    Animals animal2;

    animal1.setTur("Dog");
    animal1.setCins("Golden");
    animal1.setGender("Male");
    animal1.setAge(2);
    animal1.setLocationFound("Cankaya Uni");
    animal1.setDescription("The red collar");
    animal1.name = "Sezer";
    animal1.surname = "Atas";
    animal1.phoneNumber = 111111;
    animal1.emailAdress = "aaaaaa@gmail.com";
    animal1.personDescription = "-----";

    animal2.setTur("Cat");
    animal2.setCins("Tekir");
    animal2.setGender("Female");
    animal2.setAge(2);
    animal2.setLocationFound("Koru");
    animal2.setDescription("-----");
    animal2.name = "-----";
    animal2.surname = "-----";
    animal2.phoneNumber = 0;
    animal2.emailAdress = "-----";
    animal2.personDescription = "-----";

    animal1.showInfos();
    cout << endl;
    animal2.showInfos();

    return 0;
}