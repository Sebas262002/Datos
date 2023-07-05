#include <iostream>
#include <stack> // Incluimos la biblioteca stack

using namespace std;

int main() {
    stack<int> pila; // Declaramos la pila de tipo int

    // Agregamos elementos a la pila utilizando el método push()
    pila.push(1);
    pila.push(2);
    pila.push(3);

    // Mostramos el tamaño de la pila utilizando el método size()
    cout << "El tamaño de la pila es: " << pila.size() << endl;

    // Accedemos al elemento en la cima de la pila utilizando el método top()
    cout << "El elemento en la cima de la pila es: " << pila.top() << endl;

    // Eliminamos el elemento en la cima de la pila utilizando el método pop()
    pila.pop();

    // Mostramos el tamaño de la pila nuevamente
    cout << "El tamaño de la pila es ahora: " << pila.size() << endl;

    return 0;
}