#include <iostream>
#include "Animal.h"
#include "mainFunc.h"

using namespace std;

int main()
{

    initialAnimals();

    showVectorInfos(&personsAnimalV);

    //showInfos(animalV[0]);   //show infos fonksiyonuyla istediginiz bir ilanin guncel durumuna bakabilirsiniz.

    int mainchoice;
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
                    AddAnotherAdvertisement();
                    break;
                case 2:
                    DeleteAdvertisement(personsAnimalV[0]->getId());
                    break;
                case 3:
                    EditAdvertisements();
                    break;
                case 4:
                    showVectorInfos(&personsAnimalV);
                    break;
                case 5:
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
            // reportanimal(); hayvanýn özellikleri ve bildirilme sebebi için
            break;
        case 4: {
            int fourthchoice;
            bool returnToMainMenu = false;
            do {
                cout << "Choose one to adopt." << endl;
                cout << "1.Pet shelter." << endl;
                cout << "2.Someone else." << endl;
                cout << "3.Return the main menu." << endl;
                cin >> fourthchoice;

                switch (fourthchoice) {
                case 1:
                    // fromshelter();
                    break;
                case 2:
                    // fromsomeone();
                    break;
                case 3:
                    returnToMainMenu = true;
                    // it will return to the main menu
                    break;
                default:
                    cout << "Invalid choice. Please choose 1-3." << endl;
                }
            } while (!returnToMainMenu);
                break;
        }
        case 5:
            // adoptmyanimal();
            break;
        case 6:
            return 1;
        default:
            cout << "Invalid choice.Please choose 1-6.";
        }

    } while (mainchoice != 6);

    return 0;
}