#include <iostream>
#include <cmath>
#include "geometry.h"


using namespace std;

float areaOfCircle(float radius) {
    return M_PI * radius * radius;
}

float areaOfRectangle(float w, float h) {
    return w * h;
}

float volumeOfBox(float l, float w, float h) {
    return l * w * h;
}
