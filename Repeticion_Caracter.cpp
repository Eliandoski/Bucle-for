/*3) Un programa pide por teclado carácter (puede ser una letra o un símbolo). También pide la cantidad de veces que ese carácter debe repetirse.
Por ejemplo: Si se ingresa la letra A y el número 15, el resultado sería:
A A A A A A A A A A A A A A A*/
#include <iostream>

using namespace std;

int main() {
    char caracter;
    int repeticiones;

    cout << "Ingrese un carácter: ";
    cin >> caracter;

    cout << "Ingrese la cantidad de repeticiones: ";
    cin >> repeticiones;

    for (int k = 0; k < repeticiones; ++k) {
        cout << caracter << " ";
    }

    cout << endl;

    return 0;
}
