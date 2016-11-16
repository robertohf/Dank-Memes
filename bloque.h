#ifndef BLOQUE_H 
#define BLOQUE_H

typedef struct 
{
	int PrimerBloque;
	int CapacidadBloque;

}Bloque;

Bloque *next = NULL;
Bloque *head = NULL;

void CreateBloque(int CapacidadBloque)
{
	struct Bloque *tmp = malloc(sizeof(Bloque));

	tmp->CapacidadBloque = CapacidadBloque;

	head = tmp;
}



#endif