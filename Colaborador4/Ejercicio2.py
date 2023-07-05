class Nodo:
    def __init__(self, valor):
        self.valor = valor
        self.izquierdo = None
        self.derecho = None

def buscar_valor(arbol, valor):
    if arbol is None:
        return False
    elif arbol.valor == valor:
        return True
    elif valor < arbol.valor:
        return buscar_valor(arbol.izquierdo, valor)
    else:
        return buscar_valor(arbol.derecho, valor)

# Ejemplo de uso
# Creamos un árbol binario de ejemplo
arbol = Nodo(5)
arbol.izquierdo = Nodo(3)
arbol.derecho = Nodo(8)
arbol.izquierdo.izquierdo = Nodo(2)
arbol.izquierdo.derecho = Nodo(4)
arbol.derecho.izquierdo = Nodo(6)
arbol.derecho.derecho = Nodo(9)

# Llamamos a la función buscar_valor para buscar el valor 4 en el árbol
valor_buscado = 4
encontrado = buscar_valor(arbol, valor_buscado)

if encontrado:
    print("El valor", valor_buscado, "se encuentra en el árbol.")
else:
    print("El valor", valor_buscado, "no se encuentra en el árbol.")