public class ClosetSum {
    static void ans(int[] arr) {
        int i, j, min_sum, sum, min_i, min_j, n = arr.length;

        if (n < 2) {
            System.out.println("Invalid input ");
            return;
        }

        min_i = 0;
        min_j = 1;

        min_sum = arr[0] + arr[1];

        for (i = 0; i < n - 1; i++) {
            for (j = i + 1; j < n; j++) {
                sum = arr[i] + arr[j];
                if (Math.abs(min_sum) > Math.abs(sum)) {
                    min_sum = sum;
                    min_i = i;
                    min_j = j;
                }
            }
        }
        System.out.println(arr[min_i] + " " + arr[min_j]);
    }

    public static void main(String[] args) {
        int[] arr = { 1, 60, -10, 70, -80, 85 };

        ans(arr);
    }
}
