#include <stdio.h>

int main() {
    
    int vet[]={5, 2, 2, 3, 4, 4, 4, 4, 1, 1};
    int i, grupos=1;
    
    for (i=1; i<=9; i++) {
        if(vet[i]!=vet[i-1]) {
            grupos++;
        }
    }
    
    printf("Existem %d grupos", grupos);
    
    return 0;
}