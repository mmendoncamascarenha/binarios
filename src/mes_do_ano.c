#include<stdio.h>
int main() {
    int mes;
    printf("Digite um número para saber sua estaçaõe tecle enter\n ");
    scanf("%d",&mes);

    if(mes ==1 || mes==2 || mes==12){
        printf("esse mês é verão");
    }
    else if ( mes ==3 || mes== 4 || mes ==5){
        printf("esse mês é outono");
    }
    else if (mes ==6 || mes ==7 || mes ==8){
        printf("esse mês é inverno");
    }
    else if ( mes == 9 || mes ==10 || mes ==11){
        printf("esse mês é primavera");
    }
    else{
        printf ("mês invalido");
    }
    printf("\n");

    return 0;
}