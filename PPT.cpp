#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {

    srand(time(0));
    
    int computadora;
    int usuario;
    
    computadora = rand() % 3 + 1;

    cout << "1 Piedra" ;
    cout << "  2 Papel" ;
    cout << "  3 Tijera";
    cout << "    Elige una opcion (1 a 3): ";
    cin >> usuario;

    if(usuario < 1 || usuario > 3) {
        cout << "Opcion no valida. Por favor, reinicia el juego y elige 1, 2 o 3." << endl;
        return 0;
    }

    cout << "   Tu eligiste: ";
    if(usuario == 1) cout << "Piedra";
    else if(usuario == 2) cout << "Papel" ;
    else if(usuario == 3) cout << "Tijera" ;

    cout << "La computadora eligio: ";
    if(computadora == 1) cout << "Piedra" ;
    else if(computadora == 2) cout << "Papel" ;
    else if(computadora == 3) cout << "Tijera" ;

    if (usuario == computadora) {
        cout << "   ¡Es un EMPATE!" ;
    } 
    else if ((usuario == 1 && computadora == 3) || 
             (usuario == 2 && computadora == 1) || 
             (usuario == 3 && computadora == 2)) {
        cout << "   ¡Felicidades, GANASTE!";
    } 
    else {
        cout << "   ¡La computadora GANA!";
    }

    return 0;
}