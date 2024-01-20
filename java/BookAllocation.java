public class BookAllocation {
    static int Bookallocate(int[] arr, int m) {
        int start = 0;
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        int end = sum;

        int ans = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (isPossible(arr, m, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }

    static boolean isPossible(int[] arr, int m, int mid) {
        int studentCount = 1;
        int pageCount = 0;

        for (int i = 0; i < arr.length; i++) {
            if (pageCount + arr[i] <= mid) {
                pageCount += arr[i];
            } else {
                studentCount++;
                if (studentCount > m || arr[i] > mid) {
                    return false;
                }
                pageCount = arr[i];
            }
        }
        return true;
    }

    public static void main(String[] args) {
        // bool allocation problem
        int[] arr = { 10, 20, 30, 40 };
        int student = 2;

        System.out.println("The minimum count is " + Bookallocate(arr, student));
    }
}
