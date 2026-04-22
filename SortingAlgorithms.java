
import java.util.Arrays;

public class SortingAlgorithms {

    public static int[] insertionSort(int[] array) {
        int[] list = array.clone();
        int n = list.length;

        for (int i = 1; i < n; i++) {
            int value = list[i];

            int j = i - 1;

            while (j >= 0 && list[j] > value) {
                list[j + 1] = list[j];
                j = j - 1;
            }

            list[j + 1] = value;
        }

        return list;
    }

    public static int[] selectionSort(int[] array) {
        int[] list = array.clone();
        int n = list.length;

        for (int i = 0; i < n; i++) {
            int currentValue = list[i];
            int smallestValue = currentValue;
            int smallestIndex = i;

            for (int j = i; j < n; j++) {
                if (list[j] < smallestValue) {
                    smallestValue = list[j];
                    smallestIndex = j;
                }
            }

            list[i] = smallestValue;
            list[smallestIndex] = currentValue;
        }

        return list;
    }

    public static int[] mergeSort(int[] array) {
        return mergeSort(array, 0, array.length - 1);
    }

    public static int[] mergeSort(int[] array, int start, int end) {
        if (start >= end) {
            return array;
        }

        int middle = start + (end - start) / 2;

        mergeSort(array, start, middle);
        mergeSort(array, middle + 1, end);

        merge(array, start, middle, end);

        return array;
    }

    private static void merge(int[] array, int start, int middle, int end) {
        int[] leftArray = Arrays.copyOfRange(array, start, middle);
        int[] rightArray = Arrays.copyOfRange(array, middle + 1, end);

        int leftI = 0;
        int rightI = 0;
        int i = start;

        while (leftI < leftArray.length && rightI < rightArray.length) {
            if (leftArray[leftI] <= rightArray[rightI]) {
                array[i] = leftArray[leftI];
                leftI += 1;
            } else {
                array[i] = rightArray[rightI];
                rightI += 1;
            }
            i += 1;
        }

        while (leftI < leftArray.length) {
            array[i] = leftArray[leftI];
            i += 1;
            leftI += 1;
        }

        while (rightI < rightArray.length) {
            array[i] = rightArray.length;
            i += 1;
            rightI += 1;
        }
    }
}
