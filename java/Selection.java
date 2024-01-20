import java.util.Arrays;

public class Selection {
    public static int isLargest(int[] arr, int start, int end) {
        int max = start;

        for (int i = start; i <= end; i++) {
            if (arr[max] < arr[i]) {
                max = i;
            }
        }
        return max;
    }

    public static void swap(int[] arr, int start, int end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

    }

    public static void main(String[] args) {
        int[] arr = { 5, 4, 3, 2, 1 };

        for (int i = 0; i < arr.length; i++) {
            int start = 0;
            int end = arr.length - i - 1;

            int maxi = isLargest(arr, start, end);
            swap(arr, maxi, end);

        }
        System.out.println(Arrays.toString(arr));
    }
}
