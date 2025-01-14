#include <stdio.h>
#include <stdlib.h>

int particione(int *v, int inicio, int fim){
    int pivo = (v[inicio] + v[fim] + v[(inicio+fim)/2])/3;
    while(inicio < fim){
        while(inicio < fim && v[inicio] <= pivo)
            inicio++;
        while(inicio < fim && v[fim] >= pivo)
            fim--;
        int temp = v[inicio];
        v[inicio] = v[fim];
        v[fim] = temp;
    }
    return inicio; // retorna o valor que esta na posição correta
}

void quicksort(int *v, int inicio, int fim){
    if(inicio < fim){
        int cert = particione(v, inicio, fim); // salva o valor certo
        quicksort(v, inicio, cert - 1); // quebra o vetor ate que fique uma
        quicksort(v, cert, fim);
    }
}

void print(int *v, int tam){
    int i;
    for (i = 0; i < tam; i++){
        printf("%d, ", v[i]);
    } printf("\n");
}

int main(){
    int tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int v[tam];

    printf("digite os numeros do vetor: \n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &v[i]);
    }

    int inicio = 0;
    int fim = tam - 1;
    printf("Vetor nao ordenado: \n");
    print(v, tam);

    quicksort(v, inicio, fim);
    quicksort(v, inicio, fim);

    printf("Vetor ordenado: \n");
    print(v, tam);
    return 0;
}