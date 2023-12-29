#include <iostream>
#include "Animal.h"
#include "mainFunc.h"
#include <pqxx/pqxx>
//#include <string>


using namespace std;
using namespace pqxx;


int main()
{
    char* sql;

    try {
        //connection c("dbname = ceng241pdb user = postgres password = postgre hostaddr = 127.0.0.1 port = 5432");
        pqxx::connection c("user=postgres password=postgre host=127.0.0.1 port=5432 dbname=ceng241pdb target_session_attrs=read-write");
        //connection c("user=postgres password=postgre host=127.0.0.1 port=5432 dbname=ceng241pdb target_session_attrs=read-write");

        //pqxx::connection c("user=postgres password=postgre port=5432 dbname=ceng241pdb target_session_attrs=read-write");

        if (c.is_open()) {
            cout << "Opened database successfully: " << C.dbname() << endl;
        }
        else {
            cout << "Can't open database" << endl;
            return 1;
        }
        //Create SQL statement
        sql = "insert into person (id,name,surname) values(2,'berk','memis');";

        //Create a transactional object.
        work W(c);

        //Execute SQL query
        W.exec(sql);
        W.commit();
        cout << "Records created successfully" << endl;
        c.disconnect();
    }
    catch (const std::exception& e) {
        cerr << e.what() << std::endl;
        return 1;
    }

    
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
                    AddAnotherAdvertisement("UsersLostAnimal");
                    break;
                case 2:
                    DeleteAdvertisement(personsAnimalV[0]->getId());
                    break;
                case 3:
                    EditAdvertisements();
                    break;
                case 4:
                    showVectorInfos(&personsAnimalV,"UsersLostAnimal");
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

    } while (mainchoice != 6);

    return 0;
}