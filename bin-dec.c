#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{   
    int bin, dig, pot = 1, soma = 0;
    bool erro = false;
    printf("Digite um número binário: ");
    scanf("%d", &bin);
    
    while(bin > 0) {
        dig = bin % 10;
        if(dig!=0 && dig!=1) {
            erro = true;
            break;
        }
        bin /= 10;
        soma += (pot*dig);
        pot *= 2;
    }
    if(erro) printf("Número digitado não pertence à base binária!\n");
    else printf("O decimal é: %d\n", soma);
    
    
    return 0;
}
