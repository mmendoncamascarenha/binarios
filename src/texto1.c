#include <stdio.h>

int main (){
    
    char nome[30];
    printf("Digite seu nome e tecle enter\n");
    // foi necessario utilizar os colchetes para que o comando 
    //scanf receba toda a cadeia de caracteres
    //o elemento ^ (circunflexo) foi usado para indicar onde 
    //começa o primeiro carcter. E comando \n, neste caso, esta sendo usado para ler p espaço aplicado
    //ao final é utilizado o caracter s(string).
    scanf("%[^\n]s",&nome);
    printf("Ola, %s. Seja bem vindo comparsa\n",nome);


    return 0;

}