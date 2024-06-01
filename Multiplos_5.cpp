//1) Imprima los números múltiplos de 5 comprendidos entre 1 y 100
#include <iostream>

using namespace std;
int main() {
    for (int num = 1; num <= 100; ++num) {
        if (num % 5 == 0) {
            cout << num << endl;
        }
    }

    return 0;
}


