#include <iostream>
using namespace std;

// Definición de la estructura Nodo
struct Nodo {
    int valor;
    Nodo* siguiente;
};

int main() {
    // Creamos los nodos
    Nodo* primero = new Nodo();
    Nodo* segundo = new Nodo();
    Nodo* tercero = new Nodo();

    // Asignamos valores y referencias
    primero->valor = 1;
    primero->siguiente = segundo;
    segundo->valor = 2;
    segundo->siguiente = tercero;
    tercero->valor = 3;
    tercero->siguiente = NULL;

    // Recorremos la lista e imprimimos los valores
    Nodo* actual = primero;
    while (actual != NULL) {
        cout << actual->valor << " ";
        actual = actual->siguiente;
    }
    cout << endl;

    // Liberamos la memoria
    delete primero;
    delete segundo;
    delete tercero;

    return 0;
}