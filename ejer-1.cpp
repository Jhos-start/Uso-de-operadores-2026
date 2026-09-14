#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 4;

    // Algoritmo de intercambio matemático
    x = x + y;
    y = x - y;
    x = x - y;

    // Imprime los valores con un espacio para mayor claridad
    cout << x << " " << y; 

    return 0;
}