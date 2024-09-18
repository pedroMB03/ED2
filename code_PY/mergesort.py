def merge_sort(arr):
    if len(arr) > 1:
        meio = len(arr)//2

        lado_Direito = arr[:meio]
        lado_Esquerdo = arr[meio:]

        merge_sort(lado_Esquerdo)
        merge_sort(lado_Direito)

        i = 0
        j = 0
        k = 0
        
        #MESCLAGEM
        while i < len(lado_Esquerdo) and j < len(lado_Direito):
            if lado_Esquerdo[i] < lado_Direito[j]:
                arr[k] = lado_Esquerdo[i]
                i += 1
            else:
                arr[k] = lado_Direito[j]
                j += 1
            k += 1

        while i < len(lado_Esquerdo):
            arr[k] = lado_Esquerdo[i]
            i += 1
            k += 1

        while j < len(lado_Direito):
            arr[k] = lado_Direito[j]
            j += 1
            k += 1

lista_numeros = [38, 27, 43, 3, 9, 82, 10]
print("Lista de numeros não ordenados: ", lista_numeros)
merge_sort(lista_numeros)
print("Lista de numeros ordenados: ", lista_numeros)
