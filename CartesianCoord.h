#pragma once
#include <iostream>
using namespace std;

class CartesianCoord {
private:
	double x;
	double y;
	double z;
public:
	CartesianCoord(double x, double y, double z) : x(x), y(y), z(z) {};
	CartesianCoord() : CartesianCoord(0, 0, 0) {};
	friend ostream& operator << (ostream& out, const CartesianCoord& obj);
	~CartesianCoord() {}
	double getX();
	double getY();
	double getZ();
};