#include <stdio.h>

int main() {
    // O tipo float é para trabalhar com casas decimais 
    float n1, n2, soma, divisao ;
    printf ("Digite um número e tecle enter colega!: \n");
    scanf("%f", &n1);
    printf("Digite outro número e tecle enter oreia seca: \n"); 
    scanf("%f" ,&n2);

    soma = n1 + n2;
    divisao = n1 / n2;

    printf("O resultado a soma é %.2f \n", soma);
    printf("O resultado a divisão é %.2f \n", divisao);
    return 0;
}