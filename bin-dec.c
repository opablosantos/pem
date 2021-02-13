#include <stdio.h>
#include <math.h>

int main()
{   
    int bin, dig, pot = 1, soma = 0;
    printf("Digite um número binário: ");
    scanf("%d", &bin);
    while(bin > 0) {
        dig = bin % 10;
        bin /= 10;
        soma += (pot*dig);
        pot *= 2;
    }
    printf("O decimal é: %d\n", soma);
    
    
    return 0;
}