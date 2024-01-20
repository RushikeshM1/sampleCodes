public class FindMissing {
    static int ans(int arr[]) {
        int n = arr.length;
        int found = 0;
        for (int i = 1; i <= n; i++) {
            found = 0;
            for (int j = 0; j < n; j++) {
                if (arr[j] == i) {
                    found = 1;

                }
            }
            if (found == 0) {
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4 };
        // ans ==5 as 5 is missing in array

        System.out.println(ans(arr));
    }
}
