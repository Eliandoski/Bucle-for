/*5) Diseñe un programa que realice la sumatoria de los números desde el 1 al 100.
Por ejemplo 1 + 2 + 3 + 4 + 5 + 6 + . . . . . .+ 1 00
Importante: Debe usar un bucle for y un acumulador*/

#include <iostream>

using namespace std;

int main() {
    int sumatoria = 0; 

    for (int k = 1; k <= 100; ++k) {
        sumatoria = sumatoria + k; 
    }

    cout << "La sumatoria de los números del 1 al 100 es: " << sumatoria << endl;

    return 0;
}
