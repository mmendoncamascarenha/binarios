/*
Este programa obtem um número de usuário e diz se é par, exibindo uma mensagem em tela
*/
#include<stdio.h>
int main() {
    int n;
    printf("Digite um número e tecle enter \n");
    scanf("%d", &n);
    if( n % 2 ==0) {
        printf("O valor %d é Par\n");
    }
    return 0;
}
