#include <iostream>
using namespace std;

int sumar(int a, int b) {
    return a + b;
}

int main() {
int x, y;
cout << "Ingresa dos numeros: ";
cin >> x >> y;

cout << "la suma es:" <<sumar(x, y) << endl;

return 0;
}