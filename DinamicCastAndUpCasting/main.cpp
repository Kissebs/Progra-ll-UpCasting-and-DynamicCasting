#include <iostream>
#include "Animal.h"
#include "Gato.h"
#include "Perro.h"
#include "Caballo.h"
using namespace std;

int main() {
	Animal* vec[6];

	Animal* anim1 = new Gato("pepe", 2);
	Animal* anim2 = new Perro("rayo", "puto");
	Animal* anim3 = new Caballo("regalo", 6);
	Animal* anim4 = new Gato("kiki", 4);
	Animal* anim5 = new Caballo("chelsea", 10);

	vec[0] = anim1;
	vec[1] = anim2;
	vec[2] = anim3;
	vec[3] = anim4;
	vec[4] = anim5;

	cout << "Animales del contenedor: \n";

	for (int i = 0; i < 5; i++) {
		Gato* gato = dynamic_cast<Gato*>(vec[i]);
		if (gato != nullptr) {
			cout << gato->toString() << endl;
		}
		else {
			Perro* perro = dynamic_cast<Perro*>(vec[i]);
			if (perro != nullptr) {
				cout << perro->toString() << endl;
			}
			else {
				Caballo* caballo = dynamic_cast<Caballo*>(vec[i]);
				if (caballo != nullptr) {
					cout << caballo->toString() << endl;
				}
			}
		}
	}

	

	return 0;
}