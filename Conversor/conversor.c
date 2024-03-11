#include <stdio.h>

int main()

{
    int menu = 0;
    float cantidad = 0, resultado = 0;

    do
    {
        printf("Menu de Opciones para convertir monedas\n\n");
        printf("1. De Quetzales a Dolares\n");
        printf("2. De Dolares a Quetzales\n");
        printf("3. De Quetzales a Euros\n");
        printf("4. De Euros a Quetzales\n");
        printf("5. De Dolares a Euros\n");
        printf("6. De Euros a Dolares\n");
        printf("7. Salir\n");

        printf ("por favor ingrese la opcion a la que desea convertir");
        scanf("%d",&menu);

        switch (menu)
        {
        case 1:
            printf("Por favor ingrese la cantidad de Dolares que desea convertir a Quetzales.");
            scanf("%f",&cantidad);
            resultado = cantidad * 0.13 ; //quetzales a dolares
            printf ("$ %.2f\n",resultado);
            break;
        
        case 2:
            printf ("Por favor ingrese la cantidad de Quetzales que desea convertir a Dolares.");
            scanf("%f",&cantidad);
            resultado = cantidad * 7.81 ; //dolares a quetzales
            printf ("Q %.2f\n",resultado);
            break;

        case 3:
            printf ("Por favor ingrese la cantidad de Euros que desea convertir a Quetzales.");
            scanf("%f",&cantidad);
            resultado = cantidad * 0.12 ; //euros a quetzales
            printf ("€ %.2f\n",resultado) ;
            break;

        case 4:
            printf ("Por favor ingrese la cantidad de Quetzales que desea convertir a Euros.");
            scanf("%f",&cantidad) ;
            resultado = cantidad * 8.54 ; //quetzales a euros
            printf ("Q %.2f\n",resultado) ;
            break;

        case 5:
            printf ("Por favor ingrese la cantidad de Dolares que desea convertir a Euros.");
            scanf("%f",&cantidad) ;
            resultado = cantidad * 0.91 ; //dolares a euros
            printf ("€ %.2f\n",resultado) ;
            break;

        case 6:
            printf ("Por favor ingrese la cantidad de Euros que desea convertir a Dolares.");
            scanf("%f",&cantidad) ;
            resultado = cantidad * 1.09 ; //euros a dolares
            printf ("$ %.2f\n",resultado) ;
            break;

        case 7:
            break;

        default:
            printf ("Por favor ingrese una opcion valida\n");
            break;
        }

    } while (menu !=7);

}