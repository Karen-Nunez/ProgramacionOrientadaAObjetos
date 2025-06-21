#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// Karen Alessandra Nuñez Garcia
// Programa #11
// 03-06-2025
// Pasar el laberinto

using namespace std;
class Laberinto
{
	public:
	vector<string> laberinto; // El laberinto completo, cada string es una fila
	int filas, columnas;
	
		Laberinto() : filas(0), columnas(0) {}
	bool LeerLab(const string& nombreArchivo)
	{
		ifstream archivo(nombreArchivo.c_str());
		if (!archivo.is_open()) 
		{
			std::cerr << "No se pudo abrir el archivo: \n" << nombreArchivo << std::endl;
            return false;
        }
        
        string linea;
        filas = 0;
        columnas = 0;
        laberinto.clear();
		
		while (getline(archivo, linea)) 
		{
			 if (linea.length() > columnas) columnas = linea.length();
            laberinto.push_back(linea);
        }
        
        for (size_t i = 0; i < laberinto.size(); ++i) 
		{
        if (laberinto[i].length() < columnas) 
	    {
        laberinto[i] += string(columnas - laberinto[i].length(), ' ');
        }
        }

		archivo.close();
		
		filas = laberinto.size();  // <--- Aquí asignar filas correctamente
		 cout << "\033[1;36mContenido del archivo: " << nombreArchivo << "\033[0m\n" << endl;
        return true;
    }
		
		 // Imprimir el laberinto para verlo
        void mostrarLaberinto() const 
	    {
        for (size_t i = 0; i < laberinto.size(); ++i) 
		{
          cout << laberinto[i] << endl;
        }
        cout << "\nFilas: " << filas << " | Columnas: " << columnas << endl;
        }
     
      bool dfs(int x, int y, vector<vector<char> >& visitado)
	 {
    // Fuera de límites o pared o visitado
    if (x < 0 || y < 0 || x >= filas || y >= columnas) return false;
    if (laberinto[x][y] == '|' || laberinto[x][y] == '-' || visitado[x][y] == '1') return false;

    // Si encontramos la salida
    if (laberinto[x][y] == 'S') return true;

    visitado[x][y] = '1';

    // Marcar el camino visualmente
    if (laberinto[x][y] != 'E') laberinto[x][y] = '.';

    // Direcciones: arriba, abajo, izquierda, derecha
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    for (int i = 0; i < 4; ++i) 
	{
        if (dfs(x + dx[i], y + dy[i], visitado)) return true;
    }

    // Si no hay salida, retroceder (opcional: desmarcar el paso)
    if (laberinto[x][y] != 'E') laberinto[x][y] = ' ';
    return false;
    }

bool resolverLaberinto()
 {
    int startX = -1, startY = -1;

    // Buscar la posición de 'E' (entrada)
    for (int i = 0; i < filas; ++i) 
	{
        for (int j = 0; j < laberinto[i].size(); ++j) 
		{
            if (laberinto[i][j] == 'E') 
			{
                startX = i;
                startY = j;
                break;
            }
        }
        if (startX != -1) break;
    }

    if (startX == -1) 
    {
      cout << "No se encontró la entrada 'E'." << endl;
      return false;
   }
    cout << "Entrada encontrada en: (" << startX << ", " << startY << ")" << endl;


   vector<vector<char> > visitado(filas, vector<char>(columnas, '0'));
    return dfs(startX, startY, visitado);
    }
};
int main()
{
    Laberinto lab;

    if (lab.LeerLab("Laberinto.txt")) 
    {
        cout << "Laberinto cargado con exito." << endl;
        lab.mostrarLaberinto();  // Muestra el laberinto cargado
    } 
    else 
    {
        cout << "Error al cargar el laberinto." << endl;
        return 1;
    }
    
    if (lab.resolverLaberinto()) 
    {
        cout << "\nCamino encontrado:\n";
        lab.mostrarLaberinto();
    } 
    else 
    {
        cout << "No se encontró un camino desde la entrada hasta la salida.\n";
    }

    return 0;
}

