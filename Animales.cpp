#include <iostream>
#include <string>
#include <cstdio>

//Karen Alessandra Nuñez Garcia
//Cuarto programa
//14-05-2025
//Crear las clases y objetos de los animales

using namespace std;

class Animal
{
	public:
		string color; 
		string raza;
		
		void comer(){
			printf("El %s esta comiendo.\n", raza.c_str());
		}
		
		void dormir(){
			printf("El %s esta durmiendo.\n", raza.c_str());
		}
		
		void mover(){
			printf("El %s esta moviendo.\n", raza.c_str());
		}
};

class Vertebrado : public Animal
{
	public:
		string patas;
		string cola;
		
		Vertebrado()
		{
		patas = "4";
		cola = "Si";
	    }
};

class Invertebrados : public Animal
{
	public:
		string huesos;
		string columna;
		
		Invertebrados()
		{
		huesos = "No";
		columna = "No";
	    }	
};

int main()
{
	Vertebrado perro; //Perro
	perro.raza = "Pastor Belga";
	perro.color = "Cafe";
	
	printf("\033[34mVertebrado \033[0m\n");
	printf("\033[96mPerro \033[0m\n");
	printf("Raza: %s\n", perro.raza.c_str());
	printf("Color: %s\n", perro.color.c_str());
	printf("Patas: %s\n", perro.patas.c_str());
	printf("Cola: %s\n", perro.cola.c_str());
	perro.comer();
	perro.dormir();
	perro.mover();
	printf("\n");
	
	
	Vertebrado gato; //Gato
	gato.raza = "Bombay";
	gato.color = "Negro";
	
	printf("\033[34mVertebrado \033[0m\n");
	printf("\033[96mGato \033[0m\n");
	printf("Raza: %s\n", gato.raza.c_str());
	printf("Color: %s\n", gato.color.c_str());
	printf("Patas: %s\n", gato.patas.c_str());
	printf("Cola: %s\n", gato.cola.c_str());
	gato.comer();
	gato.dormir();
	gato.mover();
	printf("\n");
	
	
	Vertebrado jirafa; //Jirafa
	jirafa.raza = "Nubia";
	jirafa.color = "Amarillo con manchas grandes y claras";
	
	printf("\033[34mVertebrado \033[0m\n");
	printf("\033[96mJirafa \033[0m\n");
	printf("Raza: %s\n", jirafa.raza.c_str());
	printf("Color: %s\n", jirafa.color.c_str());
	printf("Patas: %s\n", jirafa.patas.c_str());
	printf("Cola: %s\n", jirafa.cola.c_str());
	jirafa.comer();
	jirafa.dormir();
	jirafa.mover();
	printf("\n");
	
	
	Vertebrado elefante; //Elefante
	elefante.raza = "Africano de sabana";
	elefante.color = "Gris oscuro con tonos tierra";
	
	printf("\033[34mVertebrado \033[0m\n");
	printf("\033[96mElefante \033[0m\n");
	printf("Raza: %s\n", elefante.raza.c_str());
	printf("Color: %s\n", elefante.color.c_str());
	printf("Patas: %s\n", elefante.patas.c_str());
	printf("Cola: %s\n", elefante.cola.c_str());
	elefante.comer();
	elefante.dormir();
	elefante.mover();
	printf("\n");
	
	
	Vertebrado leon; //Leon
	leon.raza = "León africano (Panthera leo leo)";
	leon.color = "Beige claro, dorado o arenoso";
	
	printf("\033[34mVertebrado \033[0m\n");
	printf("\033[96mLeon \033[0m\n");
	printf("Raza: %s\n", leon.raza.c_str());
	printf("Color: %s\n", leon.color.c_str());
	printf("Patas: %s\n", leon.patas.c_str());
	printf("Cola: %s\n", leon.cola.c_str());
	leon.comer();
	leon.dormir();
	leon.mover();
	printf("\n");
	
	Invertebrados gusano; //Gusano
	gusano.raza = "Lombriz de tierra";
	gusano.color = "Marron rojizo";
	
	printf("\033[34mInvertebrado \033[0m\n");
	printf("\033[96mGusano \033[0m\n");
	printf("Raza: %s\n", gusano.raza.c_str());
	printf("Color: %s\n", gusano.color.c_str());
	printf("Columna: %s\n", gusano.columna.c_str());
	printf("Huesos: %s\n", gusano.huesos.c_str());
	gusano.comer();
	gusano.dormir();
	gusano.mover();
	printf("\n");
	
	
	return 0;
}
