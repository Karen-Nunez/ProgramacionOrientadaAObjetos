#include <iostream>
#include <string>
#include <algorithm>
#include <cstring> 
using namespace std;

// Karen Alessandra Nuñez Garcia
// Sexto programa
// 20-05-2025
// Hacer una secuencia con el diagrama que sea una cadena 

string transicion(string estado, char simbolo) {
    if (estado == "S1") {
        if (simbolo == 'a') return "S2";
    } else if (estado == "S2") {
        if (simbolo == 'a') return "S2";
        if (simbolo == 'b') return "S1";
        if (simbolo == 'c') return "S4";
    } else if (estado == "S4") {
        if (simbolo == 'd') return "S3";
    } else if (estado == "S3") {
        if (simbolo == 'a') return "S1";
        if (simbolo == 'b') return "S4";
    }
    return "";
}


int main() {
    string estado = "S1";
    char cadena[20];

    cout << "Ingresa la cadena: ";
    cin >> cadena;

    int len = strlen(cadena);
    reverse(cadena, cadena + len);

    cout << "\nProcesando cadena (de derecha a izquierda): " << cadena << endl;
    cout << "Estado Inicial: " << estado << endl;

    
    for (int i = 0; i < len; i++) {
        char simbolo = cadena[i];
        string sigEstado = transicion(estado, simbolo);

        if (sigEstado == "") {
            cout << "Leyendo '" << simbolo << "' desde " << estado << " -> Transicion NO valida. Se detiene." << endl;
            cout << "Cadena NO valida." << endl;
            return 0;
        } else {
            cout << "Leyendo '" << simbolo << "' desde " << estado << " -> " << sigEstado << endl;
            estado = sigEstado;
        }
    }

   
    cout << "\nEstado final alcanzado: " << estado << endl;

    cout << "Cadena ACEPTADA (termina en " << estado << ")." << endl;

    return 0;
}
