#include <stdio.h>

int main() {
    int vet1[]={1, 1, 2, 3, 4, 8, 9}, N1=7;
    int vet2[]={1, 3, 5, 7, 10}, N2=5;
    int N3=N1+N2;
    int vet3[N3];
    int i=0, j=0, k;
    
    for(k=0; k<N3; k++) {
        if(i<N1 && j<N2) {
            if(vet1[i] <= vet2[j]) {
                vet3[k] = vet1[i];
                i++;
            }
            else {
                vet3[k] = vet1[j];
                j++;
            }
        }
        else if(i<N1) {
            vet3[k] = vet1[i];
            i++;
        }
        else {
            vet3[k] = vet2[j];
            j++;
        }
        printf("%d ", vet3[k]);
    }

    return 0;
}
