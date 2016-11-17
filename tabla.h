#ifndef TABLA_H 
#define TABLA_H 
typedef struct 
{
	char nombre[20];
	int primerBloqueCampos;
	int primerBloqueRegistros;
}Tabla;

void fill_table(Tabla*);
void del_table(Tabla*);

#endif
