def quick_sort(arr):
    if len(arr) <= 1: # Para sair da recurisividade
        return arr
    pivo = arr[-1]

    lado_Esquerdo = []
    lado_Direito = []

    for numero in arr[:-1]:
        if numero <= pivo:
            lado_Esquerdo.append(numero)
        else:
            lado_Direito.append(numero)

    return quick_sort(lado_Esquerdo) + [pivo] + quick_sort(lado_Direito)

lista_numeros = [10, 80, 30, 90, 40, 50, 70]
print("Lista de numeros não ordenados: ", lista_numeros)
lista_ordenada = quick_sort(lista_numeros)
print("Lista de numeros ordenados: ", lista_ordenada)
