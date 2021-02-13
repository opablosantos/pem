#include <stdio.h>

int main()
{   
    int n, soma, i;
    
    for(n=1; n<=10000; n++) {
        soma = 0;
        for(i=1; i<n; i++) {
            if(n%i == 0) {
                soma += i;
            }
        }
        if(n == soma) printf("%d é perfeito\n", n);
    }
    return 0;
}