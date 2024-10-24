#include <stdio.h>

int main() {
    float km_inicial, km_final, tempo_inicial, tempo_final, media;

    printf(" Digite o km inicial: \n");
    scanf("&f", &km_inicial);
    printf(" Digite o km final: \n");
    scanf("&f", &km_final);
    printf(" Digite seu tempo inicial: \n");
    scanf("&f", &tempo_inicial);
    printf(" Digite seu tempo final: \n");
    scanf("%f", &tempo_final);

    /*conta*/

    media = ( km_inicial - km_final) / (tempo_final - tempo_inicial);

    /*resultado*/

    printf(" média é: %.2f km/h\n");

    return 0;
}
