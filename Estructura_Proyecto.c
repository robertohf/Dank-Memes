#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "tabla.h"
#include "bloque.h"

int initMenu();
void opcion(int opcion);

int initMenu()
{
    int op;

    do{
        printf("1.Crear tabla\n");
        printf("2.Consultar tabla\n");
        printf("3.Editar tabla\n");
        printf("4.Eliminar tabla\n");
        printf("5.Listar Tablas\n");
        printf("6.Exit\n");
        printf("\nOpcion: ");

        scanf("%d", &op);

        opcion(op);

    }while(true);

}


void opcion(int orden)
{

    switch(orden){

    case 1:

        printf("\n\n");
        break;
    case 2:

        printf("\n\n");
        //break;
    case 3:

      printf("\nQue tabla desea Editar? ");

      printf("\n\n");
      break;
    case 4:

        break;
    case 5:
	//printTabla();
	break;
    case 6:
      exit(0);
      break;

    }

}

int main(int argc, char *argv[])
{
    initMenu();
    return 0;
}
