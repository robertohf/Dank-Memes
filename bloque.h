#ifndef BLOQUE_H 
#define BLOQUE_H
#define BLOCK_CAPACITY (4);
#include "tabla.h"
typedef struct Block Block;

typedef struct 
{
	int size;//cantidad de tablas actualmente presente en bloque
	Block* prev;
	Block* next;
}Block_h;

struct Block
{
	Block_h* header;
	int capacity;
	Table* table;

};

void create_block(int capacity, Block* previous);
void clear_blocks(Block* b);
void clear_block(Block* b);


#endif
