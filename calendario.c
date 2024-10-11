#include <stdio.h>
#define LineasHorizontales 14
int diasemana(int a, int b, int c)
{
    if (b<3)
    {
        b=b+10;
        c=c-1;
    }
    else
        b=b-2;
    int siglo=c/100;
    int a2=c%100;
    int diasem=(((26*b-2)/10)+a+a2+(a2/4)+(siglo/4)-(2*siglo))%7;
    if (diasem<0)
        diasem=diasem+7;
    return diasem;
}
int main(){

    int dias=0;

    int calendario,dia,mes,anio;
    printf("Ingresar el d%ca: ",161);scanf("%i",&dia);
    printf("\nIngresar el mes: ");scanf("%d",&mes);
    printf("\nIngresar el a%co: ",164);scanf("%i",&anio);
    calendario=diasemana(dia,mes,anio); printf("\n");
    switch(calendario){
    case 0: printf("Cae Domingo\n");
        break;
    case 1: printf("Cae Lunes\n");
        break;
    case 2: printf("Cae Martes\n");
        break;
    case 3: printf("Cae Mi%crcoles\n",130);
        break;
    case 4: printf("Cae Jueves\n");
        break;
    case 5: printf("Cae Viernes\n");
        break;
    case 6: printf("Cae S%cbado\n",160);
        break;}
    printf("\n");
    for(int i=0;i<LineasHorizontales;i++){
        printf(" %c",196);
    }
    printf("\n");
    printf("\t  AGOSTO\t\n");
    for(int i=0;i<LineasHorizontales;i++){
        printf(" %c",196);
    }
    printf("\n");
    printf("|Lun|Mar|Mie|Jue|Vie|Sab|Dom|\n");
    for(int i=0;i<31;i++){
        dias++;
        if(i==0) printf("\t    ");
        if(i==4 || i==11 || i==18 || i==25 || i==31) printf("|\n");
        printf("|%2i ",dias);
    }

    /*for(int i=0;i<50;i++){
        printf("%c",238);
    }
    printf("\n");*/
return 0;
}
