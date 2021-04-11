//Campo das minhocas
#include<stdio.h>
 
int main() {
    
    int L, C, l, c, soma, maior=0, elementos;
    
    printf("Insira do número de Linhas e Colunas respectivamente desejadas separadas por espaço: ");
	scanf("%d%d", &L, &C);
	elementos = L*C;
	
	int matriz[L][C];
	printf("\nInsira os %d elementos da matriz referentes ao campo de minhocas:\n", elementos);
	for(l=0; l<L; l++) {
	    for(c=0; c<C; c++) {
	        scanf("%d", &matriz[l][c]);
		}
	}

	for(l=0; l<L; l++) {
	    soma = 0;
		for(c=0; c<C; c++) {
		    soma += matriz[l][c];
		}
		if(soma > maior) {
		    maior = soma;
		}
	}

	for(c=0; c<C; c++) {
	    soma = 0;
		for(l=0; l<L; l++) {
		    soma += matriz[l][c];
		}
		if(soma > maior) {
		    maior = soma;
		}
	}
	
	printf("\nO maior número de minhocas colhidas em linha reta é: %d\n", maior);
	
	return 0;
}
