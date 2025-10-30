#include <stdio.h>

void movtorre (int movt) { //movtorre: movimento da torre
    if (movt > 0) {
        printf("Direita \n");
        movtorre(movt - 1); //movt: movimento da torre
    }
}

void movrainha (int movr) { //movrainha: movimento da rainha
    if (movr > 0) {
        printf("Esquerda \n");
        movrainha(movr - 1); //movr: movimento da rainha
    }
}

void movbispo (int movb) { //movbispo: movimento do bispo
    if (movb > 0) { //movb: movimento do bispo
    for (int bv = 0; bv < 1; bv++) {
        for (int bh = 0; bh < 1; bh++) {
            printf("Cima \n");
        }
    } printf("Direita \n");
    movbispo(movb - 1);
    }
}

int main() {
    int b, r, t, c; //Variaves - b: bispo - r: rainha - t: torre - c: cavalo
    t = 5;
    printf("Movimentação da Torre:\n");
    movtorre(t);

    printf("\nMovimentação do Bispo:\n");
    b = 5;
    movbispo(b);

    printf("\nMovimentação da Rainha:\n");
    r = 8;
    movrainha(r);

    printf("\nMovimentação do Cavalo:\n");
    for (c = 0; c <= 2, c >= 0; c++) {
        do {printf("Cima\n");
        c++;
        }
        while(c < 2);
        break;
    } printf("Direita\n");

    return 0;
}