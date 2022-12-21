#ifndef UZIVATEL_H
#define UZIVATEL_H
#include <iostream>

#include <vector>

using namespace std;

class Uzivatel

{
    public:
        Uzivatel();
        Uzivatel(string prijmeni_in, string jmeno_in, int vek_in, double vyska_in, string vzdelani_in);
        string prijm() const;
        string jme() const;
        int ve() const;
        double vysk() const;
        string vzde() const;

    protected:

    private:
        string prijmeni, jmeno, vzdelani;
        int vek;
        double vyska;
};

#endif // UZIVATEL_H
