#include <iostream>
#include <vector>
#include <fstream>
#include <string>

std::vector <int> nacti(std::string data)
    {
    std::ifstream soubor(data);

    std::vector <int> vektor;

    int cislo = 0;
    soubor >> cislo;

    while(!soubor.eof())
        {
        vektor.push_back(cislo);
        soubor >> cislo;
        }
        return vektor;
    }

int main()
{

    std::vector<int> muj_vektor = nacti("data.txt");
    std::cout << "Nacteno " << muj_vektor.size() << " cisel" << std::endl;
    std::vector <int> pocet_prvku(1);
    pocet_prvku = {0};
    int i=0;
    int j=0;

    for (int p=0; p < muj_vektor.size(); ++p)
    {
        if (muj_vektor[p] > 1720 && muj_vektor[p] < 9987)
        {
        pocet_prvku[0]=pocet_prvku[0]+1;
        i=i+muj_vektor[p];
        }
    	}
    j=i/pocet_prvku[0];
    std::cout << "pocet prvku je: " << pocet_prvku[0] << std::endl;
    std::cout << "aritmeticky prumer je: " << j << std::endl;

    return 0;

}
