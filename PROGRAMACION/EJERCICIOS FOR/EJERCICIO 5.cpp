#include <iostream>
using namespace std;

int main(){
    int n;
    unsigned long long factorial = 1;
    cout << "Ingresa un numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        factorial *= i;
    }

    cout << "El factorial de " << n << "es: " << factorial << endl;
    return 0;
}