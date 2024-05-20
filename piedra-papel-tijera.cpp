#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {
   
    int usuario, maquina;
    int contador = 0; 


    do {
        cout << "Elige:\n1. Piedra\n2. Papel\n3. Tijera\n";
        cin >> usuario;

        maquina = rand ()%3 + 1;

        cout << "La maquina elige: " << maquina << endl;

        if (usuario == maquina) {
            cout << "Empate\n";
        } else if ((usuario == 1 && maquina == 3) || (usuario == 2 && maquina == 1) || (usuario == 3 && maquina == 2)) {
            cout << "¡Tu has Ganado!\n";
        } else {
            cout << "¡ Tu has perdido!\n";
        }

        contador++; 

    } while (contador < 3);

    return 0;
}


















