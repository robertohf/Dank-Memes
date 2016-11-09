#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


struct CrearTabla{

    char *nombre;
    int id;
    int orden;

    struct CrearTabla *next;

};

struct Tabla{
  char nombre[20];
  int primerBloqueCampos;
  int primerBloqueRegistros;
};

struct EncabezadoBloqueTabla{
  int next;
  int before;
  int cant_Tablas;
  int tamano_registros;
};

struct CrearCampo{

  char *nombre_campo;

  struct CrearCampo *next;
};


struct ConsultarTabla{

    char *nombre;
    int id;
    int orden;

};

struct EditarTabla{

    char *nombre;
    int id;
    int orden;
    char subopciones;

};

struct ElimarTabla{

    char *nombre;
    int id;
    int orden;

};
