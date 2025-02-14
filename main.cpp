#include <iostream>
#include <iostream>

using namespace std;
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

string fibonacci(int n) {
    int a = 0, b = 1, siguiente;
    string resultado = "serie de Fibonacci  " + string(1, '0' + n) + " términos:\n"; // Inicializamos el string

    for (int i = 0; i < n; ++i) {
        resultado += "Paso " + string(1, '0' + (i + 1)) + ": " + string(1, '0' + a) + "\n"; // Concatenamos números como caracteres
        siguiente = a + b;
        a = b;
        b = siguiente;
    }

    return resultado;
}

int main() {
    int n;

    cout << "Ingresa cuántos números de Fibonacci deseas: ";
    cin >> n;

    if (n <= 0) {
        cout << "Por favor, ingresa un número mayor a 0.\n";
    } else {
        cout << fibonacci(n);
    }

    return 0;
}

