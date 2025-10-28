#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int b, r, t;
    printf("Movimentação da Torre:\n");
    for( t = 0; t < 5; t++){
        printf("Direita\n"); //Direção do movimento da Torre
    }

    printf("\nMovimentação do Bispo:\n");
    b = 1;
    while(b <= 5){
        printf("Cima, direita\n"); //Direção do movimento do Bispo
        b++;
    }

    printf("\nMovimentação da Rainha:\n");
    r = 1;
    do {
        printf("Esquerda\n"); //Direção do movimento da Rainha
        r++;
    } while (r <= 8);
    
    return 0;
}