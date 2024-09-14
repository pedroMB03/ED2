def insertionsort(arr):
    for i in range (1, len(arr)):
        chave = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > chave:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = chave
    return arr

lista_numeros = [29, 10, 14, 37, 13]
print("Lista de numeros desordenados: ", lista_numeros)

insertionsort(lista_numeros)
print("Lista de numeros ordenados: ", lista_numeros)