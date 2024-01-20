import java.util.*;

public class pivot {
    static int pivotElement(int arr[], int start, int end) {
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (mid > 0 && arr[mid] < arr[mid - 1]) {
                return arr[mid - 1];
            }
            if (arr[start] <= arr[mid] && arr[mid] > arr[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
            return arr[start];
        }
        return -1;
    }

    public static void main(String[] args) {
        int arr[] = { 4, 5, 6, 7, 1, 2, 3 };
        System.out.println("The pivot element is " + pivotElement(arr, 0, arr.length - 1));
    }
}