#ifndef TABLA_H 
#define TABLA_H 
typedef struct 
{
	char nombre[20];
	int primerBloqueCampos;
	int primerBloqueRegistros;
}Table;

void fill_table(Table*);
void del_table(Table*);

#endif
