#include <stdio.h>
#define p printf
#define s scanf
#define RONDA 10

int menu(void);
int cargarMembresia();
int cargarEdad();
void mostrarEdades40y60();

int maind(void)
{
    int op, platinum=0, oro=0, plata=0, general=0, membresia, edad;
    int cont=0, rango=0;

    do
    {
        op = menu();
        switch (op)
        {
        case 0:
            p("CHAUCITO");
            break;
        case 1:
            membresia = cargarMembresia();
            switch (membresia)
            {
            case 0:
                p("\nSalio del programa");
                op = 0;
                break;
            case 1:
                if(platinum<RONDA)
                {
                    platinum++;
                    cont++;
                    edad = cargarEdad();
                    if(edad>=40 && edad<=60)
                        rango++;
                }else
                    p("No quedan turnos para esta membresia.");
                break;
            case 2:
                if(oro<RONDA)
                {
                    oro++;
                    cont++;
                    edad = cargarEdad();
                    if(edad>=40 && edad<=60)
                        rango++;
                }else
                    p("No quedan turnos para esta membresia.");
                break;
            case 3:
                if(plata<RONDA)
                {
                    plata++;
                    cont++;
                    edad = cargarEdad();
                    if(edad>=40 && edad<=60)
                        rango++;
                }else
                    p("No quedan turnos para esta membresia.");
                break;
            case 4:
                if(general<RONDA)
                {
                    general++;
                    cont++;
                    edad = cargarEdad();
                    if(edad>=40 && edad<=60)
                        rango++;
                }else
                    p("No quedan turnos para esta membresia.");
                break;
            default:
                break;
            }
            break;
        case 2:
            mostrarEdades40y60(cont, rango);
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            p("\nOPCION INCORRECTA\n");
            break;
        }
    } while (op!=0);
    

    return 0;
}

int menu(void)
{
    int op;
    p("\n\n***** GOLF *****\n");
    p("\n 1. Cargar turno.");
    p("\n 2. Ver clientes entre 40 y 60 a%cos", 164);
    p("\n 3. Membres%cas con cupos.", 141);
    p("\n 4. Jugador m%cs joven y cantidad.", 183);
    p("\n 0. SALIR");
    p("\n\tOPCION: ");
    S("%d", &op);
    return op;
}

int cargarMembresia()
{
    int membresia;

    do
    {
        p("\n\tIngrese tipo de membres%ca: ", 141);
        s("%d",&membresia);
        if (membresia<0 || membresia>4)
        {
            p("\nOPCION INCORRECTA.\n");
        }
        
    } while (membresia<0 || membresia>4);

    return membresia;
}

int cargarEdad()
{
    int edad;
    p("\n\tIngrese edad: ");
    s("%d", &edad);
    while (edad<0 || edad>180)
    {
        p("\nEDAD MAL INGRESADA\n\tIngrese edad: ");
        s("%d", &edad);
    }
    return edad;
}

void mostrarEdades40y60(int cont, int rango)
{
    float res;
    if (cont!=0)
    {
        res = (float)rango*100/cont;
        p("\n\tEl porcentaje de personas entre 40 y 60 anios es: %.2f", res);
    }else
        p("\nNo se ingresaron turnos.");
     
}