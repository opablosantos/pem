#include <stdio.h>

/*
soma de 1/1 + 1/2 + 1/3 + ... 1/n-1
usando recursividade
*/

double expressao(int n) {
   
   if(n ==  1)  return 1.0;
   else return expressao(n-1) + 1.0/n;
}

int main() {
    
    printf("%lf", expressao(3));

    return 0;
}
