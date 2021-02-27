#include <stdio.h>
int main() {   
    int N;
    printf("Qual é o número de linhas do triângulo? ");
    scanf("%d", &N);
    int mat[N][N];
    int l, c;
    for(l=0; l<N; l++) {   
        for(c=0; c<=l; c++) {   
            if(c==0) {
                mat[l][c]=1;
            }
            else if(l == c) {
                mat[l][c]=1;
            }
            else {
                mat[l][c] = mat[l-1][c]+mat[l-1][c-1];
            }
            printf("%4d", mat[l][c]);
        }
        printf("\n");
    }
    
    return 0;
}
