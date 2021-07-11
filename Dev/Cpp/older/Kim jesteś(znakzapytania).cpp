#include <iostream>
#include <string>
using namespace std;
int main()
{
    string Film_postac[5]={"Sarlacciem", "Albusem_Dumbledorem", "Sokka", "Voldemortem", "Leia"};
    string Zwierze[5]={"Gorylem", "Smokiem", "Suhakiem_Stepowym", "Leniwcem", "Tchorzem"};

    short postac_uzytkownika;
    short zwierze_uzytkownika;

    cout << "Wybierz postac z filmu (od 1 do 5) : ";
    cin >> postac_uzytkownika;

    cout << "Wybierz zwierze (od 1 do 5) : ";
    cin >> zwierze_uzytkownika;

    postac_uzytkownika--;
    zwierze_uzytkownika--;

    cout << "Jestes " << Film_postac[postac_uzytkownika] << ", a jako zwierze jestes " << Zwierze[zwierze_uzytkownika] << "." << endl;

    return 0;
}
