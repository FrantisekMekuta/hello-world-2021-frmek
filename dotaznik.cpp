#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

int main() {
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

	return 0;
	} 
