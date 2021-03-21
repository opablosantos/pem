#include <stdio.h>
int main() {   
    int N;
    printf("Qual é o número de linhas do triângulo? ");
    scanf("%d", &N);
    int vet[N];
    int l, c;
    for(l=0; l<N; l++) {   
        for(c=l; c>=0; c--) {   
            if(c==0) {
                vet[c]=1;
            }
            else if(l == c) {
                vet[c]=1;
            }
            else {
                vet[c] = vet[c]+vet[c-1];
            }
            printf("%4d", vet[c]);
        }
        printf("\n");
    }
    
    return 0;
}
