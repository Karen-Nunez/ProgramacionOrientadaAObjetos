#include <iostream>

// Karen Alessandra Nu�ez Garcia
// Octavo programa
// 26-05-2025
// Calcular la cantidad ahorrada por 15 a�os

int main(){
	double Dmensual = 15000.0;
	double saldo = 0.0;
	double interes = 0.037; //3% el interes mensual
	int meses = 15 * 12;  // 10 a�os es igual a 180 meses
	
	for(int mes = 1; mes <= meses; ++mes){
		saldo += Dmensual; //Deposito mensual
		saldo *=(1 + interes); //Interes mensual
	}
	
	printf("El saldo acumulado despues de 10 a�os es: $%.2f pesos\n", saldo);
	
	return 0;
}
