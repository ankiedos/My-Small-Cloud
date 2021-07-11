#ifndef CHUNK_H_INC
#define CHUNK_H_INC

#include<.\common.h>
#include<.\memory.h>
#include<.\value.h>

typedef enum
{
	OP_RETURN,
	OP_RET,
	OP_CONST
} OPCODE;

typedef struct
{
	int count;
	size_t capacity;
	uint8_t* code;
	int* lines;
	ValueArray constants;
} Chunk;

void InitChunk(Chunk* chunk)
{
  chunk->count = 0;
  chunk->capacity = 0;
  chunk->code = NULL;
  chunk->lines = NULL;
  InitValueArray(&chunk->constants);
}

void WriteChunk(Chunk* chunk, uint8_t byte, int line)
{
  if(chunk->capacity < chunk->count + 1)
  {
    int old_capacity = chunk->capacity;
    chunk->capacity = GROW_CAPACITY(old_capacity);
    chunk->code = GROW_ARRAY(uint8_t, chunk->code, old_capacity, chunk->capacity);
	chunk->lines = GROW_ARRAY(int, chunk->lines, old_capacity, chunk->capacity);
  }

  chunk->code[chunk->count] = byte;
  chunk->lines[chunk->count] = line;
  chunk->count++;
}

int AddConstant(Chunk* chunk, Value value)
{
  WriteValueArray(&chunk->constants, value);
  return chunk->constants.count - 1;
}

void FreeChunk(Chunk* chunk)
{
  FREE_ARRAY(uint8_t, chunk->code, chunk->capacity);
  FREE_ARRAY(int, chunk->lines, chunk->capacity);
  FreeValueArray(&chunk->constants);
  InitChunk(chunk);
}

#endif