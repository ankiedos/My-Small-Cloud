template <typename T>
struct Array
{
  int array_size;
  T *array;
  int count;

  Array(u32 size = 8)
  {
    array = nullptr;
    reserve(size);
    count = 0;
  }

  void reserve(u32 size)
  {
    if(!array)
    {
      array_size = size;
      array = new T[size];
      return;
    }
    if(size > array_size)
    {
      T *temp_array = array;
      array = new T[size];
      memcpy(array, temp_array, sizeof(T) * size);
      delete[] temp_array;
    }
    array_size = size;
  }

  void push(const T &element)
  {
    if(count + 1 >= array_size)
    {
      reserve(count + 1);
    }
    array[count++] = element;
  }
};

typedef Array<char> String;