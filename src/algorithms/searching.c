int linearSearch(int array[], int length, int lookup) {
  for (int i = 0; i < length; i++) {
    if (lookup < array[i]) {
      return -1;
    }

    if (lookup == array[i]) {
      return i;
    }
  }

  return -1;
}

int binarySearch(int array[], int length, int lookup) {
  int start = 0;
  int end = length;

  while (start < end) {
    int middle = start + ((end - start) / 2);

    if (array[middle] < lookup) {
      start = middle + 1;
    } else {
      end = middle;
    }
  }

  if (start < length && array[start] == lookup) {
    return start;
  }
  return -1;
}