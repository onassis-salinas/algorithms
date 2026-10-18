#include <stdio.h>

void printArray(int *array, int length, char name[]) {
  printf("-%s: \n", name);
  for (int i = 0; i < length; i++) {
    printf("%d,", array[i]);
  }
  printf("\n\n");
}