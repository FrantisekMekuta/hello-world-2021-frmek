#include <iostream>
#include <fstream>
#include <vector>
#include "Uzivatel.h"
#include <algorithm>

using namespace std;

vector<Uzivatel> nacti(vector<Uzivatel> uzivatele)
{
  int h=0;
  bool i=false;
  int vek=0;
  std::string jmeno;
  std::string prijmeni;
  double vyska=0;
  std::string skola;
  std::string vzdelani;

  	while (vek<18 || vek>120) {
  	std::cout << "Zadejte vek: ";
  	std::cin >> vek;
  	if (vek<18 || vek>120) {
  	std::cout << "Zadejte vek v rozmezi 18 - 120 let.\n";
  	}
  	}

  	std::cout << "Zadejte jmeno: ";
  	std::cin >> jmeno;

  	std::cout << "Zadejte prijmeni: ";
  	std::cin >> prijmeni;

  	while (vyska<100 || vyska>230) {
  	std::cout << "Zadejte vysku (v cm): ";
  	std::cin >> vyska;
  	if (vyska<100 || vyska>230) {
  	std::cout << "Zadejte vysku v rozmezi 100 - 230 cm.\n";
  	}
  	}

  	while (skola!="zs" && skola!="ss" && skola!="vs"){
  	std::cout << "Zadejte vzdelani (zs-zakladni,ss-stredoskloske,vs-vysokoskolske): ";
  	std::cin >> skola;
  	if (skola=="zs") {
  	vzdelani = "zakladni";
  	}
  	else if (skola=="ss") {
  	vzdelani = "stredoskolske";
  	}
  	else if (skola=="vs") {
  	vzdelani = "vysokoskolske";
  	}
  	else {
  	std::cout <<"Zadejte jednu z variant zs, ss, vs.\n";
  	}
  	}

  	std::cout << "\n";

  	std::cout << "Jmeno: " << jmeno << "\n";
  	std::cout << "Prijmeni: " << prijmeni << "\n";
  	std::cout << "Vek: " << vek << " let\n";
  	std::cout << "Vyska: " << vyska << " cm\n";
  	std::cout << "Vzdelani: " << vzdelani << "\n";

  	std::cout << "\n";

  	std::ofstream vypis_info("info.txt");
  	vypis_info << "Jmeno: " << jmeno << "\n" << "Prijmeni: " << prijmeni << "\n" << "Vek: " << vek << "\n" << "Vyska: " << vyska << "\n" << "Vzdelani: " << vzdelani << "\n";


uzivatele.push_back(Uzivatel(prijmeni,jmeno,vek,vyska,vzdelani));

    return uzivatele;

}

void ukladani(vector<Uzivatel> uzivatele)
{
    ofstream ulozTo ("users.txt");

    for(Uzivatel k : uzivatele)
    {
        ulozTo << k.prijm();
        ulozTo << " ";
        ulozTo << k.jme();
        ulozTo << " ";
        ulozTo << k.ve();
        ulozTo << " ";
        ulozTo << k.vysk();
        ulozTo << " ";
        ulozTo << k.vzde();
        ulozTo << "\n";
    }
    return;
}

struct Trideni
{
    bool operator()(class Uzivatel& a1 , class Uzivatel& a2) const
    {
        return a1.prijm() < a2.prijm();
    }

};

vector<Uzivatel> serazeno(vector<Uzivatel> a)
{
    sort(a.begin(),a.end(), Trideni());
    return a;
}

int main()
{
    int u;
    vector<Uzivatel> uzivatele;

    do
    {
        u = 0;
        uzivatele = nacti(uzivatele);
        cout << "Pokud chcete nacist dalsiho uzivatele napiste 1, jinak jine cislo: ";
        cin >> u;
    }while(u==1);

    vector<Uzivatel> uzivatele2;
    uzivatele2 = serazeno(uzivatele);

    ukladani(uzivatele2);

return 0;
}
