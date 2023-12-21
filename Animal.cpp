#include "Animal.h"

void Animals::showInfos() {
	cout << Animals::species << endl;
	cout << Animals::breed << endl;
	cout << Animals::gender << endl;
	cout << Animals::age << endl;
	cout << Animals::locationFound << endl;
	cout << Animals::description << endl;
	cout << Animals::name << endl;
	cout << Animals::surname << endl;
	cout << Animals::phoneNumber << endl;
	cout << Animals::emailAdress << endl;
	cout << Animals::personDescription << endl;
}

string Animals::getTur() {
	return species;
}
void Animals::setTur(string a) {
	species = a;
}

string Animals::getCins() {
	return breed;
}
void Animals::setCins(string b) {
	breed = b;
}

string Animals::getGender() {
	return gender;
}
void Animals::setGender(string c) {
	gender = c;
}

int Animals::getAge() {
	return age;
}
void Animals::setAge(int d) {
	age = d;
}

string Animals::getLocationFound() {
	return locationFound;
}
void Animals::setLocationFound(string e) {
	locationFound = e;
}

string Animals::getDescription() {
	return description;
}
void Animals::setDescription(string f) {
	description = f;
}
void addAdvertisement() {
    // local degiskenler, sadece bu fonksiyon icinde kullanilip siliniyor.
    string name;
    string surname;  // Eðer soyadý gerekmiyorsa, bu deðiþkeni kaldýrabilirsin.
    long int phoneNumber;
    string emailAddress;  // Deðiþken adýný düzelttim: emailAdress -> emailAddress
    string personDescription;
    string tur;
    string cins;
    string gender;
    int age;
    string locationFound;
    string description;

    cout << "Ilan sahibinin ismi: " << endl;
    cin >> name;

    // Animals nesnesine eriþim saðlamak için bir nesne oluþturmalýsýn.
    // Bu örnekte, Animals bir sýnýf gibi kullanýldýðý varsayýlmýþtýr.
    // Eðer Animals bir sýnýfsa, bu sýnýfýn bir nesnesini oluþturmalýsýn.
    // Örneðin, Animals sýnýfýnýn bir nesnesi oluþturuldu varsayýlarak aþaðýdaki gibi devam edebilirsin:

    // Animals animalsObject;  // Animals sýnýfýnýn bir nesnesi oluþturuldu varsayalým.
    // animalsObject.setName(name);

    // Eðer Animals bir sýnýf deðilse ve setName fonksiyonu global bir fonksiyon ise,
    // doðrudan bu þekilde çaðrabilirsin:

    // setName(name);

    // Eðer Animals sýnýfý global bir deðiþken ise, aþaðýdaki gibi eriþebilirsin:

    // Animals.setName(name);
}
