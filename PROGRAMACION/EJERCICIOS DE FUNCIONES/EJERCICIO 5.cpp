#include <iostream>
using namespace std;

bool espar (int numero) {
    return numero % 2 == 0;
}
int main () {
 int n;
 cout << "Ingresa un numero: ";
 cin >> n;

 if (espar(n)){
    cout << n << "es par." << endl;
 } else{
    cout << n << " es inpar." << endl;
 }

 return 0;
}
