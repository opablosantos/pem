//Calendário permanente

#include<stdio.h>
#include<locale.h>

int procurarLinha(int L, int C, int mat[L][C], int proc) {
    int contl, contc, resposta;

    for(contc = 0; contc < C; contc++) {   
        for(contl = 0; contl < L; contl++) {
                if(proc == mat[contl][contc]) {   
                    resposta = contl;
                }
        }
    }
return resposta;
}

//Calendário permanente de 1901 a 2092

int A1[28][4], A2[28][4];
int B[28][12]=
	{{4,0,0,3,5,1,3,6,2,4,0,2},
	 {5,1,1,4,6,2,4,0,3,5,1,3},
	 {6,2,2,5,0,3,5,1,4,6,2,4},
	 {0,3,4,0,2,5,0,3,6,1,4,6},
	 {2,5,5,1,3,6,1,4,0,2,5,0},
	 {3,6,6,2,4,0,2,5,1,3,6,1},
	 {4,0,0,3,5,1,3,6,2,4,0,2},
	 {5,1,2,5,0,3,5,1,4,6,2,4},
	 {0,3,3,6,1,4,6,2,5,0,3,5},
	 {1,4,4,0,2,5,0,3,6,1,4,6},
	 {2,5,5,1,3,6,1,4,0,2,5,0},
	 {3,6,0,3,5,1,3,6,2,4,0,2},
	 {5,1,1,4,6,2,4,0,3,5,1,3},
	 {6,2,2,5,0,3,5,1,4,6,2,4},
	 {0,3,3,6,1,4,6,2,5,0,3,5},
	 {1,4,5,1,3,6,1,4,0,2,5,0},
	 {3,6,6,2,4,0,2,5,1,3,6,1},
	 {4,0,0,3,5,1,3,6,2,4,0,2},
	 {5,1,1,4,6,2,4,0,3,5,1,3},
	 {6,2,3,6,1,4,6,2,5,0,3,5},
	 {1,4,4,0,2,5,0,3,6,1,4,6},
	 {2,5,5,1,3,6,1,4,0,2,5,0},
	 {3,6,6,2,4,0,2,5,1,3,6,1},
	 {4,0,1,4,6,2,4,0,3,5,1,3},
	 {6,2,2,5,0,3,5,1,4,6,2,4},
	 {0,3,3,6,1,4,6,2,5,0,3,5},
	 {1,4,4,0,2,5,0,3,6,1,4,6},
	 {2,5,6,2,4,0,2,5,1,3,6,1}};
int C[7][6];

int main() {
	int l,c,x;
	//populando a tabela A1
	x=-3;
	for(c=0;c<4;c++)
		for(l=0;l<28;l++, x++)
			if(x<1) A1[l][c]=-1;
			else if(x<100) A1[l][c]=x;
			else if(x==100) A1[l][c]=0;
			else A1[l][c]=-1;

	//populando a tabela A2
	x=-19;
	for(c=0;c<4;c++)
		for(l=0;l<28;l++, x++)
			if(x<1) A2[l][c]=-1;
			else A2[l][c]=x;
	
	//populando a tabela C
	x=1;
	for(c=0;c<6;c++)
		for(l=0;l<7;l++, x++)
			if(x>37) C[l][c]=-1;
			else C[l][c]=x;
	
	int dia, mes, ano, resposta, linha;
	setlocale(LC_ALL, "Portuguese");
	printf("\nDescubra o dia da semana.\nEntre com uma data no formato DD/MM/AAAA:  ");
	scanf("%d/%d/%d", &dia, &mes, &ano);

	if(ano<1901 || ano>2092) {
	    printf("ERRO! Escolha um ano de 1901 a 2092.\n");
	}
    else {
        if(ano<=2000) {
            ano=ano%100;
            resposta=procurarLinha(28,4,A1,ano);
        } 
        if(ano>2000) {
            ano=ano%100;
            resposta=procurarLinha(28,4,A2,ano);
        }
    }
    
    resposta = B[resposta][mes-1];
    resposta = dia + resposta;
    resposta = procurarLinha(7,6,C,resposta)+1;
    
    printf("A data %d/%d/%d é ", dia, mes, ano);
    switch (resposta) {   
        case 1:
            printf("um Domingo");
            break;
        case 2:
            printf("uma Segunda-feira");
            break;
        case 3:
            printf("uma Terça-feira");
            break;
        case 4:
            printf("uma Quarta-feira");
            break;
        case 5:
            printf("uma Quinta-feira");
            break;
        case 6:
            printf("uma Sexta-feira");
            break;
        case 7:
            printf("um Sábado");
            break;

        default:
            printf("ERRO! Execute o programa novamente.");
    }
        
	return 0;
}
