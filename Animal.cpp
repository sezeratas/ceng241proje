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
    string surname;  // E�er soyad� gerekmiyorsa, bu de�i�keni kald�rabilirsin.
    long int phoneNumber;
    string emailAddress;  // De�i�ken ad�n� d�zelttim: emailAdress -> emailAddress
    string personDescription;
    string tur;
    string cins;
    string gender;
    int age;
    string locationFound;
    string description;

    cout << "Ilan sahibinin ismi: " << endl;
    cin >> name;

    // Animals nesnesine eri�im sa�lamak i�in bir nesne olu�turmal�s�n.
    // Bu �rnekte, Animals bir s�n�f gibi kullan�ld��� varsay�lm��t�r.
    // E�er Animals bir s�n�fsa, bu s�n�f�n bir nesnesini olu�turmal�s�n.
    // �rne�in, Animals s�n�f�n�n bir nesnesi olu�turuldu varsay�larak a�a��daki gibi devam edebilirsin:

    // Animals animalsObject;  // Animals s�n�f�n�n bir nesnesi olu�turuldu varsayal�m.
    // animalsObject.setName(name);

    // E�er Animals bir s�n�f de�ilse ve setName fonksiyonu global bir fonksiyon ise,
    // do�rudan bu �ekilde �a�rabilirsin:

    // setName(name);

    // E�er Animals s�n�f� global bir de�i�ken ise, a�a��daki gibi eri�ebilirsin:

    // Animals.setName(name);
}
