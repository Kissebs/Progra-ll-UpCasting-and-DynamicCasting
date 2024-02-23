//
// Created by ESCINF on 23/02/2024.
//

#ifndef MAIN_PERRO_H
#define MAIN_PERRO_H

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


#endif //MAIN_PERRO_H
