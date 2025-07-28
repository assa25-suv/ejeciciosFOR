#include <iostream>
using namespace std;

int main () {
int num, divisores = 0;
cout << "Ingresa un numero: ";
cin >> num;

for (int i = 1; i <= num; i++){
    if (num % i == 0) {
        divisores++;
    }
}
if (divisores == 2) {
    cout << num << "es un numero primo. " << endl;
} else {
    cout << num << " No es un numero primo. " << endl;
}
return 0;
}
