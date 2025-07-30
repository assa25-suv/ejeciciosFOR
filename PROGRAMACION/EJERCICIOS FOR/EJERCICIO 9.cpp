#include <iostream>
#include <string>
using namespace std;

int main(){
    string numero;
    int suma = 0;

    cout << "Ingresa un numero entero: ";
    cin >> numero;

    for (int i = 0; i < numero.length(); i++) {
        suma += numero [i] - '0'; // convertir char a int
    }
    cout << "La suma de los digitos es: " << suma << endl;
    return 0;
}