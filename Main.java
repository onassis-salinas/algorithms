
import java.util.Arrays;
import java.util.Random;

public class Main {

    public static void main(String[] args) {

        int[] array = new int[20];
        Random random = new Random();

        for (int i = 0; i < array.length; i++) {
            array[i] = random.nextInt(1000);
        }

        int[] sortedArray = SortingAlgorithms.insertionSort(array);
        int lookupIndex = 10;
        int lookup = sortedArray[lookupIndex];

        System.out.println("---Sorting---");
        System.out.println("Selection Sort :" + Arrays.toString(SortingAlgorithms.selectionSort(array)));
        System.out.println("Insertion Sort :" + Arrays.toString(SortingAlgorithms.insertionSort(array)));
        System.out.println("Merge  Sort    :" + Arrays.toString(SortingAlgorithms.insertionSort(array)));

        System.out.printf("---Searching(%s)---%n", lookupIndex);
        System.out.println("Linear search :" + SearchAlgorithms.linearSearch(sortedArray, lookup));
        System.out.println("Binary search :" + SearchAlgorithms.binarySearch(sortedArray, lookup));
    }
}
