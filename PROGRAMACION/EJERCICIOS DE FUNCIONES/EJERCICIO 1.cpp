#include <iostream>
#include <string>
using namespace std;

void saludar (string nombre){
    cout << "Hola," << nombre << "! Bienvenido/a. " << endl;
}

int main() {
    string nombre;
    cout << " Ingresa tu nombre: ";
    cin >> nombre;

    saludar(nombre);
    return 0;
}