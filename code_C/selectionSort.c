#include <stdio.h>
#include <stdlib.h>

void selectionsort(int a[], int n){
    int i,j, min_idc;
    int temp = a[0];
    for (int i = 0; i < n - 1; i++) {
        min_idc = i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j] > a[min_idc]){
                min_idc = j;
            }
        }
        //Troca o menor elemento encontrado com a outra posição
        temp = a[min_idc];
        a[min_idc] = a[i];
        a[i] = temp;
    }
    
}

int main(){
    int n;
    printf("Digite a quantidade de numeros da sequência: ");
    scanf("%d", &n);
    int a[n];
    printf("Digite os numeros da sequência: \n");
    for(int i; i < n; i++){
        scanf("%d\n", &a[i]);
    }
    selectionsort(a, n);

    printf("Sequência ordenada: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }
    printf("\n");
    return 0;
}