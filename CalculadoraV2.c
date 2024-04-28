#include <stdio.h>
#define Esc printf
#define L scanf

int main(){
    
    int a,b,c;

    Esc("Ingresar valor para a: ");L("%d",&a);
    Esc("Ingresar valor para b: ");L("%d",&b);
    c=a+b;Esc("%d+%d=%d\n",a,b,c);

    return 0;
}
