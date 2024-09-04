def selectionsort(lista):
    for i in range(len(lista)): #percorre toda a lista
        indice_menor = i #pega o menor valor da lista
        for j in range(i+1, len(lista)): # percorre todos itens da lista que não estão ordenados
            if lista[j] < lista[indice_menor]: # verifica se realmente o indice_menor é o menor num
                indice_menor = j

        lista[i], lista[indice_menor] = lista[indice_menor], lista[i] # faz a troca dentro da lista


lista_numeros = [ 65, 45, 12, 24, 11]
print("Lista original:", lista_numeros)

selectionsort(lista_numeros)
print("Lista ordenada:", lista_numeros)