#ifndef VM_H_INC
#define VM_H_INC


#include<.\chunk.h>

typedef struct
{
	Chunk* chunk;
	uint8_t* ip;
} VM;

typedef enum
{
  INTERPRET_SUCCESS,
  INTERPRET_COMPILE_ERROR,
  INTERPRET_RUNTIME_ERROR
} InterpretResult;
VM vm;

void InitVM()
{
	// ...
}
void FreeVM()
{
	// ...
}

static InterpretResult run()
{
#define READ_BYTE() (*vm.ip++)

  for(;;)
  {
    uint8_t instruction;
    switch(instruction = READ_BYTE())
	{
      case OP_RETURN:
        return INTERPRET_SUCCESS;
    }
  }

#undef READ_BYTE
}

InterpretResult Interpret(Chunk* chunk)
{
  vm.chunk = chunk;
  vm.ip = vm.chunk->code;
  return run();
}
#endif