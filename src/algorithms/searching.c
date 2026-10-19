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

// int binarySearch(int array[], int length, int lookup)