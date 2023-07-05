#include <iostream>
using namespace std;

// Definición de la estructura Nodo
#include <iostream>

using namespace std;
//Esta estructura deberá tener como atributos el tamaño de la memoria y
//un puntero que representará la memoria dinámica
struct MemoriaDinamica {
    size_t tamano; //tamanio
    int* puntero; //puntero que apunta a la memoria
};

//reserva l
void reservar_memoria(MemoriaDinamica& memoria, size_t tamano) {
    memoria.tamano = tamano;
    memoria.puntero = new int[tamano];
}

void escribir_memoria(MemoriaDinamica& memoria, size_t posicion, int valor) {
    if (posicion < memoria.tamano) {
        memoria.puntero[posicion] = valor;
    }
}

int leer_memoria(MemoriaDinamica& memoria, size_t posicion) {
    if (posicion < memoria.tamano) {
        return memoria.puntero[posicion];
    } else {
        return -1; // En caso de que la posición sea inválida
    }
}

void liberar_memoria(MemoriaDinamica& memoria) {
    delete[] memoria.puntero;
}

int main() {
    MemoriaDinamica memoria;
    size_t tamano = 9;
    reservar_memoria(memoria, tamano);

    // Escribir algunos valores en la memoria
    escribir_memoria(memoria, 0, 1);
    escribir_memoria(memoria, 3, 7);
    escribir_memoria(memoria, 9, 100);

    // Leer los valores de la memoria y mostrarlos por pantalla
    for (size_t i = 0; i < tamano; i++) {
        cout << "Valor en la posición " << i << ": " << leer_memoria(memoria, i) << endl;
    }

    liberar_memoria(memoria);
    return 0;
}