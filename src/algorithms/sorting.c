#include "../lib/cloneArray.h"

int *insertionSort(int array[], int length) {
  int *list = cloneArray(array, length);

  for (int i = 1; i < length; i++) {
    int value = list[i];

    int j = i - 1;

    while (j >= 0 && list[j] > value) {
      list[j + 1] = list[j];
      j--;
    }

    list[j + 1] = value;
  }

  return list;
}
