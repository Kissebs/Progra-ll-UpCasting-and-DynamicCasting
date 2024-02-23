//
// Created by ESCINF on 23/02/2024.
//

#ifndef MAIN_CABALLO_H
#define MAIN_CABALLO_H

#include "Animal.h"
class Caballo : public Animal {
private:
    double estatura;
public:
    Caballo(string nom, double est) :Animal(nom), estatura(est) {}
    virtual ~Caballo() {}
    string toString() {
        stringstream s;
        s << "Nombre del caballo es: " << nombreA << " y la estatura es de: " <<
          estatura << " mts." << endl;
        return s.str();
    }
};


#endif //MAIN_CABALLO_H
