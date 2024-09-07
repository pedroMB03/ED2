#include <stdio.h>
#include <stdlib.h>

void max_heapfy(int A[], int tamanho, int i){
    int l = 2 * i + 1; // verifica o filho a esquerda
    int r = 2 * i + 2; // verifica o filho a direita
    int largest = i; // diz o maior (o pai)

    if(l < tamanho && A[l] > A[largest] ){ // verifica se o filho é menor que o pai
        largest = l; // se não for, eles trocam
    }
    if (r < tamanho && A[r] > A[largest]){
        largest = r; // se não for, eles trocam
    }
    if(largest != i){ // Aqui eles fazem a troca e fazem recursão
        int temp = A[i];
        A[i] = A[largest];
        A[largest] = temp;
        max_heapfy(A, tamanho, largest);
    }
}

int main() { 
    int lista_numeros[] = {16, 14, 8, 10, 7, 9, 3, 2, 4, 1};
    int tamanho = sizeof(lista_numeros)/sizeof(lista_numeros[0]);

    printf("Lista de numeros não ordenados:");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", lista_numeros[i]);
    }
    printf("\n");

    max_heapfy(lista_numeros, tamanho, 2);

    printf("Lista de numeros ordenados: ");
    for (int k = 0; k < tamanho; k++) {
        printf("%d ", lista_numeros[k]);
    }
    printf("\n");
    return 0;
}