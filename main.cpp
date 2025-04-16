#include <iostream>
#include "arithmetic.h"
#include "geometry.h"
#include "conversion.h"

using namespace std;

int main() {

    cout << sum(9,5)<< endl;
    cout << sub(9,5)<< endl;
    cout << multiply(9,5)<< endl;
    cout << divide(9,5)<< endl;
    cout << "--------------" << endl;
    cout << areaOfCircle(3)<<endl;
    cout << areaOfRectangle(3, 4) <<endl;
    cout << volumeOfBox(2,6,4) << endl;
    cout << "--------------" << endl;
    cout << celsiusToFahrenheit(9) << endl;
    cout << fahrenheitToCelsius(78) << endl;
    cout << inchesToCentimeters(15) << endl;
    cout << centimetersToInches(42) << endl;




    return 0;
}
