#include <stdio.h>
#include <time.h> //biblioteca que manipula unidades de tempo pra criar números aleatórios 
#include <stdlib.h> //biblioteca que ajuda a criar números aleatórios
#include <stdbool.h> //biblioteca para adicionar variáveis do tipo booleano

int mostraCarta(int numero) {
    printf(" ----\n|    |\n|    |\n ----");
}
int sorteia(bool dono) {
    if(dono == true) { //se a mão é sua, também se aplica à mão de 11 pontos;

    } else {

    }
    int mao[3];
    for(int i = 0; i < 3; i++){
        mao[i] = rand() % 10 + 1;
    }
}
int main(void) {
    srand(time(NULL));
    int baralho[4][10];
    for(int naipe = 0; naipe < 4; naipe++){
        for(int carta = 0; carta < 10; carta++){
            baralho[naipe][carta] = carta + 1;
            printf("%d\n", baralho[naipe][carta]);
        }
        printf("\n\n");
    }

    return 0;
}