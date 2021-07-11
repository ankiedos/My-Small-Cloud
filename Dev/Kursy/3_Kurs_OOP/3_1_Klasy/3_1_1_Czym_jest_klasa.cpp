// SPIS TRESCI :								Linia
	// SPIS TRESCI								1
	// 1. Dodatki matematyczne itp.				3
		// 1.1. Pojecia							4
			// ZBIOR							84, 96, 101
			// KLASA							39, 40, 90, 97, 102
			// GRUPA							103
		// ROZNICA								96
		// KLASA - UOGOLNIENE ZBIORU			89
		// SLOWNA DEFINICJA MATEMATYCZA			100
	// 2. Przydatne rzeczy						11
		// LINKI								106
		// WIECEJ INFORMACJI					107
	// 3. Przypomnienie							14
		// SKROTY KLAWISZOWE - PRZYPOMNIENIE	76
		// PRZYPOMNIENIE						29
			// BNF/EBNF							33
	// NIE PRZEJDZIE							72
	// PODSUMOWANIE								38
	// 4. Co bylo na lekcji? (kod)				20
		// DEFINICJA KLASY						48
		// DOSTEP								51
			// DOSTEP PUBLICZNY					51
/*
#include <iostream>
#include <string>
#include <conio.h>
//#include <vector>

/// PRZYPOMNIENIE
	/// e(<Wydarzenie>)
	/// [<NACISNIETYKLAWISZ>]
	/// e[<NACISNIETYKLAWISZ>]
	/// <cos> - odpowiednik kodu, np. <NazwaFunkcji>() | Notacja BNF/EBNF
/// ...

//---------------------------------------------------------------------

// PODSUMOWANIE
	// KLASA tworzy typ <nazwaKlasy>, a zmiennymi sa obiekty
	// KLASA ma domyslny dostep prywatny, zawiera konstruktor i destruktor
// ...

#define Send(x)  std::cout << x;
#define Catch(x) std::cin >> x;
#define SendWS() std::cout << " ";
#define SendLn() std::cout << "\n";

//DEFINICJA KLASY
class Klasa
{
// DOSTEP PUBLICZNY - KAZDY fragment kodu moze skorzystac
public:
	bool Pole1 = 1;
	bool Pole2 = 0;
	bool Pole3 = 1;
	bool Pole4 = 1;
	bool Pole5 = 0;

};

int main()
{	
	Klasa Objekt;

	Send(Objekt.Pole1);
	Send(Objekt.Pole2);

	{
		Klasa Objekt2;
		Objekt2.Pole1 += 2;
	}
	//Objekt2.Pole1; <--NIE PRZEJDZIE
	_getch();
	return 0;
}
*/

// SKROTY KLAWISZOWE - PRZYPOMNIENIE
	// e[CTRL] e[ENTER] -> e(Powstanie nowej linii nad linia z kursorem)
	// e(Klikniecie w numer linii) | ( e[SHIFT ( e[HOME] | e[END] ) ) -> e(Zaznaczenie calej linii)
		//					jesli na koncu linii kursor^		^jesli na poczatku linii kursor
	// e[SHIFT] e[DELETE] -> e(Usuniecie calej linii, na ktorej jest kursor (!!!NIEWAZNE gdzie na tej linii jest!!!)
// ...

/**
	* ZBIOR
	* A = {2,1,3,4,1.9}
	* B = {x : x = 2m ^ 10 > m > 2}
**/

/**
	* KLASA - UOGOLNIENIE ZBIORU
	* A = {2,1,3,4,1.9}
	* B = {x : x = 2m ^ 10 > m >2}
**/

// ROZNICA miedzy zbiorem a klasa
	// ZBIOR -- *
	// KLASA -- * * * *
// ...

// SLOWNA DEFINICJA MATEMATYCZNA
	// ZBIOR to agregat, jest traktowany jak calosc
	// KLASA to sa poszczegolne elementy polaczone w jedna "grupe"
	// GRUPA to uogolnienie klasy, wiec dalem w cudzyslowiu
// ...

// LINKI dla zainteresowanych
	// WIECEJ INFORMACJI: https://pl.wikipedia.org/wiki/Zbi%C3%B3r , https://pl.wikipedia.org/wiki/Klasa_(matematyka) , https://pl.wikipedia.org/wiki/Grupa_(matematyka)
	// Pamietajcie o domknieciu nawiasow, bo tego tutaj do linku nie zalicza!^
//