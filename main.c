#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    int opcion=0;
    float primerOperando;
    float segundoOperando;
    float sumar;
    float restar;
    float multiplicar;
    float dividir;
    int factorial;


    do
    {
        system("cls");
        printf("calculadora\n");
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        scanf("%d",&opcion);



        switch(opcion)

        {

            case 1:

                system("cls");
                printf("ingrese el primer operando: ");
                scanf("%f",&primerOperando);


            break;
            case 2:
                system("cls");
                printf("ingrese el segundo operando: ");
                scanf("%f",&segundoOperando);

            break;
            case 3:

                {
                system("cls");
                sumar= suma(primerOperando, segundoOperando);
                printf("la suma es:%.2f",sumar);
                getch();
                }

                break;
            case 4:

                {
                system("cls");
                restar=resta(primerOperando, segundoOperando);
                printf("la resta es:%.2f",restar);
                getch();
                 }

                break;
            case 5:
                system("cls");
                if(segundoOperando<=0)
                {
                    printf("error.debe ingresar un divisor mayor a 0");
                    getch();
                }
                else
                {dividir=division(primerOperando,segundoOperando);
                printf("la division es:%.2f",dividir);
                getch();
                }
                break;
            case 6:

                {
                system("cls");
                multiplicar=multiplicacion(primerOperando,segundoOperando);
                printf("la multiplicacion es:%.2f",multiplicar);
                getch();
                 }

                break;
            case 7:
                if(primerOperando<=0)
                {
                    system("cls");
                    printf("Error:ingrese un numero mayor a 0\n");
                    system("pause");
                }
                else
                {
                system("cls");
                factorial=factorial2(primerOperando);
                printf("el factorial es:%d",factorial);
                getch();
                }


                break;
            case 8:

                {
                system("cls");
                sumar= suma(primerOperando, segundoOperando);
                printf("la suma es:%.2f\n",sumar);
                restar=resta(primerOperando, segundoOperando);
                printf("la resta es:%.2f\n",restar);
                dividir=division(segundoOperando,primerOperando);
                printf("la division es:%.2f\n",dividir);
                multiplicar=multiplicacion(primerOperando,segundoOperando);
                printf("la multiplicacion es:%.2f\n",multiplicar);
                getch();
                }

                break;
            case 9:
                printf("Presione cualquier tecla para salir");
            break;
            default:
                system("cls");
                printf("Error.debe ingresar solamente las opciones de 1 a 9");
                getch();
            break;
        }
}
    while(opcion!=9);
    return 0;
}
