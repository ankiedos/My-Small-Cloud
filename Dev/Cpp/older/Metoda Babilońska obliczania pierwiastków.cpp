#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    float S;
    long double aprx;  //aproksymacja
    int i=0;
    int mod_aprx;

    cout << "Podaj liczbe, ktora chcesz spierwiastkowac : " << endl;
    cin >> S;

    cout << "\n Podaj calkowite przyblizenie pierwiastka : " << endl;
    cin >> aprx;

    cout << "\n Podaj dokladnosc przyblizenia jesli (-|n| lub 0, to wykona sie raz)(to nie to samo co ilosc liczb po przecinku) : " << endl;
    cin >> mod_aprx;

      do{
          aprx=(aprx+(S/aprx))/2;
          i++;
        } while(i==mod_aprx);
      cout << "Przyblizeniem pierwiastka kwadratowego z " << S << " jest : " << aprx << endl;
      system("PAUSE");
      return 0;
}
