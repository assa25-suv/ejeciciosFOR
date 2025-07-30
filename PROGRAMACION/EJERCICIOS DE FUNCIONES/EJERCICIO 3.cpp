#include <iostream>
using namespace std;

int mayor (int a, int b) {
    return (a > b)? a : b;
}

int main() {
    int x, y;
    cout << "Ingresa dos numeros: ";
    cin >> x >> y;

    cout << "El mayor es: " << mayor(x, y) << endl;

    return 0;
}