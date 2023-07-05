/*******************************************************
WinConsolaCasoEstudio_2_4
*******************************************************/
// Librerías.
#include <iostream>
#include <cstdlib>
#include <cmath>
// Directivas define o macros.
#define PI 3.141593
#define g 9.80665
using namespace std;
// Función principal.
int main()
{
// Declaración de variables.
float v = 0.0f; // Entrada: Velocidad inicial.
float theta = 0.0f; // Entrada: Ángulo de lanzamiento.
float d = 0.0f; // Salida: Distancia alcanzada.
float t = 0.0f; // Salida: Tiempo de vuelo.
float h = 0.0f; // Salida: Altura máxima.
// Imprimir un mensaje de información.
cout << "Tiro Parabólico de un Proyectil." << endl;
cout << endl;
// Leer el valor de la velocidad.
cout << "Ingrese el valor de la velocidad [m/seg]: ";
cin >> v;
// Leer el valor del ángulo theta.
cout << "Ingrese el valor del ángulo [grados]: ";
cin >> theta;
// Convertir el ángulo theta de grados a radianes.
theta = theta * PI / 180.0;
// Calcular la distancia alcanzada.
d = (pow(v, 2) * sin(2 * theta)) / g;
// Calcular el tiempo de vuelo.
t = (v * sin(theta)) / g;
// Calcular la altura máxima.
h = (pow(v, 2) * pow(sin(theta), 2)) / (2 * g);
cout << endl;
// Imprimir el valor de la distancia.
cout << "El valor de la distancia es: " << d << " m" << endl;
// Imprimir el valor del tiempo de vuelo.
cout << "El valor del tiempo de vuelo es: " << t << " seg" << endl;
// Imprimir el valor de la altura.
cout << "El valor de la altura es: " << h << " m" << endl;
// Incorporar una pausa en el programa.
system("pause");
return 0;
}
