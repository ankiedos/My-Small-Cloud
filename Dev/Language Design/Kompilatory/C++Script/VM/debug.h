#ifndef DEBUG_H_INC
#define DEBUG_H_INC

#include<.\chunk.h>
#include<stdio.h>

static int SimpleInstruction(const char* name, int offset)
{
  printf("%s\n", name);
  return offset + 1;
}

static int ConstantInstruction(const char* name, Chunk* chunk, int offset)
{
  uint8_t constant = chunk->code[offset + 1];
  printf("%-16s %4d '", name, constant);
  PrintValue(chunk->constants.values[constant]);
  printf("'\n");
  return offset + 2;
}

int DisassembleInstruction(Chunk* chunk, int offset)
{
  printf("%04d ", offset);

  if(offset > 0 && chunk->lines[offset] == chunk->lines[offset - 1])
  {
    printf("   | ");
  }
  else
  {
    printf("%4d ", chunk->lines[offset]);
  }

  uint8_t instruction = chunk->code[offset];
  switch(instruction)
  {
    case OP_RETURN:
      return SimpleInstruction("OP_RETURN", offset);
	case OP_CONST:
	  return ConstantInstruction("OP_CONST", chunk, offset);
    default:
      printf("Unknown opcode %d\n", instruction);
      return offset + 1;
  }
}

void DisassembleChunk(Chunk* chunk, const char* name)
{
	printf("== %s ==\n", name);

	for(int offset = 0; offset < chunk->count; offset++)
	{
		offset = DisassembleInstruction(chunk, offset);
	}
}

#endif