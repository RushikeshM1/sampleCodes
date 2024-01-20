import java.util.Arrays;

public class Evenodd {
    static void evenodd(int[] arr) {
        int n = arr.length;
        int index = 0;
        int newarr[];
        newarr = new int[n];
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                newarr[i] = arr[i];

                System.out.print(newarr[i] + " ");
            }
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                newarr[i] = arr[i];

                System.out.print(newarr[i] + " ");
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 5, 8, 10 };
        evenodd(arr);

    }
}