#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//añadir caracteres desconocidos.

int main(void)
{
    setlocale(LC_ALL, "es‐ES");

	int opcion;
    float temporizador=(4.20);
    int unidadtemp;
    //Las igualadas a cero es para que aparezca el menu, luego tomarán valores a partir del arduino
    float tempintro, tinstant=0, tmed2h=0, tmax=0, tmin=0, tmeddia=0;
    int humeintro=0, hinstant=0,hmed2h=0,hmeddia=0,hmax=0,hmin=0;

    //MENÛ
	int menu_ppal(void); 
    {
        do
        {
            printf("\nINCUBADORA");
            printf("\n==========");
            printf("\n1 ‐ Introducir temperatura y humedad:");
            printf("\n2 ‐ Datos de temperatura:");
            printf("\n3 ‐ Datos de humedad:");
            printf("\n4 ‐ Tiempo incubando:");
            printf("\n5 ‐ Salir de la aplicación");
            printf("\nIntroduzca opción:");
            scanf_s("%d", &opcion);

            if (opcion < 1 || opcion>6)
                printf("Opción incorrecta,vuelva a elegir una opción válida\n");



        } while (opcion < 1 || opcion>6);
    }

    //FIN DE MENÛ
    //INICIO INTERACCIÓN
        if (opcion > 1 || opcion < 6)
        {
            switch (opcion)
            {

                 case 1:
                 {
                     do
                     {
                         printf("¿En que unidad quiere introducir la temperatura?\n");
                         printf("1) Celsius\n");
                         printf("2) Fahrenheit\n");
                         printf("3) Kelvin\n");
                         scanf_s("%d", &unidadtemp);

                             if (unidadtemp < 1 || unidadtemp>3)
                             printf("No es una opción válida,vuelva a seleccionar una:\n");

                             else
                             printf("Introduzca la temperatura y la humedad(1-100):\n");
                     } 

                     while (unidadtemp < 1 || unidadtemp>3); 
                     {
                         scanf_s("%f %d", &tempintro, &humeintro);
                         printf("La temperatura introducida es %f y la humedad %d", tempintro, humeintro);
                         //Hay que poner un control para cada tipo de unidad de temperatura, para evitar hacer huevos cocidos.
                     }
                     break;
                 }

                 case 2:
                 {
                     printf("La temperatura instantanea es de %.2f\n", tinstant);
                     printf("La temperatura media de las dos últimas horas es de %.2f\n", tmed2h);
                     printf("La temperatura media del dia es de %.2f\n", tmeddia);
                     printf("La temperatura máxima es de %.2f\n", tmax);
                     printf("La temperatura mínima es de %.2f\n", tmin);
                     break;
                 }

                 case 3:
                 {
                     printf("La humedad instantanea es de %d\n", hinstant);
                     printf("La humedad media de las dos últimas horas es de %.2f\n", hmed2h);
                     printf("La humedad media del dia es de %.2f\n", hmeddia);
                     printf("La humedad máxima es de %.2f\n", hmax);
                     printf("La humedad mínima es de %.2f\n", hmin);
                     break;
                 }

                 case 4:
                 {
                     //HACER TEMPORIZADOR
                     printf("El timepo incubando es de %2.f", temporizador);
                     break;
                 }

                 case 5:
                 {
                     //Salida sin instrucciones
                     printf("Presione cualquier tecla:");
                     return 0;
                 }


            }
        }

        return 0;
    

}