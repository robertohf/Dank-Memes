#ifndef BLOQUE_H 
#define BLOQUE_H

typedef struct 
{
	int CapacidadBloque;

}Bloque;

Bloque *next = NULL;
Bloque *head = NULL;

void CreateBloque(int CapacidadBloque)
{
	struct Bloque *tmp = malloc(sizeof(Bloque));

	tmp->CapacidadBloque = CapacidadBloque;
	//Agregar unas ciertas cantidad de tablas en el bloque, despues de llenar la capacidad crear un loque diferente... 

	head = tmp;
}



#endif