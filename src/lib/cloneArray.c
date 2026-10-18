#include <stdlib.h>

int *cloneArray(int *array, int length) {
  int *list = malloc(length * sizeof(int));

  for (int i = 0; i < length; i++) {
    list[i] = array[i];
  }

  return list;
}