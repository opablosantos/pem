#include <stdio.h>
int main() {
    int i, digito, cnpj[14];
    int multi1[12] = {5,4,3,2,9,8,7,6,5,4,3,2};
    int multi2[13] = {6,5,4,3,2,9,8,7,6,5,4,3,2};
    
    //Solicitando dados do usuário
    printf("Digite os 14 dígitos do CNPJ a ser validado: \n");
    fgets(entrada, 50, stdin);
    
    for(i=0; i<strlen(entrada); i++) {
        if (entrada[i]>='0' && entrada[i]<='9') {
            cnpj[j] = entrada[i] - '0';
            j++;
        }
    }
    
    int calculaDigito (int cnpj[], int multi[], int N) {
        int valid=0, resto, i;
        for (i=0; i<=N; i++) {
        valid += cnpj[i]*multi[i];
    }
    resto = valid%11;
    if (resto<2) {
        digito = 0;
    }
    else {
        digito = 11-resto;
    }
    return digito;
    }
    
    //Imprimindo o CNPJ com frufru
    printf ("\nO CNPJ: ");
    for (i=0; i<=1;i++) { 
        printf ("%d", cnpj[i]);
    }
    printf(".");
    for (i=2; i<=4;i++) {
        printf ("%d", cnpj[i]);
    }
    printf(".");
    for (i=5; i<=7;i++) {
        printf ("%d", cnpj[i]);
    }
    printf("/");
    for (i=8; i<=11;i++) {
        printf ("%d", cnpj[i]);
    }
    printf("-");
    for (i=12; i<=13;i++) {
        printf ("%d", cnpj[i]);
    }
    //Imprimindo o resultado da validação
    if (calculaDigito(cnpj, multi1, 11) == cnpj[12] && 
       calculaDigito(cnpj, multi2, 12) == cnpj[13]) {
        printf(" é válido!");
    }
    else {
        printf (" não é válido!");
    }
    
    return 0;
}
