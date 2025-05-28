#include <iostream>

// Karen Alessandra Nuñez Garcia
// Octavo programa
// 26-05-2025
// Calcular la cantidad ahorrada por 15 años

int main(){
	double Dmensual = 15000.0;
	double saldo = 0.0;
	double interes = 0.037; //3% el interes mensual
	int meses = 15 * 12;  // 10 años es igual a 180 meses
	
	for(int mes = 1; mes <= meses; ++mes){
		saldo += Dmensual; //Deposito mensual
		saldo *=(1 + interes); //Interes mensual
	}
	
	printf("El saldo acumulado despues de 10 años es: $%.2f pesos\n", saldo);
	
	return 0;
}
