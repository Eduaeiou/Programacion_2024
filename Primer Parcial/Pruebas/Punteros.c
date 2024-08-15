#include <stdio.h>

void jugar(int* n){
    int y = *n;
    y = (y + 2) / 2 + 2 - (3 * y);
    *n = y;
}
int main(){
    int x = 10;
    jugar(&x); //& operador de dirección
    printf("%d\n", x);
    return 0;
}