#pragma once
#include <iostream>

using namespace std;

class SphericalCoord {
private:
	double radialDist;
	double polarAngle;
	double azimuthalAngle;
public:
	SphericalCoord(double, double, double);
	SphericalCoord() : SphericalCoord(0, 0, 0) {};
	friend ostream& operator << (ostream&, const SphericalCoord&);
	~SphericalCoord() {};
	double getRadialDist();
	double getPolarAngle();
	double getAzimuthalAngle();
};

