#include <stdio.h>
// O comando ../ faz a saída da pasta atual(src)
//e lib é a pasta onde esta o arquivo de cabeçalho calculos.h
#include "../lib/calculos.h"

int main(){
    int valores[] = {6,12,23,34,45,56,67,78,89,90};
    printf("O resultado da soma é %d\n",somaArray(valores,10));
    printf("O resultado da media é %d\n",mediaArray(valores, 10));
    printf("O maior valor é %d\n",maiorValor(valores,10));
    return 0;
}