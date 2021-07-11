print("Witaj w generatorze pseudolosowym!")
try:
    sposób = int(input("Wybierz sposób losowania 0-1."))
    if sposób == 0:
        try:
            i = float(input("Wybierz liczbę."))
            max = float(input("Wybierz liczbę maksymalną."))
            mod = 2 / (max + i)
            los = abs(((abs(max) + 2) / 3) - mod)
            if los <= max:
                los = abs(((abs(max) + 2) / 3) - mod)
                print(los)
            else:
                los = max
                print(los)
        except:
            print("Następnym razem wybierz liczbę z zakresu.")
    else:
        try:
            i = float(input("Wybierz liczbę."))
            max = float(input("Wybierz liczbę maksymalną."))
            los = (max + i) / (max**2) - ((max + i)**2) / (i**2)
            if los <= max:
                los = (max + i) / (max**2) - ((max + i)**2) / (i**2)
                print(los)
            else:
                los = max
                print(los)
        except:
            print("Następnym razem podaj liczbę z zakresu.")
except:
    print("Następnym razem wybierz liczbę z zakresu.")

SILNIA=int(input("Z czego silnia?"))
silnia=1
for n in range(1,SILNIA+1):
  silnia=silnia*n
print("Silnia=",silnia)

#include <abc.cpp>
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
   int i;
   cin >> "Podaj liczbe : ";
   int j=i+2;
   int k=pow(i,2);
   int l=i+j-k;
   cout << l;
   return P;
}