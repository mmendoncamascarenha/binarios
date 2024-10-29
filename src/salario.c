#include <stdio.h>

int main () {
/* vt -. 6%
iss -> 7%
fgtts -> 8%
*/
    float salario, salario_liquido, total_descontos;

    printf("digite o salario bruto \n");
    scanf("%f", salario);

    total_descontos = salario*0.06 + salario*0.07 + salario*0.08;
    salario_liquido = salario - total_descontos;
     
    printf ("O salario bruto é %.2f, total de descontos é %.2f e o salario liquido é %.2f");






}