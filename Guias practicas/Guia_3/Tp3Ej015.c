/*15. Se realizó un concurso de tiro al blanco. Existen 5 participantes y cada uno de ellos
efectúa 10 disparos, registrando las coordenadas (x, y) de cada disparo. Indicar
cuántos disparos se produjeron en cada cuadrante y cuantos dieron el el blanco.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char NomPart[15];
    int x,y;

    //Los cuadrantes van a ir desde el 10 hasta el 5
    srand(time(NULL));
    for (int i=1; i<=5; i++){
        puts("Ingresar el nombre del participante");
        gets(NomPart);
        for (int j=1; j<=10; j++){
            x=(rand()%6)-6; printf("%d\t",x);
            y=(rand()%6)-6; printf("%d\t",y);
        }
    }

    return 0;
}
