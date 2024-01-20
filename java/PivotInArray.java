public class PivotInArray {

    static int Pivotelement(int[] arr) {
        int start = 0;
        int end = arr.length - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] < arr[mid - 1] && mid > 0) {
                return mid;
            } else if (arr[start] <= arr[mid] && arr[mid] > arr[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return start;
    }

    static int BinarySearch(int[] arr, int target, int start, int end) {

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return -1;
    }

    static int ans(int[] arr, int pivot, int target) {
        if (target == arr[pivot]) {
            return pivot;
        } else if (target > arr[pivot] && target >= arr[0]) {
            return BinarySearch(arr, target, 0, pivot - 1);
        } else {
            return BinarySearch(arr, target, pivot + 1, arr.length-1);
        }

    }

    public static void main(String[] args) {

        // i am gussing lowest number in array as a pivot element
        int[] arr = { 4, 5, 6, 7, 1, 2, 3 };
        int pivotElement = Pivotelement(arr);
        System.out.println(pivotElement);
        int anss = ans(arr, pivotElement, 4);
        System.out.println(anss);

    }
}