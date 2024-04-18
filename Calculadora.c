#include <stdio.h>

int main(){
    int a,b,c;
    printf("Ingresar primer valor: ");
    scanf("%d",&a);
    printf("Ingresar segundo valor: ");
    scanf("%d",&b);
    c=a+b;
    printf("resultado de la suma: %d\n",c);
    c=a-b;
    printf("resultado de la resta: %d\n",c);
    return 0;
}
