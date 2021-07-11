#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
int main()
{
    bool sposob;      //sposob, jakim bedzie wszystko obliczane
    bool calkowitosc_wyniku; //wynik calkowity albo nie

    cout << "                                !!!WITAJ W GENERATORZE PSEUDOLOSOWYM!!!" << endl; //powitanie

    cout << "Wybierz sposob losowania (0 lub 1) : ";  //poczatek pytan wstepnych
    cin >> sposob;
    if (sposob==1)    //pierwszy sposob
    {
        cout << "Wynik calkowity czy nie? (0-nie, 1-tak) : ";
        cin >> calkowitosc_wyniku;                             //koniec pytan wstepnych


        int i, j, maks;   //i-zmienna 1, j-zmienna 2, maks-wartosc maksymalna

        cout << "Podaj liczbe modyfikujaca : ";  //poczatek zadawania pytan
        cin >> i;

        cout << "Podaj druga liczbe modyfikujaca : ";
        cin >> j;

        cout << "Podaj liczbe maksymalna : ";
        cin >> maks;                           //koniec zadawania pytan

        if (calkowitosc_wyniku==1)                     //wynik calkowity
        {
            int los=(pow(i,j))/(maks+i);           //wynik(liczba mozliwych kombinacji modyfikacji (nie wynikow)--4294967297 (liczba mozliwosci int)*4294967296 (maks+i nierowne 0, wiec wszystkie mozliwosci jednej zmiennej-1)*4294967297=‬‬18446744082299486209*4294967296=79228162551157825745258020864‬)

            if (los>maks)                         //gdyby wynik bylby wiekszy od wartosci maksymalnej
            {
                los=maks;
                cout << los << endl;
            }

            else                                   //wynik nie wykracza poza zakres
            {
                los=(pow(i,j)/(maks+i));
                cout << los << endl;
            }
        }
        if (calkowitosc_wyniku==0)
        {
            float los=(pow(i,j))/(maks+i);           //wynik(liczba mozliwych kombinacji modyfikacji (nie wynikow)--4294967297 (liczba mozliwosci int)*4294967296 (maks+i nierowne 0, wiec wszystkie mozliwosci jednej zmiennej-1)*4294967297=‬‬18446744082299486209*4294967296=79228162551157825745258020864‬)

            if (los>maks)                         //gdyby wynik bylby wiekszy od wartosci maksymalnej
            {
                los=maks;
                cout << "Liczba wylosowana : " << los << endl;
            }

            else                                   //wynik nie wykracza poza zakres
            {
                los=(pow(i,j)/(maks+i));
                cout << "Liczba wylosowana : " << los << endl;
            }
        }
    }
    if (sposob==0)
    {
        cout << "Wynik calkowity czy nie? (0-nie, 1-tak)";
        cin >> calkowitosc_wyniku;                             //koniec pytan wstepnych


        int i, j, k, maks;   //i-zmienna 1, j-zmienna 2, k-zmienna 3, maks-wartosc maksymalna

        cout << "Podaj liczbe modyfikujaca : ";  //poczatek zadawania pytan
        cin >> i;

        cout << "Podaj druga liczbe modyfikujaca : ";
        cin >> j;

        cout << "Podaj trzecia liczbe modyfikujaca : ";
        cin >> k;

        cout << "Podaj liczbe maksymalna : ";
        cin >> maks;                           //koniec zadawania pytan
        if (calkowitosc_wyniku==1)                     //wynik calkowity
        {
            int los=(i*(j-k))/((1/maks)+i);           //wynik(liczba mozliwych kombinacji modyfikacji (nie wynikow)--4294967297 (liczba mozliwosci int)*4294967296 (maks nierowne 0, wiec wszystkie mozliwosci jednej zmiennej-1)*4294967297*4294967297=‬‬79228162569604569827557507073*4294967296(dalej kalkulator nie mogl obliczyc))

            if (los>maks)                         //gdyby wynik bylby wiekszy od wartosci maksymalnej
            {
                los=maks;
                cout << "Liczba wylosowana : " << los << endl;
            }

            else                                   //wynik nie wykracza poza zakres
            {
                los=(i*(j-k))/((1/maks)+i);
                cout << "Liczba wylosowana : " << los << endl;
            }
        }
        if (calkowitosc_wyniku==0)
        {
            float los=(i*(j-k))/((1/maks)+i);           //wynik(liczba mozliwych kombinacji modyfikacji (nie wynikow)--4294967297 (liczba mozliwosci int)*4294967296 (maks nierowne 0, wiec wszystkie mozliwosci jednej zmiennej-1)*4294967297*4294967297=‬‬79228162569604569827557507073*4294967296(dalej kalkulator nie mogl obliczyc))

            if (los>maks)                         //gdyby wynik bylby wiekszy od wartosci maksymalnej
            {
                los=maks;
                cout << los << endl;
            }

            else                                   //wynik nie wykracza poza zakres
            {
                los=(i*(j-k))/((1/maks)+i);
                cout << "Liczba wylosowana : " << los << endl;
            }
        }
    }
        system("PAUSE");
        return 0;
}
