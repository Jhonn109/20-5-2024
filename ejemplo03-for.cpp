 #include <iostream>
using namespace std;

int main() {
    int numero;
    int factorial = 1;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial de un numero negativo no existe." << endl;
    } else {
        int original = numero; 

        while (numero > 0) {
            factorial *= numero;
            numero--;
        }

        cout << "El factorial de " << original << " es: " << factorial << endl;
    }

    return 0;
}