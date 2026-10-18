#include "algorithms/sorting.c"
#include "lib/printArray.h"
#include <stdlib.h>

int main(void) {

  int length = 20;
  int intArray[length];

  for (int i = 0; i < length; i++) {
    intArray[i] = rand() % 1000;
  }

  int lookupIndex = 10;
  int lookupValue = intArray[lookupIndex];

  printArray(intArray, length, "Unsorted");

  int *insertionSortArray = insertionSort(intArray, length);
  printArray(insertionSortArray, length, "Insertion Sort");

  return 0;
}
