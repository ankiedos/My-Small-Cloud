#include<.\common.h>
#include<.\chunk.h>
#include<.\debug.h>
#include<.\VM.h>
int main(int argc, char** argv)
{
	InitVM();
	Chunk chunk;
    InitChunk(&chunk);
	int constant = AddConstant(&chunk, 1.2);
    WriteChunk(&chunk, OP_CONST, 123);
    WriteChunk(&chunk, constant, 123);
    WriteChunk(&chunk, OP_RET, 123);
	WriteChunk(&chunk, OP_RETURN, 123);
	DisassembleChunk(&chunk, "test chunk");
	Interpret(&chunk);
	FreeVM();
    FreeChunk(&chunk);
	return 0;
}