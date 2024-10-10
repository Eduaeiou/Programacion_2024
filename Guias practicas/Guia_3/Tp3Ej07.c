//7. Desarrollar un algoritmo que calcule y visualice en pantalla una tabla con las 20
//primera potencias de 2.
#include <stdio.h>
#include <math.h>

int main(){
    int a;
    for (int i=0; i<=20; i++){
        a = pow(2,i);
        printf("%d) %d\n",i,a);
    }
    getch();
    return 0;
}
