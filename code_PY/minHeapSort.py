def min_heapfy(A, i):
    l = 2 * i + 1  # Filho esquerdo
    r = 2 * i + 2  # Filho direito
    smallest = i
    if l < len(A) and A[l] < A[smallest]:
        smallest = l
    if r < len(A) and A[r] < A[smallest]:
        smallest = r
    if smallest != i:
        A[i], A[smallest] = A[smallest], A[i]
        min_heapfy(A, smallest)

def build_min_heap(A):
    n = len(A)
    for i in range(n // 2 - 1, -1, -1):
        min_heapfy(A, i)

lista_numeros = [6, 12, 7, 10, 15, 17]
print("Lista de números não ordenados: ", lista_numeros)

build_min_heap(lista_numeros)
print("Lista após build_min_heap: ", lista_numeros)
