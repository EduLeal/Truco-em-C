#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int c = rand() % 10 + 1;
    printf("%d", c);
    return 0;
}