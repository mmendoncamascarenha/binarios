#include <stdio.h>
int main() {
    int n;
    printf("Digite um número e tecle enter\n");
    scanf("%d",&n);

    if(n % 2 ==0) {
        printf("O número %d é Par\n");
    }
    else{
        printf("O número %d é impar\n");
    }
    return 0;
}