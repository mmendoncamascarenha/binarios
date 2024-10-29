#include <stdio.h>
int main() {
    int n;
    printf("Digite um ano e tecle enter\n");
    scanf("%d",&n);

    if(n % 4 ==0) {
        printf("O ano %d é bissexto\n");
    }
    else{
        printf("O ano %d não é bissexto\n");
    }
    return 0;
}