#include <iostream>  
using namespace std;

int a, b, r;

int main() {
    a = 8;
    b = 32;
    r = a + b;
    cout << "El resultado de sumar " << a << " y " << b << " es: " << r << '\n';

    if (r == 40) {
        cout << "El resultado " << r << " si es = a 40";
    } else if (r < 40) {
        cout << "El resultado " << r << " si es < a 40";
    } else {
        cout << "El resultado " << r << " si es > a 40";
    }

    return 0;
}
