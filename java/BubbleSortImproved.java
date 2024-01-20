import java.util.*;
public class BubbleSortImproved {

    public static void sort(int[] arr) {
        int pass, i, temp;
        int swapped=1;

        for (pass = arr.length - 1; pass>=0 && swapped; pass--) {
            swapped = 0;
            for (i = 0; i <= pass - 1; i++) {
                if (arr[i] > arr[i + 1]) {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    swapped = 1;
                }

            }
        }

        for (int j = 0; j < arr.length; j++) {
            System.out.print(arr[j] + " ");
        }
    }

    public static void main(String[] args) {
        int[] arr = { 10, 4, 43, 5, 57, 91, 45, 9, 7 };

        sort(arr);
    }

}
