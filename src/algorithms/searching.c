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

int binarySearch(int array[], int lookup, int start, int end) {
  int middle = start + (end - start) / 2;

  if (array[middle] == lookup) {
    return middle;
  }
  if (start == end) {
    return -1;
  }
  if (array[middle] > lookup) {
    return binarySearch(array, lookup, start, middle);
  } else {
    return binarySearch(array, lookup, middle, end);
  }
}