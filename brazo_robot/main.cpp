#include <iostream>
#include "brazoRobot.h"

int main() {
	BrazoRobotico inst(0.0, 0.0, 0.0);

	inst.Mover(1.0, 2.0, 3.0);

	inst.Coger();

	inst.Soltar();

	std::cout << "La posición del brazo es:" << inst.GetX() << "," << inst.GetY() << "," << inst.GetZ() << "\n";

	if(inst.SujObj()) {
		std::cout << "El brazo está sujetando un objeto\n";
	}
	else{
		std::cout << "El brazo no está sujetando nada\n";
	}
	return 0;
}
