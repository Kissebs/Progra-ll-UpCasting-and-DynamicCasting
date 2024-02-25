#pragma once
#include "Animal.h"

class Perro : public Animal {
private:
    string raza;
public:
    Perro(string nom, string raz) : Animal(nom), raza(raz) {}

    virtual ~Perro() {}

    string toString() {
        stringstream s;
        s << "Nombre del perro es: " << nombreA << " y la raza es: " << raza <<
            endl;
        return s.str();
    }
};