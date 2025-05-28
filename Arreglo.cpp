#include <iostream>

// Karen Alessandra Nuñez Garcia
// Noveno programa
// 28-05-2025
// Que capture 10 valores, se oreden en un arreglo de manera ascendente y los imprima 

using namespace std;

int main() {
    const int TAM = 10;
    int numeros[TAM];

    //Capturar los 10 números
    printf("Ingresa 10 numeros: \n");
    for (int i = 0; i < TAM; i++) {
    	printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    //Ordenar el arreglo en forma ascendente usando bubble sort
    for (int i = 0; i < TAM - 1; i++) {
        for (int j = 0; j < TAM - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                // Intercambiar valores
                int inter = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = inter;
            }
        }
    }

    // Imprimir los números ordenados
    printf("\nNumeros ordenados en forma ascendente: ");
    for (int i = 0; i < TAM; i++) {
    	printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
