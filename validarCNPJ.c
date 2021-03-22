#include <stdio.h>
int main() {
    int i, valid=0, resto, primdig, segdig, cnpj[13];
    int multi[13] = {6,5,4,3,2,9,8,7,6,5,4,3,2};
    
    //Solicitando dados do usuário
    printf("Digite os 14 dígitos do CNPJ a ser validado colocando espaço entre cada dígito: \n");
    for (i=0; i<=13;i++) {
        scanf ("%d", &cnpj[i]);
    }
    
    
    //Validando o primeiro dígito
    for (i=0; i<=11; i++) {
        valid += cnpj[i]*multi[i+1];
    }
    resto = valid%11;
    if (resto<2) {
        primdig = 0;
    }
    else {
        primdig = 11-resto;
    }
    
    //Validando o segundo dígito
    valid = 0;
    for (i=0; i<=12; i++) {
        valid += cnpj[i]*multi[i];
    }
    resto = valid%11;
    if (resto<2) {
        segdig = 0;
    }
    else {
        segdig = 11-resto;
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
    if (primdig==cnpj[12] && segdig==cnpj[13]) {
        printf(" é válido!");
    }
    else {
        printf (" não é válido!");
    }
    
    return 0;
}
