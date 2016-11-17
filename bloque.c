#include <stdio.h>
#include <stdlib.h>
#include "bloque.h"

void create_block(int capacity, Block* previous)
{
	Block_h *tmp = malloc(6);
	tmp->size = capacity;
	Block tmp = malloc(6);
	
	tmp->next = NULL;
	tmp->prev = previous;
	previous->next = tmp;
}

void clear_blocks(Block* b)
{
	Block *tmp = b;
	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	while(tmp->prev != NULL)
	{
		tmp = tmp->prev;
		clear(tmp->next);
	}
	clear(tmp);
	clear(b);
}

void clear_block(Block* b)
{
	(tmp->prev)->next = tmp->next;
	free(tmp);
}
