#include <string>
#include <cstdio>
#include <cstring>
using namespace std;

//Karen Alessandra Nuñez Garcia
//Quinto programa
//19-05-2025
//Definir la clase deporte y dependiendo donde toque el cuerpo el balon

class Deporte
{
	public:
		char nombre[10]; 
		Deporte(const char* _nombre)
		{
			strncpy(nombre, _nombre, sizeof(_nombre));
			nombre[sizeof(nombre)-1] = '\0';
		}
		
		void Puntuacion(){
			printf("-La puntuacion marca que equipo gano.\n");
		}
		
		void Equipo(){
			printf("-El equipo esta en la cancha.\n");
		}
		
		void Balon(){
			printf("-El balon esta en la cancha.\n");
		}
		
		void Reglas(){
			printf("-Las reglas se aplican en el partido.\n");
		}
};

class ConPies : public Deporte
{
	public:
		ConPies(const char* _nombre) : Deporte(_nombre){}
		
		void patear(){
		printf("-Se patea el balon con el pie.\n");
	    }
	    
	    void correr(){
		printf("-Se corre con el balon por la cancha.\n");
	    }
	    
	    void pasar(){
		printf("-Se pasa el balon a un compañero del equipo.\n");
	    }
	    
	    void gol(){
		printf("-Un compañero patea el balon hasta la porteria contraria.\n");
	    }
};

class ConManos : public Deporte
{
	public:
		ConManos(const char* _nombre) : Deporte(_nombre){}
	
	    void remate(){
		printf("-Se golpea el balon al campo contrario.\n");
	    }
	    
	    void bloqueo(){
		printf("-Se salta cerca de la red para bloquear el ataque.\n");
	    }
	    
	    void rotacion(){
		printf("-Cambian de posicion en la cancha.\n");
	    }
	    
	    void saque(){
		printf("-Se lanza el balon al aire y enviandolo al campo contrario.\n");
	    }
};

int main()
{
	ConPies futbol("Futbol"); 
	printf("\033[34mFutbol \033[0m\n");
	futbol.correr();
	futbol.Equipo();
	futbol.Puntuacion();
	futbol.Balon();
	futbol.gol();
	futbol.pasar();
	futbol.patear();
	futbol.Reglas();
	printf("\n");
	
	ConManos voleibol("Voleibol"); 
	printf("\033[34mVoleibol \033[0m\n");
	voleibol.remate();
	voleibol.Equipo();
	voleibol.Puntuacion();
	voleibol.Balon();
    voleibol.Reglas();
    voleibol.bloqueo();
    voleibol.rotacion();
    voleibol.saque();
	
	
	return 0;
}
