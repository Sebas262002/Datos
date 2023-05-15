#include <iostream>
#include <list>

int main() {
    // Crear una lista vacía de enteros
    std::list<int> miLista;

    // Agregar elementos a la lista
    miLista.push_back(1);
    miLista.push_back(2);
    miLista.push_back(3);

    // Recorrer la lista e imprimir cada elemento
    std::cout << "Elementos de la lista: ";
    for (auto it = miLista.begin(); it != miLista.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Eliminar un elemento de la lista
    miLista.erase(miLista.begin());

    // Insertar un elemento en la lista
    miLista.insert(miLista.begin(), 4);

    // Recorrer la lista e imprimir cada elemento nuevamente
    std::cout << "Elementos de la lista después de eliminar e insertar: ";
    for (auto it = miLista.begin(); it != miLista.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Ordenar la lista
    miLista.sort();

    // Recorrer la lista e imprimir cada elemento una vez más
    std::cout << "Elementos de la lista ordenados: ";
    for (auto it = miLista.begin(); it != miLista.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}