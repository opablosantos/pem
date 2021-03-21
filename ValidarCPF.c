#include <stdio.h>
int main() {
    int i, valid=0, multi=10, primdig, segdig, cpf[10];
    
    //Solicitando dados do usuário
    printf("Digite os 11 dígitos do CPF a ser validado colocando espaço entre cada dígito: \n");
    for (i=0; i<=10;i++) {
        scanf ("%d", &cpf[i]);
    }
    
    
    //Validando o primeiro dígito
    for (i=0; i<=8; i++) {
        valid += cpf[i]*multi;
        multi--;
    }
    primdig = (valid*10)%11;
    if (primdig == 10) {
        primdig = 0;
    }
    
    //Validando o segundo dígito
    multi = 11;
    valid = 0;
    for (i=0; i<=9; i++) {
        valid += cpf[i]*multi;
        multi--;
    }
    segdig = (valid*10)%11;
    if (segdig == 10) {
        segdig = 0;
    }
    
    //Imprimindo o CPF com frufru
    printf ("O CPF: ");
    for (i=0; i<=2;i++) {
        printf ("%d", cpf[i]);
    }
    printf(".");
    for (i=3; i<=5;i++) {
        printf ("%d", cpf[i]);
    }
    printf(".");
    for (i=6; i<=8;i++) {
        printf ("%d", cpf[i]);
    }
    printf("-");
    for (i=9; i<=10;i++) {
        printf ("%d", cpf[i]);
    }
    
    //Imprimindo o resultado da validação
    if (cpf[10]==cpf[9] && cpf[10]==cpf[8] && 
        cpf[10]==cpf[7] && cpf[10]==cpf[6] && 
        cpf[10]==cpf[5] && cpf[10]==cpf[4] && 
        cpf[10]==cpf[3] && cpf[10]==cpf[2] && 
        cpf[10]==cpf[1] && cpf[10]==cpf[0]) {
            printf (" não é válido!");
        }
    else if (primdig==cpf[9] && segdig==cpf[10]) {
        printf(" é válido!");
    }
    else {
        printf (" não é válido!");
    }
    
    return 0;
}
