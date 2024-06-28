#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int main(){
	
	char nombre[30];
	puts("Ingresar un nombre: ");
	fgets(nombre, 30, stdin); //formato para usar fgets
	puts(nombre);

	return 0;
	}
