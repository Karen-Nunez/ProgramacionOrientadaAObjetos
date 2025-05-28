#include <iostream>
#include <cstdio>

//Karen Alessandra Nuñez Garcia
//tercer programa
//12-05-2025
//Se debe de calcular el area del triangulo de los diferentes tipos

int main()
{
	printf("Calcula el area del triangulo\n");
	
	float base, altura, resultado;
	printf("Ingresa la base: \n");
	scanf("%f", &base);
	printf("Ingresa la altura: \n");
	scanf("%f", &altura);
	
	resultado = base * altura / 2;
	printf("El resultado es: %.2f\n", resultado);
	
	return 0;
}
