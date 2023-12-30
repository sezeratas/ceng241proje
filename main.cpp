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
    
//fonk bası

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
            // reportanimal(); hayvan�n �zellikleri ve bildirilme sebebi i�in
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