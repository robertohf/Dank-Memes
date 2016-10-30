#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int initMenu();
void ReadJson(char  *file, int orden);
void opcion(int opcion);
void parsejson(char *opcion);

//static struct CrearTabla ct[10];


struct CrearTabla{


    char *nombre[30];
    int id;
    int orden;
    char suboopciones;

};

struct ConsultarTabla{

    char *nombre[30];
    int id;
    int orden;
    char suboopciones;

};

struct EditarTabla{

    char *nombre[30];
    int id;
    int orden;
    char suboopciones;

};

struct ElimarTabla{

    char *nombre[30];
    int id;
    int orden;
    char suboopciones;

};

//I read the json file right here, lo que hace es agarrar la lineas en el file ya que es parcialmente "json"

void ReadJson(char  *file, int orden)
{

  char Crear_tabla[100], Consultar_tabla[100], Editar_Tabla[100], Eliminar_Tabla[100];
  FILE *fp;

  fp = fopen(file,"r");

  fscanf(fp, "%127[^\n]\n%127[^\n]\n%127[^\n]\n%127[^\n]", Crear_tabla, Consultar_tabla, Editar_Tabla, Eliminar_Tabla);
  //printf("1: %s\n", Crear_tabla);

  fclose(fp);

  switch(orden){
    case 1:
      parsejson(Crear_tabla);
      break;
    case 2:
      parsejson(Consultar_tabla);
      break;
    case 3:
      parsejson(Editar_Tabla);
      break;
    case 4:
      parsejson(Eliminar_Tabla);
      break;
  }

}

//Aqui lo leo y las guardo ya en variables

void parsejson(char opcion[100])
{
  printf("\n");
  const char delim[2] = "{~";
  const char s[4] = "NULL";

  char *token;
  char nombre[10], idc[1], ordenc[1], subopciones[80];

  //token = strtok(opcion, delim);

  strcpy(nombre, strtok(opcion, delim));
  strcpy(idc, strtok(NULL, "~"));
  strcpy(ordenc, strtok(NULL, "~"));
  strcpy(subopciones, strtok(NULL, "~}"));

  int id = atoi(idc+1);
  int orden = atoi(ordenc);

  printf("Nombre: %s\n", nombre);
  printf("Id: %d\n",id);
  printf("Orden: %d\n", orden );
  printf("Subopciones: %s\n", subopciones );

}

void addjson(char nombre[10], int id, int orden, char subopciones[80], int opcion)
{
  struct CrearTabla ct[10];

  switch(opcion){
    case 1:
      break;
  }


}

int initMenu()
{

    int op;

    do{
        printf("1.Crear tabla\n");
        printf("2.Consultar tabla\n");
        printf("3.Editar tabla\n");
        printf("4.Eliminar tabla\n");
        printf("\nOpcion: ");

        scanf("%d", &op);

        opcion(op);

    }while(true);

}


void opcion(int orden)
{

    switch(orden){

    case 1:
        ReadJson("Tables.json", orden);
        printf("\n");
        break;
    case 2:
        ReadJson("Tables.json", orden);
        printf("\n");
        break;
    case 3:
        ReadJson("Tables.json", orden);
        printf("\n");
        break;
    case 4:
        ReadJson("Tables.json",orden);
        printf("\n");
        break;

    }

}

int main(int argc, char *argv[])
{
    struct CrearTabla crear_tabla[10];
    initMenu();

    return 0;
}
