#include "CartesianCoord.h"

ostream& operator << (ostream& out, const CartesianCoord& obj) {
	out << "(" << obj.x << ", " << obj.y << ", " << obj.z << ")" << endl;
	return out;
}

double CartesianCoord::getX() {
	return this->x;
}

double CartesianCoord::getY() {
	return this->y;
}

double CartesianCoord::getZ() {
	return this->z;
}
