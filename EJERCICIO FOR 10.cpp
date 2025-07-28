#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuantos terminos de fibonacci deseas ver? ";
    cin >> n;

    int a = 0, b = 1, siguiente;

    for (int i = 0; i < n; i++) {
        cout << a << " ";
        siguiente = a + b;
        a = b;
        b = siguiente;
    }
    cout << endl;
    return 0;
}
