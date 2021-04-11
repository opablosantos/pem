//Somar elementos acima da diagona principal

#include <stdio.h>

int main()
{
    int matriz[5][5] = {{1, 2, 3, 4, 5},
                        {2, 4, 5, 3, 1},
                        {3, 5, 1, 2, 4},
                        {4, 1, 2, 5, 3},
                        {5, 3, 4, 1, 2}};
    int i, j, soma=0;
    for(i=0; i<=4; i++) {
        for(j=0; j<=4; j++) {
            if (j>i) {
                soma += matriz[i][j];
            }    
        }
    }
    
    printf("%d", soma);

    return 0;
}
