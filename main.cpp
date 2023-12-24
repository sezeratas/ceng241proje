#include <iostream>
#include "Animal.h"
#include "mainFunc.h"

using namespace std;

int main()
{
    AddAdvertisement();

    initialAnimals();

    AddAdvertisement();

    showInfos(animalV[0]);
    showInfos(animalV[1]);
    showInfos(animalV[2]);
    showInfos(animalV[3]);
    showInfos(animalV[4]);

    /*int mainchoice;
    do {
        cout << "Stray Animals Platform" << endl;
        cout << "Please choose the operation:" << endl;
        cout << "1.My advertisements" << endl; // add add,delete add ,fix add 3 alt dal
        cout << "2.Show all advertisements." << endl;
        cout << "3.Report an animal." << endl; // hayvan bildirme sebebi
        cout << "4.Adopt an animal" << endl;    // sectýkten sonra barýnak ya da baþkasýndan diye iki secenek sunacak
        cout << "5.Adopt my  animal." << endl;
        cout << "6.Exit" << endl;
        cin >> mainchoice;

        switch (mainchoice) {
        case 1: {
            int firstchoice;
            bool returnToMainMenu = false;
            do {
                cout << "Welcome to my advertisements." << endl;
                cout << "Please choose the operation:" << endl;
                cout << "1.Add an advertisement." << endl;
                cout << "2.Delete an advertisement." << endl;
                cout << "3.Edit an advertisement." << endl;
                cout << "4.Show my advertisements." << endl;
                cout << "5.Return the main menu." << endl;
                cin >> firstchoice;

                switch (firstchoice) {
                case 1:
                    // addadvertisement();
                    break;
                case 2:
                    // deleteadd();
                    break;
                case 3:
                    // editadd();
                    break;
                case 4:
                    // showmyadds();
                    break;
                case 5:
                    returnToMainMenu = true;
                    // it will return to the main menu
                    break;
                default:
                    cout << "Invalid choice. Please choose 1-5." << endl;
                }
            } while (!returnToMainMenu);
            break;
        }
        case 2:
            // showallads(); tüm ilanlarý göstermek için
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

    } while (mainchoice != 6);*/
    return 0;
}