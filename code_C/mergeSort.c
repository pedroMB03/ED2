#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mergesort(int *v, int inicio, int fim){  // Função para separar o vetor inicial e chamar a função de juntar
    int meio;
    if( inicio < fim){
        meio = floor((inicio + fim)/ 2);
        mergesort(v, inicio, meio); // inicia o processo de divisão do vetor
        mergesort(v, meio + 1, fim);
        merge(v, inicio, meio, fim); // inicia o processo de união das partes dos vetores
    }
}

void merge(int *v, int inicio, int meio, int fim){
    int *temp, p1, p2, tam; // cria as variaveis temporaveis e a de tamanho
    int fimP1 = 0, fimP2 = 0; // cria as variaveis relacionadas ao tamanhos de p1 e p2 
    tam = fim - inicio + 1;
    p1 = inicio; // define o ponto inicial de cada vetor dividido e organizado
    p2 = meio + 1; // idem
    temp = (int *)malloc(tam * sizeof(int)); // cria um ponteiro para o vetor temporário
    if(temp != NULL){ // se a função temporária estiver vazia
        for (int i = 0; i < tam; i++){
            if(!fimP1 && !fimP2){ // se os vetores de apoio ainda não chegaram ao fim
                if(v[p1] < v[p2]){ // qual dos dois vetores tem o menor numero
                    temp[i] = v[p1++]; // adiciona o menor
                } else {
                    temp[i] = v[p2++]; // adiciona o menor
                }
                if(p1 > meio) fimP1 = 1; // se o vetor p1 já acabou
                if(p2 > fim) fimP2 = 1; // se o vetor p2 já acabou
            } else {
                if (!fimP1) temp[i] = v[p1++]; // adiciona o que sobrou do vetor
                else{
                    temp[i] = v[p2++]; // idem
                }
            }
        }
        int k;
        for (int j = 0, k = inicio; j < tam; j++, k++) {
            v[k] = temp[j]; // jogar o valores de volta no vetor inicial
        }
        free(temp);
    } 
}

int main(){
    int n;
    int inicio;
    int fim;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];
    printf("Adicione os valores do vetor: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        inicio = v[0];
        if(n == i +1){
            fim = v[i];
        }
    }
    mergesort(*v, inicio, fim);

    printf("O vetor ordenado é:  ");
    for (int k = 0; k < n; k++) {
        print("%d ", v[k]);
    }
    printf("\n");
    return 0;
}