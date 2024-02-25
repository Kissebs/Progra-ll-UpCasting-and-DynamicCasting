#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

class Animal {   // clase abstracta (tendr� como m�nimo un M.V.P)
protected:
    string nombreA;
public:
    Animal(string nom) :nombreA(nom) {}
    virtual ~Animal() {}
    virtual string toString() = 0;
    
};