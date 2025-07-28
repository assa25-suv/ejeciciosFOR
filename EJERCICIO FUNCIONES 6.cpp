#include <iostream> 
using namespace std;

unsigned long long factorial (int n) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; i++){
        resultado *= i;
    }
    return resultado;
} 

int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;

    cout << "El factorial de " << n << "es: " << factorial(n) << endl;

    return 0;
}
