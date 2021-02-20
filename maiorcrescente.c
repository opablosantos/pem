#include <stdio.h>
int main()
{   int vet[] = {5, 10, 3, 2, 4, 7, 9, 8, 5}, N=9;
    int tam = 1;
    int maior = 1;
    int i = 1; //índice do segundo elemento
    while(i < N) {   
        if(vet[i] > vet[i-1]) {   
            tam++;
            if (tam>maior) {
                maior = tam;
            }
        }
        else {   
            tam = 1;
        }
        i++;
    }
    printf("O maior comprimento de um segmento crescente é %d", maior);
    return 0;
}