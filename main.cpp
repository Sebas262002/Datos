/*******************************************************
WinConsolaPrograma_2_31
*******************************************************/
// Librerías.
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
// Función principal.
int main()
{
int altura; // Entrada: Tamaño de la altura del triángulo.
int f; // Auxiliar: Número de filas.
int b; // Salida: Número de columnas de espacios en blanco.
int a; // Salida: Número de columnas de asteriscos.
// Leer el valor de la altura del triángulo isósceles.
cout << "Ingrese la altura del triángulo isósceles: ";
cin >> altura;
// Bucle externo for()
// Para:
// 1. Inicializar el valor de las filas 'f' en uno.
// 2. Mientras la condición (f <= lado) sea verdadera, ejecutar
// las sentencias del bucle externo.
// 3. Luego de cada ciclo incrementar el valor de las filas 'f' en uno.
for (f = 1; f <= altura; f++)
{
// Bucle interno for()
// Para:
// 1. Inicializar el valor de las columnas de blancos 'b' con
// el valor de la altura menos el número de filas.
// 2. Mientras la condición (b >= 1) sea verdadera, ejecutar
// las sentencias del bucle interno.
// 3. Luego de cada ciclo decrementar el valor de las columnas de
// blancos 'b' en uno.
for (b = altura - f; b >= 1; b--)
{
cout << " ";
}
// Bucle interno for()
// Para:
// 1. Inicializar el valor de las columnas de asteriscos 'a' en uno.
// 2. Mientras la condición (a <= 2 * f - 1) sea verdadera, ejecutar
// las sentencias del bucle interno.
// 3. Luego de cada ciclo incrementar el valor de las columnas de
// asteriscos 'a' en uno.
for (a = 1; a <= 2 * f - 1; a++)
{
// Imprimir un asterisco por columna.
cout << "*";
}
// Imprimir un salto de línea (INTRO).
cout << endl;
}
// Incorporar una pausa en el programa.
system("pause");
}
