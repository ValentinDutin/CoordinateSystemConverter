#include "SphericalCoord.h"

SphericalCoord::SphericalCoord(double radialDist, double polarAngle, double azimuthalAngle) {
	if (radialDist < 0 || polarAngle < 0 || polarAngle > 180 || azimuthalAngle < 0 || azimuthalAngle >= 360) {
		throw "Incorrect input data";
	}
	else {
		this->radialDist = radialDist;
		this->polarAngle = polarAngle;
		this->azimuthalAngle = azimuthalAngle;
	}
}

ostream& operator << (ostream& out, const SphericalCoord& obj) {
	out << "(" << obj.radialDist << ", " << obj.polarAngle << ", " << obj.azimuthalAngle << ")" << endl;
	return out;
}

double SphericalCoord::getRadialDist() {
	return this->radialDist;
}

double SphericalCoord::getPolarAngle() {
	return this->polarAngle;
}

double SphericalCoord::getAzimuthalAngle() {
	return this->azimuthalAngle;
}