#include <stdio.h>

int main(){
    //declaração da variável idade
    int idade = 18;
    //declaração de variável de ponteiro 
    int*pidade = &idade;
    printf("A idade é %d e esta em %p e %p com o valor %d\n",idade, &idade, *pidade, *pidade);

    return 0;
}

