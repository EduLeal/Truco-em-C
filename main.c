#include <stdio.h>
#include <time.h> 
#include <stdlib.h> 
#include <stdbool.h> 

/* Considerando que
Naipe 0 - Picafumo
Naipe 1 - Espadilha
Naipe 2 - Copas
Naipe 3 - Zap

1 - Ás
8 - Rainha
9 - Valete
10 - Rei
*/

struct player {
    int vezDeJogar;
    int mao;
};

struct player p1;
struct player pc;

void criaBaralho(int matriz[4][10]) {
    for (int naipe = 0; naipe < 4; naipe++) {
        for (int cartas = 0; cartas < 10; cartas++) {
            matriz[naipe][cartas] = cartas;
            printf("%d ", matriz[naipe][cartas]);
        }
        printf("\n\n");
    }
}

int sorteiaMao(int baralho[][]) {
    int mao[3];
    for (int contador = 0; contador < 3; contador++) {
        mao[contador] = 0;
        mao[contador] = rand() % 10 + 1;
        printf("");
    }

    return mao[3];
    //return mao - 3 cartas
}


int main(void) {
    srand(time(NULL));

    int baralho[4][10];
    criaBaralho(baralho);
    return 0;
}
