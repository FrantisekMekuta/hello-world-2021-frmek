#include <iostream>
#include <cmath>

int main() {

    std::cout <<"Zadej cislo:";
    int cele_cislo;
    std::cin >> cele_cislo;

    std::cout << "Cislo = " << cele_cislo << "n/";

    std::cout << "Zadej jmeno: ";
    std::string jmeno;
    std::cin >> jmeno;

    std::cout << "Jmeno je " << jmeno << "/n";

    enum typ_vzdelani {zs,ss,vs};

    typ_vzdelani skola = ss;

    if (skola == ss) {
    std::cout << "Vzdelani je stredni skola/n";
    }
    else
        std::cout << "Vzdelani je jine/n";
    }
        std::ofstream vystupni_soubor ("vystup.txt");
        vystupni_soubor << "jmeno" << jmeno << "/n";
    }
