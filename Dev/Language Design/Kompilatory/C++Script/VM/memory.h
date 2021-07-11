#ifndef MEMORY_H_INC
#define MEMORY_H_INC

#include<stdlib.h>
#define GROW_CAPACITY(capacity) \
((capacity) < 8 ? 8 : (capacity) * 2)

#define GROW_ARRAY(type, pointer, oldCount, newCount) \
(type*) Reallocate(pointer, sizeof(type) * (oldCount), sizeof(type) * (newCount))

#define FREE_ARRAY(type, pointer, oldCount) Reallocate(pointer, sizeof(type) * (oldCount), 0)

void* Reallocate(void* pointer, size_t oldSize, size_t newSize)
{
  if(newSize == 0)
  {
    free(pointer);
    return NULL;
  }

  void* result = realloc(pointer, newSize);
  if(result == NULL) exit(1);
  return result;
}

#endif