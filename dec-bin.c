#include <stdio.h>

int main() {
    
    int n, mult=1, soma=0;
    printf("Entre com um número na base decimal: ");
    scanf("%d", &n);
    while(n > 0) {
        soma += (n%2)*mult;
        n /= 2;
        mult *= 10;
    }
    printf("%d", soma);

    return 0;
}
