#ifndef VALUE_H_INC
#define VALUE_H_INC

#include<.\common.h>
#include<.\memory.h>
#include<stdio.h>
typedef double Value;

typedef struct
{
  int capacity;
  int count;
  Value* values;
} ValueArray;

void InitValueArray(ValueArray* array)
{
  array->values = NULL;
  array->capacity = 0;
  array->count = 0;
}
void WriteValueArray(ValueArray* array, Value value)
{
  if(array->capacity < array->count + 1)
  {
    int oldCapacity = array->capacity;
    array->capacity = GROW_CAPACITY(oldCapacity);
    array->values = GROW_ARRAY(Value, array->values, oldCapacity, array->capacity);
  }

  array->values[array->count] = value;
  array->count++;
}
void FreeValueArray(ValueArray* array)
{
  FREE_ARRAY(Value, array->values, array->capacity);
  InitValueArray(array);
}

void PrintValue(Value value)
{
  printf("%g", value);
}

#endif