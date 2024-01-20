public class Search {
    static int SearchLinear(int[] arr, int target) {
        int n = arr.length;

        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                return i;
            } else if (arr[i] > target) {
                return -1;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] arr = { 1, 2,3,4,5,6,7};
        int target = arr[4];
        System.out.println(SearchLinear(arr, target));
    }
}
