class Nodo:
    def __init__(self, valor):
        self.valor = valor
        self.izquierdo = None
        self.derecho = None

def contar_nodos(arbol):
    if arbol is None:
        return 0
    else:
        return 1 + contar_nodos(arbol.izquierdo) + contar_nodos(arbol.derecho)

# Ejemplo de uso
# Creamos un árbol binario de ejemplo
arbol = Nodo(1)
arbol.izquierdo = Nodo(2)
arbol.derecho = Nodo(3)
arbol.izquierdo.izquierdo = Nodo(4)
arbol.izquierdo.derecho = Nodo(5)
arbol.derecho.izquierdo = Nodo(6)

# Llamamos a la función contar_nodos para obtener la cantidad total de nodos en el árbol
cantidad_nodos = contar_nodos(arbol)
print("Cantidad de nodos:", cantidad_nodos)