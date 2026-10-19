#include "algorithms/searching.c"
#include "algorithms/sorting.c"
#include "lib/printArray.h"
#include <stdio.h>
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

  int *sortedArray = insertionSort(intArray, length);

  int *insertionSortArray = insertionSort(intArray, length);
  printArray(insertionSortArray, length, "Insertion Sort");

  int *selectionSortArray = insertionSort(intArray, length);
  printArray(selectionSortArray, length, "Selection Sort");

  printf("\nLookup: Value(%d)\n", lookupValue);

  printf("Linear Search: %d \n",
         linearSearch(sortedArray, length, lookupValue));

  return 0;
}
