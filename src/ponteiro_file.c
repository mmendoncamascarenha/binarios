#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("files/texto.txt","a");
    //W -> escrever(write)
    //R -> ler(read)
    //a -> adicionar(append)
    fprintf(arquivo,"corinthians\n");
    fclose(arquivo);
    printf("Criamos o arquivo\n");
    return 0;

}