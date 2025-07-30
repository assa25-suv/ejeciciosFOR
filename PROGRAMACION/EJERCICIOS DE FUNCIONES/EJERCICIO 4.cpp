#include <iostream>
using namespace std;

double areaTriangulo(double base, double altura) {
    return ( base * altura) / 2.0;
}

int main () {
    double b, h;
    cout << "Ingresa base y altura del triangulo: ";
    cin >> b >> h;

    cout << "El area es: " << areaTriangulo(b, h) << endl;

    return 0;
}