#include <iostream>
#include "classes.h"
#include "mainFunc.h"
#include <windows.h>
#include <sql.h>
#include <sqlext.h>
#include <stdio.h>
#include <conio.h>
#include <tchar.h>
#include <stdlib.h>
#include <sal.h>

int main1() {

    return 0;
}


SQLRETURN retCode = 0;
SQLHANDLE SQLStatementHandle = NULL;
HENV henv = NULL;
HDBC hdbc = NULL;

int sqlf(string s1) { //sql query input as string
    WCHAR wszInput[1000];

    std::wstring wstr = L"s1";

    retCode = SQLExecDirect(SQLStatementHandle, (SQLWCHAR*)wstr.c_str(), SQL_NTS);

    if (retCode == SQL_SUCCESS || retCode == SQL_SUCCESS_WITH_INFO)
        cout << "SUCCESS";
    else
        cout << "FAILURE";


    SQLFreeHandle(SQL_HANDLE_STMT, SQLStatementHandle);

    return (0);
}
int main()
{   

    retCode = SQLAllocHandle(SQL_HANDLE_ENV, NULL, &henv);

    retCode = SQLSetEnvAttr(henv, SQL_ATTR_ODBC_VERSION,
        (void*)SQL_OV_ODBC3, 0);

    retCode = SQLAllocHandle(SQL_HANDLE_DBC, henv, &hdbc);
    std::wstring odbcname = L"DSN=dbtest1;";

    retCode = SQLDriverConnect(hdbc,
        GetDesktopWindow(),
        (SQLWCHAR*)odbcname.c_str(),
        SQL_NTS,
        NULL,
        0,
        NULL,
        SQL_DRIVER_COMPLETE);

    retCode = SQLAllocHandle(SQL_HANDLE_STMT, hdbc, &SQLStatementHandle);
    
//fonk basý

    WCHAR wszInput[1000];

    std::wstring wstr = L"insert into person values (99,'abi');";

    retCode = SQLExecDirect(SQLStatementHandle, (SQLWCHAR*)wstr.c_str(), SQL_NTS);

   if (retCode == SQL_SUCCESS || retCode == SQL_SUCCESS_WITH_INFO)
       cout << "SUCCESS";
   else
       cout << "FAILURE";


    SQLFreeHandle(SQL_HANDLE_STMT, SQLStatementHandle);

//fonk sonu

    SQLDisconnect(hdbc);

    SQLFreeHandle(SQL_HANDLE_DBC, hdbc);

    SQLFreeHandle(SQL_HANDLE_ENV, henv);

    //main
    
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