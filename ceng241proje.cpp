#include <iostream>
#include "Animal.h"

using namespace std;

int main()
{
    Animals animal1;

    animal1.setTur("Dog");
    animal1.setCins("Golden");
    animal1.setGender("Male");
    animal1.setAge(2);
    animal1.setLocationFound("Cankaya Uni");
    animal1.setDescription("The red collar");

    animal1.showInfos();
    return 0;
}