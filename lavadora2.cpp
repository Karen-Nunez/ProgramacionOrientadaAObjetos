#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>

using namespace std;

const int apagado = 0;
const int inactivo = 1;
const int remojo = 2;
const int enjuague = 3;
const int drenaje = 4;
const int secado = 5;

const int regular = 0;
const int delicado = 1;
const int superDelicado = 2;

class Lavadora {
public:
    int estadoAc;
    int planSele;
    bool encendido;
    int tiempoT;

    Lavadora() {
        estadoAc = apagado;
        planSele = regular;
        encendido = false;
        tiempoT = 0;
    }

    void encenderLuz(string tipo) {
        cout << "Encendiendo luz: " << tipo << endl;
    }

    void realizarAccion(string accion) {
        cout << "Realizando: " << accion << endl;
    }

    void esperarTiempo(int segundos) {
        cout << "Esperando " << segundos << " segundos..." << endl;
        Sleep(segundos * 1000);
    }

    string obtenerNombrePlan() {
        switch(planSele) {
            case regular: return "Regular";
            case delicado: return "Delicado";
            case superDelicado: return "Super Delicado";
            default: return "No valido";
        }
    }

    string obtenerNombreEstado() {
        switch(estadoAc) {
            case apagado: return "Apagada";
            case inactivo: return "Inactiva";
            case remojo: return "Remojo";
            case enjuague: return "Enjuague";
            case drenaje: return "Drenaje";
            case secado: return "Secado";
            default: return "No valido";
        }
    }

    void encender() {
        if (!encendido) {
            encendido = true;
            estadoAc = inactivo;
            cout << "Lavadora encendida" << endl;
            cout << "Estado: " << obtenerNombreEstado() << endl;
        }
    }

    void apagar() {
        if (encendido) {
            encendido = false;
            estadoAc = apagado;
            cout << "Lavadora apagada" << endl;
        }
    }

    void seleccionarPlan(int nuevoPlan) {
        if (estadoAc == inactivo) {
            planSele = nuevoPlan;
            cout << "Plan seleccionado: " << obtenerNombrePlan() << endl;
        } else {
            cout << "No se puede cambiar el plan durante el lavado" << endl;
        }
    }

    void iniciarLavado() {
        if (estadoAc != inactivo) {
            cout << "No se puede iniciar lavado desde estado: " << obtenerNombreEstado() << endl;
            return;
        }

        cout << "\nIniciando ciclo de lavado - Plan: " << obtenerNombrePlan() << endl;

        ejecutarRemojo();
        ejecutarEnjuague();
        ejecutarDrenaje();
        ejecutarSecado();
        finalizarCiclo();
    }

    void mostrarEstado() {
        cout << "\nEstado: " << obtenerNombreEstado() << endl;
        cout << "Plan: " << obtenerNombrePlan() << endl;
        cout << "Encendida: " << (encendido ? "Si" : "No") << endl;
    }

    void mostrarMenu() {
        cout << "\n1. Encender lavadora" << endl;
        cout << "2. Apagar lavadora" << endl;
        cout << "3. Seleccionar plan Regular" << endl;
        cout << "4. Seleccionar plan Delicado" << endl;
        cout << "5. Seleccionar plan Super Delicado" << endl;
        cout << "6. Iniciar lavado" << endl;
        cout << "7. Mostrar estado" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
    }

private:
    void ejecutarRemojo() {
        estadoAc = remojo;
        encenderLuz("Remojo");
        realizarAccion("llenar tanque");
        esperarTiempo(5);
    }

    void ejecutarEnjuague() {
        estadoAc = enjuague;
        encenderLuz("Enjuague");
        realizarAccion("enjuagar");
        esperarTiempo(5);
    }

    void ejecutarDrenaje() {
        estadoAc = drenaje;
        encenderLuz("Drenaje");
        realizarAccion("drenar agua");
        esperarTiempo(5);
    }

    void ejecutarSecado() {
        estadoAc = secado;
        encenderLuz("Secado");
        realizarAccion("centrifugado");
        esperarTiempo(5);
    }

    void finalizarCiclo() {
        cout << "Lavado terminado exitosamente!" << endl;
        estadoAc = inactivo;
        encenderLuz("Finalizado");
    }
};

int main() {
    Lavadora miLavadora;
    int opcion;

    do {
        miLavadora.mostrarMenu();
        cin >> opcion;

        switch(opcion) {
            case 1: miLavadora.encender(); break;
            case 2: miLavadora.apagar(); break;
            case 3: miLavadora.seleccionarPlan(regular); break;
            case 4: miLavadora.seleccionarPlan(delicado); break;
            case 5: miLavadora.seleccionarPlan(superDelicado); break;
            case 6: miLavadora.iniciarLavado(); break;
            case 7: miLavadora.mostrarEstado(); break;
            case 0: break;
            default: cout << "Opcion invalida" << endl; break;
        }

        if (opcion != 0) {
            cout << "\nPresione Enter para continuar...";
            cin.ignore();
            cin.get();
        }

    } while(opcion != 0);

    return 0;
}
