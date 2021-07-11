#include <iostream>
#include <string>
using namespace std;

string name;
bool arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10;

bool logsum(bool arg1,bool arg2,bool arg3,bool arg4,bool arg5,bool arg6,bool arg7,bool arg8,bool arg9,bool arg10);
bool logmultiple(bool arg1,bool arg2,bool arg3,bool arg4,bool arg5,bool arg6,bool arg7,bool arg8,bool arg9,bool arg10);

void zegnaj();
void witaj();

int main()
{
    char logoper;
    witaj();

    cout<<"Podaj "<<name<<" wartosc zdania logicznego (jesli mniej niz 10 chcesz to w pozostalych wpisz 0) : ";
    cin>>arg1;

    cout<<"Podaj "<<name<<" wartosc zdania logicznego (jesli mniej niz 10 chcesz to w pozostalych wpisz 0) : ";
    cin>>arg2;

    cout<<"Podaj "<<name<<" wartosc zdania logicznego (jesli mniej niz 10 chcesz to w pozostalych wpisz 0) : ";
    cin>>arg3;

    cout<<"Podaj "<<name<<" wartosc zdania logicznego (jesli mniej niz 10 chcesz to w pozostalych wpisz 0) : ";
    cin>>arg4;

    cout<<"Podaj "<<name<<" wartosc zdania logicznego (jesli mniej niz 10 chcesz to w pozostalych wpisz 0) : ";
    cin>>arg5;

    cout<<"Podaj "<<name<<" wartosc zdania logicznego (jesli mniej niz 10 chcesz to w pozostalych wpisz 0) : ";
    cin>>arg6;

    cout<<"Podaj "<<name<<" wartosc zdania logicznego (jesli mniej niz 10 chcesz to w pozostalych wpisz 0) : ";
    cin>>arg7;

    cout<<"Podaj "<<name<<" wartosc zdania logicznego (jesli mniej niz 10 chcesz to w pozostalych wpisz 0) : ";
    cin>>arg8;

    cout<<"Podaj "<<name<<" wartosc zdania logicznego (jesli mniej niz 10 chcesz to w pozostalych wpisz 0) : ";
    cin>>arg9;

    cout<<"Podaj "<<name<<" wartosc zdania logicznego (jesli mniej niz 10 chcesz to w pozostalych wpisz 0) : ";
    cin>>arg10;
    cout<<"KONIUNKCJA-WYBIERZ ZNAK INDEKSU GORNEGO, ALTERNATYWA-v : ";
    cin>>logoper;
    switch(logoper)
    {
    case 'v':
        logsum(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
        break;
    case '^':
        logmultiple(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
        break;
    default:
        cout<<"Nie znam takiej operacji logicznej, "<<name<<" ."<<endl;
        break;
    }
    zegnaj();
    main();
    return 0;
}

void witaj(void)
{
    cout<<"Podaj swoje imie uzytkowniku : ";
    cin>>name;
    cout<<"Witaj "<<name<<" w programie do przeliczania wartosci zdan logicznych"<<endl;
}
void zegnaj(void)
{
    string rekomendacja;
    cout<<"Dziekuje "<<name<<" za to, ze skorzystales z programu do przeliczania wartosci logicznych."<<endl;
    cout<<"I jeszcze jedno. "<<name<<", czy polecisz ten program znajomym?";
    cin>>rekomendacja;
}
bool logsum(bool arg1,bool arg2,bool arg3,bool arg4,bool arg5,bool arg6,bool arg7,bool arg8,bool arg9,bool arg10)
{
    cout<<name<<", suma logiczna podanych przez ciebie zdan wynosi "<<bool(arg1+arg2+arg3+arg4+arg5+arg6+arg7+arg8+arg9+arg10) <<endl;
    return 1;
}
bool logmultiple(bool arg1,bool arg2,bool arg3,bool arg4,bool arg5,bool arg6,bool arg7,bool arg8,bool arg9,bool arg10)
{
    cout<<name<<", iloczyn logiczny podanych przez ciebie zdan wynosi "<<bool(arg1*arg2*arg3*arg4*arg5*arg6*arg7*arg8*arg9*arg10) <<endl;
    return 1;
}
