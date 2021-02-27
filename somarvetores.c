#include <stdio.h>

int main() {
    int vet1[]={1, 5, 2, 4, 3, 4, 2, 8}, N=8;
    int vet2[]={7, 3, 3, 2, 5, 7, 3, 3};
    int vet3[N+1];
    int i, vaium = 0, somaaux;
    
    for(i=0; i<N; i++) {
        somaaux = vet1[i] + vet2[i] + vaium;
        vet3[i] = somaaux % 10;
        vaium = somaaux / 10;
    }
    vet3[N] = vaium;
    for(i=N; i>=0; i--) {
        printf("%d", vet3[i]);
    }

    return 0;
}
