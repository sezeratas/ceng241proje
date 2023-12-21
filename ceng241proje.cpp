#include <iostream>
#include "Animal.h"

using namespace std;

int main()
{
   Animals animal1;
   Animals animal2;
   int mainchoice;
   do {
       cout << "Stray Animals Platform" << endl;
       cout << "Please choose the operation:" << endl;
       cout << "1.My advertisements" << endl;// add add,delete add ,fix add 3 alt dal
       cout << "2.Show all advertisements." << endl;
       cout << "3.Report an animal." << endl; // hayvan bildirme sebebi
       cout << "4.Adopt an animal" << endl;// sectýkten sonra barýnak ya da baþkasýndan diye iki secenek sunacak
       cout << "5.Adopt my  animal." << endl;
       cout << "6.Exit" << endl;
       cin >> mainchoice;
       if (mainchoice == 1) {
                  int firstchoice;
                  cout << "Welcome to my advertisements." << endl;
                  cout << "Please choose the operation:" << endl;
                  cout << "1.Add an advertisement." << endl;
                  cout << "2.Delete an advertisement." << endl;
                  cout << "3.Edit an advertisement." << endl;
                  cout << "4.Show my advertisements." << endl;
                  cout << "5.Return the main menu." << endl;
                  cin >> firstchoice;
                  //showmyads();
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
                         //it will return to the main menu
                         break;
                     default:
                         cout << "Invalid choice. Please choose 1-5." << endl;
                 }
              }
              else if (mainchoice == 2) {

                  //showallads();tüm ilanlarý göstermek için
              }
              else if (mainchoice == 3) {
                  //reportanimal(); hayvanýn özellikleri ve bildirilme sebebi için
              }
              else if (mainchoice == 4) {
                   int fourthchoice;
                   cout << "Choose one to adopt." << endl;
                   cout << "1.Pet shelter." << endl;
                   cout << "2.Someone else." << endl;
                   cout << "3.Return the main menu." << endl;
                   cin >> fourthchoice;
                  //adoptanimal();
                   switch (fourthchoice) {
                     case 1:
                         //fromshelter();
                         break;
                     case 2:
                         //fromsomeone();
                         break;
                     case 3:
                         //it will return to the main menu
                     default:
                         cout << "Invalid choice. Please choose 1-3." << endl;
                   }
              }
              else if (mainchoice == 5) {
                  //adoptmyanimal();
              }
              else if (mainchoice == 6) {
                  return 1;
              }
              else {
           cout << "Invalid choice.Please choose 1-6.";
              }
              
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
   } while (mainchoice != 6);
    return 0;
}