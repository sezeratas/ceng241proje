#include <iostream>
#include "Animal.h"
#include "mainFunc.h"
#include <string>

int main1() {

    return 0;
}

using namespace std;

int main()
{

    initialAnimals();

    showVectorInfos(&personV);

    //showInfos(animalV[0]);   //show infos fonksiyonuyla istediginiz bir ilanin guncel durumuna bakabilirsiniz.

    /*int mainchoice;
    do {
        mainScreen();
        cin >> mainchoice;

        switch (mainchoice) {

        case 1: {
            int firstchoice;
            bool returnToMainMenu = false;

            string user;
            cout << "Welcome to my advertisements." << endl;
            cout << "Please write your user id: ";
            cin >> user;
            idAuthentication(user);

            do {
                myAdvertisements();
                cin >> firstchoice;

                switch (firstchoice) {
                case 1:
                    AddAnotherAdvertisement("UsersLostAnimal");
                    break;
                case 2:
                    DeleteAdvertisement(personsAnimalV[0]->getId());
                    break;
                case 3:
                    EditAdvertisements();
                    break;
                case 4:
                    showVectorInfos(&personsAnimalV, "UsersLostAnimal");
                    break;
                case 5:
                    AddAnotherAdvertisement("PotentialLostAnimal");
                    break;
                case 6:
                    DeleteAdvertisement(personsAnimalV[0]->getId());
                    break;
                case 7:
                    EditAdvertisements();
                    break;
                case 8:
                    showVectorInfos(&personsAnimalV, "PotentialLostAnimal");
                    break;
                case 9:
                    returnToMainMenu = true;
                    // it will return to the main menu
                    break;
                default:
                    std::cout << "Invalid choice. Please choose 1-5." << endl;
                }
            } while (!returnToMainMenu);
            break;
        }
        case 2:
            showVectorInfos(&animalV);
            break;
        case 3:
            AddAdvertisementsWithStatus();
            break;
        case 4:
            return 1;
        default:
            cout << "Invalid choice.Please choose 1-6.";
        }

    } while (mainchoice != 6);*/

    return 0;
}