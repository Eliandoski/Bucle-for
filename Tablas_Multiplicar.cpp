/*2) Solicite al usuario una tabla de multiplicar. A continuación, imprima la tabla usando el siguiente formato:
Por ejemplo si la tabla es la del 10, sería:
10 x 1 = 10
10 x 2 = 20
10 x 3 = 30*/
#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Ingrese un número para la tabla de multiplicar: ";
    cin >> num;

    for (int k = 1; k <= 12; ++k) {
        cout << num << " x " << k << " = " << num * k << endl;
    }

    return 0;
}
