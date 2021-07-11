void Menu()
{
    system("cls");
    
    std::cout << "----------MENU----------\n\n";
    std::cout << "1 - Spersonalizuj (musisz wykonac podczas pierwszego uruchomienia)\n";
    std::cout << "2 - Zajrzyj do godzin pracy\n";
    std::cout << "3 - Zajrzyj do ksiegi rozliczen i podatkow\n";
}
void Tabela()
{
    system("cls");
	std::cout << "Pn\t|Wt\t|Sr\t|Czw\t|Pt\t|Sb\t|Nd\n";
	std::cout << Pn1 << "\t|" << Wt1 << "\t|" << Sr1 << "\t|" << Cz1 << "\t|" << Pt1 << "\t|" << Sb1 << "\t|" << Nd1 << "\n";
	std::cout << Pn2 << "\t|" << Wt2 << "\t|" << Sr2 << "\t|" << Cz2 << "\t|" << Pt2 << "\t|" << Sb2 << "\t|" << Nd2 << "\n";
	std::cout << Pn3 << "\t|" << Wt3 << "\t|" << Sr3 << "\t|" << Cz3 << "\t|" << Pt3 << "\t|" << Sb3 << "\t|" << Nd3 << "\n";
	std::cout << Pn4 << "\t|" << Wt4 << "\t|" << Sr4 << "\t|" << Cz4 << "\t|" << Pt4 << "\t|" << Sb4 << "\t|" << Nd4 << "\n";
	std::cout << Pn5 << "\t|" << Wt5 << "\t|" << Sr5 << "\t|" << Cz5 << "\t|" << Pt5 << "\t|" << Sb5 << "\t|" << Nd5 << "\n";
	std::cout << Pn6 << "\t|" << Wt6 << "\t|" << Sr6 << "\t|" << Cz6 << "\t|" << Pt6 << "\t|" << Sb6 << "\t|" << Nd6 << "\n";
	std::cout << Pn7 << "\t|" << Wt7 << "\t|" << Sr7 << "\t|" << Cz7 << "\t|" << Pt7 << "\t|" << Sb7 << "\t|" << Nd7 << "\n";
	std::cout << Pn8 << "\t|" << Wt8 << "\t|" << Sr8 << "\t|" << Cz8 << "\t|" << Pt8 << "\t|" << Sb8 << "\t|" << Nd8 << "\n";
	std::cout << Pn9 << "\t|" << Wt9 << "\t|" << Sr9 << "\t|" << Cz9 << "\t|" << Pt9 << "\t|" << Sb9 << "\t|" << Nd9 << "\n";
    std::cout << Pn10 << "\t|" << Wt10 << "\t|" << Sr10 << "\t|" << Cz10 << "\t|" << Pt10 << "\t|" << Sb10 << "\t|" << Nd10 << "\n";
}
void Config()
{
    system("cls");
	std::cout << "Jak masz na imie? ";
	std::cin >> name;
	database << name << "\n";
	std::cout << "Czy pracujesz w weekendy? (1 - Tak, 0 - Nie) ";
	std::cin >> weekendwork;
	database << weekendwork;
	std::cout << std::boolalpha;
	std::cout << "Potwierdzenie: Twoje imie to: " << name << " i " << weekendwork << ", ze pracujesz w weekendy\n\n";
	std::cout << "---------------------------------------------------------------------------------------------\n";
	std::cout << "1 - Powrot do glownego menu\n";
	std::cout << "2 - Zamknij program\n";
	std::cin >> wybor;
		
	if(wybor == 1) goto menu;
	else if(wybor == 2) system("exit");
	else std::cerr << "Nie ma takiej opcji!\n";
}
void ConfigNew()
{
    
}