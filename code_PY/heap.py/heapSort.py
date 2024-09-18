# Implementação do código do MAX-heap Sort 

def max_heapfy(A,i):
    l = 2 * i + 1
    r = 2 * i + 2
    if l <= len(A) and A[l] > A[i]:
        largest = l
    else:
        largest = i
    if r <= len(A) and A[r] > A[i]:
        largest = r
    if largest != i:
        A[i], A[largest] = A[largest], A[i]
        max_heapfy(A, largest)

lista_numeros = [16, 14, 8, 10, 7, 9, 3, 2, 4, 1]
print("Lista de numeros não ordenados",lista_numeros)
max_heapfy(lista_numeros, 2)
print("Lista ordeanada: ", lista_numeros)