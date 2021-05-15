#include "CartesianCoord.h"
#include "SphericalCoord.h"
#include <iostream>
#include <math.h>

using namespace std;

CartesianCoord convert(SphericalCoord);
SphericalCoord convert(CartesianCoord);

int main() {
	try {
		CartesianCoord cc(1, 1, 1);
		//SphericalCoord sc1(-1, 20, 30);
		SphericalCoord sc(1.73205, 54.7356, 45);
		cout << convert(cc);
		cout << convert(sc);
	}
	catch (const char* msg) {
		cerr << msg << endl;
	}
	return 0;
}

CartesianCoord convert(SphericalCoord obj) {
	const double PI = acos(-1.0);
	const double K = PI / 180;
	double x, y, z;
	x = obj.getRadialDist() * sin(obj.getPolarAngle() * K) * cos(obj.getAzimuthalAngle() * K);
	y = obj.getRadialDist() * sin(obj.getPolarAngle() * K) * sin(obj.getAzimuthalAngle() * K);
	z = obj.getRadialDist() * cos(obj.getPolarAngle() * K);
	return CartesianCoord(x, y, z);
}

SphericalCoord convert(CartesianCoord obj) {
	const double PI = acos(-1.0);
	const double K = PI / 180;
	double radialDist, polarAngle, azimuthalAngle;
	radialDist = sqrt(pow(obj.getX(), 2) + pow(obj.getY(), 2) + pow(obj.getZ(), 2));
	polarAngle = atan(sqrt(pow(obj.getX(), 2) + pow(obj.getY(), 2)) / obj.getZ()) / K;
	azimuthalAngle = atan(obj.getY() / obj.getX()) / K;
	return SphericalCoord(radialDist, polarAngle, azimuthalAngle);
}