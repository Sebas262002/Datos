class Nodo:
    def __init__(self, valor):
        self.valor = valor
        self.izquierdo = None
        self.derecho = None

def encontrar_minimo(arbol):
    if arbol.izquierdo is None:
        return arbol
    return encontrar_minimo(arbol.izquierdo)

def eliminar_valor(arbol, valor):
    if arbol is None:
        return arbol
    
    if valor < arbol.valor:
        arbol.izquierdo = eliminar_valor(arbol.izquierdo, valor)
    elif valor > arbol.valor:
        arbol.derecho = eliminar_valor(arbol.derecho, valor)
    else:
        if arbol.izquierdo is None:
            return arbol.derecho
        elif arbol.derecho is None:
            return arbol.izquierdo
        else:
            minimo = encontrar_minimo(arbol.derecho)
            arbol.valor = minimo.valor
            arbol.derecho = eliminar_valor(arbol.derecho, minimo.valor)
    
    return arbol

# Ejemplo de uso
# Creamos un árbol binario de ejemplo
arbol = Nodo(5)
arbol.izquierdo = Nodo(3)
arbol.derecho = Nodo(8)
arbol.izquierdo.izquierdo = Nodo(2)
arbol.izquierdo.derecho = Nodo(4)
arbol.derecho.izquierdo = Nodo(6)
arbol.derecho.derecho = Nodo(9)

# Eliminamos el valor 4 del árbol
valor_eliminar = 4
arbol = eliminar_valor(arbol, valor_eliminar)

# Verificamos el resultado imprimiendo el árbol modificado
def imprimir_arbol(arbol):
    if arbol is not None:
        imprimir_arbol(arbol.izquierdo)
        print(arbol.valor, end=" ")
        imprimir_arbol(arbol.derecho)

print("Árbol modificado:")
imprimir_arbol(arbol)
