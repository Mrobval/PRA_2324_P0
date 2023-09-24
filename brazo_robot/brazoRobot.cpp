#include "brazoRobot.h"

BrazoRobotico::BrazoRobotico(double X, double Y, double Z)
	:X(X), Y(Y), Z(Z), SujetandoObj(false){}

	double BrazoRobotico::GetX() const {
		return X;
	}
	double BrazoRobotico::GetY() const {
		return Y;
	}
	double BrazoRobotico::GetZ() const {
		return Z;
	}
	bool BrazoRobotico::SujObj() const{
		return SujetandoObj;
	}
	void BrazoRobotico::Coger() {
		SujetandoObj = true;
	}
	void BrazoRobotico::Soltar() {
		SujetandoObj = false;
	}
	void BrazoRobotico::Mover (double newX, double newY, double newZ){
		X = newX;
		Y = newY;
		Z = newZ;
	}
	
