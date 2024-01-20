public class EvenOddd {
    static void evenodd(int[] arr) {
        int left = 0, right = arr.length - 1, n = arr.length;
        int newarr[] = new int[n];
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                newarr[left] = arr[i];
                left++;
            } else {
                newarr[right] = arr[i];
                right--;
            }
        }
        for (int i = 0; i < n; i++) {
            System.out.print(newarr[i] + " ");
        }
    }

    public static void main(String[] args) {
        int[] arr = { 12, 34, 45, 9, 8, 90, 3 };
        evenodd(arr);
    }
}
