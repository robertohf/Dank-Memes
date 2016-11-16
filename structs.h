#ifndef STRUCT_H  
#define STRUCT_H   

typedef struct {
  char nombre[20];
  int primerBloqueCampos;
  int primerBloqueRegistros;
}Tabla;

typedef struct {
  int next;
  int before;
  int cant_Tablas;
  int tamano_registros;
}EncabezadoBloqueTabla;

typedef struct
{
	EncabezadoBloqueTabla *h;
	Tabla* t;
}BloqueTabla;



#endif 
