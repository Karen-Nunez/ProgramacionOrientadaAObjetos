#include <iostream>
#include <fstream>
#include <string>

// Karen Alessandra Nuñez Garcia
// Noveno programa
// 30-05-2025
// Leer un archivo

int main() {
    // Nombre del archivo a leer (debe estar en la misma carpeta que el ejecutable)
    std::string nombreArchivo = "Tulipanes.txt";

    // Crear objeto ifstream para abrir el archivo
    std::ifstream archivo(nombreArchivo.c_str());

    // Verificar si se abrió correctamente
    if (!archivo.is_open()) {
        std::cerr << "No se pudo abrir el archivo: \n" << nombreArchivo << std::endl;
        return 1; // Salir con código de error
    }
    
    // Código ANSI para color (amarillo brillante, por ejemplo)
    std::string colorAmarillo = "\033[1;36m";
    std::string resetColor = "\033[0m";

    std::cout << "Contenido de: " 
              << colorAmarillo << nombreArchivo << resetColor 
              << " \n" << std::endl;

    std::string linea;

    // Leer línea por línea hasta el final del archivo
    while (std::getline(archivo, linea)) {
        std::cout << linea << std::endl; // Imprimir cada línea en consola
    }
    // Cerrar el archivo
    archivo.close();

    std::cout << "\nLectura finalizada correctamente." << std::endl;

    return 0; // Salir exitosamente
}

