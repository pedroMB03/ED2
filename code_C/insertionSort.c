//Aqui é o código do método insertion Sort

#include <stdio.h>
#include <stdlib.h>

void insertionsort(int a[], int n) {
    int i, j, chave;

    for (j = 1; j < n; j++){
        chave = a[j];
        i = j - 1;
        while(i >= 0 && a[i] > chave){
            a[i + 1] = a[i]; // desloca
            i--;
        }    
        a[i + 1] = chave; // insere
    }
}

int main(){
    int n;

    printf("Digite quantos numeros são: ");
    scanf("%d", &n);

    int a[n];
    printf("Digite a sequência de numeros:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    insertionsort(a, n);

    printf("\n A sequência de numeros ordenados é: ");
    for (int k; k < n; k++) {
        printf("%d ", a[k]);
    }
    
    printf("\n");
    return 0;
}