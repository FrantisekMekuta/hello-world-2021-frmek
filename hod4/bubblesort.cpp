using namespace std;
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

    vector <int> nacti(string data)
    {
    ifstream soubor(data);

    vector <int> vektor;

    int cislo = 0;
    soubor >> cislo;

    while(!soubor.eof())
        {
        vektor.push_back(cislo);
        soubor >> cislo;
        }
        return vektor;
    }


// Nacteni a setrideni dat pomoci algoritmu bubble sort
int main ()
{
	int i, j, temp,pass=0;
	vector<int> a = nacti("data.txt");
	cout<<endl;
	for(i = 0; i<a.size(); i++) {
		for(j = i+1; j<a.size(); j++)
	{
		if(a[j] < a[i]) {
		   temp = a[i];
		   a[i] = a[j];
		   a[j] = temp;
		}
	}
        }

// Ulozeni setridenych dat do souboru setrideno.txt
ofstream soubor ("setrideno.txt");
for(i=0; i<a.size(); i++) {
	soubor << a[i] <<"\n";
        }

return 0;
}
