/*4) Diseñe el programa que utilizando números aleatorios, simule el lanzamiento de 2 dados. 
Un usuario gana cuando ambos dados sacan el mismo número, o cuando la sumatoria de las mismas es 7. 
Utilice un bucle for para que el usuario tenga 3 oportunidades para participar.  Utilice la sentencia break para abandonar 
el bucle en caso de que el jugador gane dentro de los 3 intentos. 
Importante: Para lanzar los datos, en cada oportunidad, el usuario debe ver el mensaje "PULSE ENTER para tirar los dados"*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 

    for (int intento = 1; intento <= 3; ++intento) {
        cout << "Intento #" << intento << ": Pulse ENTER para tirar los dados";
        cin.get(); 
        cin.ignore(); 

        int dado1 = rand() % 6 + 1; 
        int dado2 = rand() % 6 + 1;

        cout << "Dado 1: " << dado1 << endl;
        cout << "Dado 2: " << dado2 << endl;

        if (dado1 == dado2 || dado1 + dado2 == 7) {
            cout << "Has ganado en el intento #" << intento << endl;
            break; 
        } else {
            cout << "No has ganado en este intento." << endl;
        }
    }

    return 0;
}
