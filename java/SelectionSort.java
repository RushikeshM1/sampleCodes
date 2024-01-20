import java.util.Arrays;

public class SelectionSort {

    static int LargestNumber(int[] arr, int start, int end) {
        int largest = start;
        for (int i = start; i <= end; i++) {
            if (arr[largest] < arr[i]) {
                largest = i;
            }
        }
        return largest;
    }

    static void SwapNumbers(int arr[], int start, int end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }

    public static void main(String[] args) {
        int[] arr = { 5, 4, 3, 2, 1 };

        for (int i = 0; i < arr.length; i++) {
            int start = 0;
            int end = arr.length - i - 1;

            int largest = LargestNumber(arr, start, end);

            SwapNumbers(arr, largest, end);

        }
        System.out.println(Arrays.toString(arr));
    }
}
