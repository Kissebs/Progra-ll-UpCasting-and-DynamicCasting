#pragma once
#include "Animal.h"

class Gato : public Animal {
private:
    int edad;
public:
    Gato(string nom, int ed) : Animal(nom), edad(ed) {}

    virtual ~Gato() {}

    string toString() {
        stringstream s;
        s << "Nombre del gato es: " << nombreA << " y la edad es de: " << edad << " anios." << endl;
        return s.str();
    }
};
