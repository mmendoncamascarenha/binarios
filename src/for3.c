#include <stdio.h>
int main(){
    int ano;
    int total = 0;
    for( ano=1930; ano <=2024; ano++){
        if(ano % 4 == 0){
            printf("%d\n", ano);
            total++;
        }
        
    }
        printf("Total de ano bissexto é: %d\n",total);
    return 0;
}