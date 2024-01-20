import java.util.Arrays;

public class FirstAndLastPosition {

    static int BinarySearch(int[] arr, int target, boolean isFirstIndex) {
        int length = arr.length;
        int start = 0;
        int end = length - 1;
        int ans = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target) {
                if (isFirstIndex) {
                    ans = mid;
                    end = mid - 1;
                } else {
                    ans = mid;
                    start = mid + 1;
                }
            } else if (arr[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;

    }

    public static void main(String[] args) {
        int[] arr = { 0, 0, 1, 1, 2, 2, 2, 2 };
        int[] ans = { -1, -1 };

        ans[0] = BinarySearch(arr, 2, true);
        ans[1] = BinarySearch(arr, 2, false);

        System.out.println(Arrays.toString(ans));

        int TotalOccurance=(ans[1]-ans[0])+1;

        System.out.println("The total occurances of number is "+TotalOccurance);
    }
}
