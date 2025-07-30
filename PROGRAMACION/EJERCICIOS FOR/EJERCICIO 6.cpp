#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    cout << "Ingresa una palabra: ";
    cin >> palabra;

    for (int i = 0; i < palabra.length(); i++){
        cout << palabra[i] << endl;
    }
    return 0;
}