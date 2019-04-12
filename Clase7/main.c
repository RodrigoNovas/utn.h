#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#define LEN_LISTA 100



int main()
{
    /*
    strncpy(nombres[0],"toto",20);
    strncpy(nombres[1],"pepito",20);
    printf("nombre:%s\n",nombres[0]);
    printf("nombre:%s\n",nombres[1]);


    strncpy(nombres[0],"\0",20);*/

/*
    Hacer un programa con el siguiente menu:
   1) ingresar nuevo nombre (no acepta nombres repetidos)
   2) listar todo
   3) ordenar por nombre
   4) Borrar nombre. Se ingresa el nombre y si se encuentra se elimina de la lista

   El programa permitira ingresar hasta 100 nombres.

   4) Modificar el programa para que ademas del nombre se ingrese y guarde el DNI.
    */
    int opcion;
    int posLibre;
    char nombres[LEN_LISTA][56];
    int i;
    char buffer;


    // Inicializacion
    for(i=0; i<LEN_LISTA; i++)
    {
        nombres[i][0] = '\0';
    }

nombres[0][0] = 's';
    nombres[1][0] = 'i';
    nombres[2][0] = 'l';
    //
    while(1)
    {

        utn_getNumber(&opcion,
                      "1)ingresar\n2)listar\n3)Ordenar\n 4)Borrar\n",
                      "NO!",
                      1,10,2);
    printf("Elegiste: %d\n",opcion);
        switch(opcion)
        {
            case 1:

                if(buscarLibre(nombres, LEN_LISTA,&posLibre)==0)
                {
                    printf("Posicion Libre %d\n",posLibre);
                   // utn_getString(buffer,"Ingrese nombre","Error",0,20,1); anda mal pisa memoria
                   fgets(buffer,20,stdin);
                   printf("Se ingreso:%s\n",buffer);
                   printf("2. se encontro lugar en %d: \n", posLibre);
                   strncpy(nombres[posLibre],buffer,20);

                   for(i=0; i<10; i++)
                   {
                    printf("%d: %s\n", i, nombres[i]);
                   }
                }

                break;


            case 2:

            break;
            case 3:

            break;
                case 4:
                //unt_getString
     buscarNombre(buffer, nombres,LEN_LISTA, &posAEliminar);
                // poner el i en \0
                if (posAEliminar!='\0')
                {
                    posAEliminar='\0';
                }
            break;
        }

    }






    return 0;
}
