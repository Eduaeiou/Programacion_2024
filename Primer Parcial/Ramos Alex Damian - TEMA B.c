 #include <stdio.h>
 #include <stdbool.h>

int puntosrealizados()
{
    int puntos,puntosret;
    bool salida=false;
    do
    {
        printf("\nIngresar puntos realizados: ");
        scanf("%d",&puntos);
        if (puntos>=0 && puntos<=100)
        {
            puntosret=puntos;
            salida=true;
        }else
        {
            printf("Error. Volver a intentar");
            salida=false;
        }
    } while (salida!=true);
    return puntosret;
}

int menudisciplinas(int i)
{
    int opc;
    printf("\n\nRONDA de Dicilina: %d",i);
    printf("\nSeleccion de diciplinas");
    printf("\n1. Natacion");
    printf("\n2. Salto");
    printf("\n3. Tiro al blanco");
    printf("\n4. Escalada");
    printf("\n5. Levantamiento de pesas");
    printf("\nOpcion: ");
    scanf("%d",&opc);
    return opc;
}

 int main()
 {
    int dni, op=0, nat=0,sal=0,tab=0,esc=0,ldp=0,cantdisplin,puntobt;
    bool salida=false, salidaD=false;
    do
    {
        printf("Ingresar DNI: ");
        scanf("%d",&dni);
        if (dni>0 && dni<100000000)
        {
            do
            {
                printf("Diciplicas a realizar(entre 2 y 5)");
                printf("Cantidad: ");
                scanf("%d",&cantdisplin);
                if (cantdisplin>=2 && cantdisplin<=5)
                {
                    for (int i = 1; i <= cantdisplin; i++)
                    {
                        op=menudisciplinas(i);
                        switch (op)
                        {
                        case 1: printf("NATACION");
                            nat=puntosrealizados();
                            break;
                        case 2: printf("SALTO");
                            sal=puntosrealizados();
                            break;
                        case 3: printf("TIRO AL BLANCO");
                            tab=puntosrealizados();
                            break;
                        case 4: printf("ESCALADA");
                            esc=puntosrealizados();
                            break;
                        case 5: printf("LEVANTAMIENTO DE PESAS");
                            ldp=puntosrealizados();
                            break;    
                        default:
                            printf("El valor ingresado es incorecto");
                            break;
                        }
                        if (i==cantdisplin)
                        {
                            salidaD=true;
                        }
                    }
                    printf("Participante con DNI: %d",dni);
                    puntobt=nat+sal+tab+esc+ldp;
                    printf("\tPuntos TOTALES realizados: %d\n\n",puntobt);
                }else
                {
                    printf("Error. Volver a intentar.\n");
                    salidaD=false;
                }
            } while (salidaD!=true);
            
            
        }else if (dni==0)
        {
            salida=true;
        }
    } while (salida!=true);


 }

 