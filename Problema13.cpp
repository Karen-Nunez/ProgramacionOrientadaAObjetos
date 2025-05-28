#include <iostream>
// Karen Alessandra Nu�ez Garcia
// Septimo programa
// 26-05-2025
// Calcular la cantidad ahorrada por 10 a�os

int main(){
	double Dmensual = 1000.0;
	double saldo = 0.0;
	double interes = 0.03; //3% el interes mensual
	int meses = 10 * 12;  // 10 a�os es igual a 120 meses
	
	for(int mes = 1; mes <= meses; ++mes){
		saldo += Dmensual; //Deposito mensual
		saldo *=(1 + interes); //Interes mensual
	}
	
	printf("El saldo acumulado despues de 10 a�os es: $%.2f\n", saldo);
	
	return 0;
}
