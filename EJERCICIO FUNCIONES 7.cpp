#include <iostream>
using namespace std;

double celsiusAFahrenheit(double c) {
    return (c * 9 / 5)+ 32;
}

int main() {
    double celsius;
    cout << "Ingresa temperatura en Celsius: ";
    cin >> celsius;

    cout << "Equivale a " << celsiusAFahrenheit(celsius) <<"°F" << endl;

    return 0;
}
