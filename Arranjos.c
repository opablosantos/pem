#include <stdio.h>

int fatorial (int x) {
    int resposta = 1;
    int i;
    for (i=2; i<=x; i++) {
        resposta *= i;
    }
    return resposta;
}

int main() {
    int n, p, a;
    printf("\nEntre com o número de elementos: ");
    scanf("%d", &n);
    printf("\nEntre com o tamanho dos grupos: ");
    scanf("%d", &p);
    //An,p = n! / (n-p)!
    a = fatorial(n) / fatorial(n-p);
    printf("\nHaverá %d arranjos simples\n", a);

    return 0;
}

