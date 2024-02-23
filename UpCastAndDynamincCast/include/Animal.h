//
// Created by ESCINF on 23/02/2024.
//

#ifndef UPCASTANDDYNAMINCCAST_ANIMAL_H
#define UPCASTANDDYNAMINCCAST_ANIMAL_H


#include<iostream>
#include<sstream>
#include<string>
using namespace std;

class Animal {   // clase abstracta (tendrá como mínimo un M.V.P)
protected:
    string nombreA;
public:
    Animal(string nom) :nombreA(nom) {}
    virtual ~Animal() {}
    virtual string toString() = 0;
};


#endif //UPCASTANDDYNAMINCCAST_ANIMAL_H
