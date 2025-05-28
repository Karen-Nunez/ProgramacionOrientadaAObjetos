#include <iostream>
#include <cstdio>

//Karen Alessandra Nuñez Garcia
//Primer programa
//08-05-2025
//Se debe de calcular el area o perimetro del circulo, pero al momento de ejecutar solo elegir uno

int main()
{
	printf("Calcula el area del circulo\n");
	
	float radio;
	int opcion;
	printf("Ingresa el radio: \n");
	scanf("%f", &radio);
	
	printf("1- Perimetro\n");
      printf("2- Area\n");
      printf("Seleciona una de las opciones\n");
      scanf("%d", &opcion);
      
	switch(opcion)
	{
		float resultado;
		
		case 1:
			resultado = 2 * 3.1416 * radio;
			printf("El perimetro es: %.2f\n", resultado);
			break;
		
		case 2:
			resultado = 3.1416 * radio * radio;
			printf("El area es: %.2f\n", resultado);
			break;
			
		default:
			printf("Opcion invalida\n");
			break;
	}
	
}
