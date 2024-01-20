import java.util.*;

public class Decimaltobinary {
    static void convertintodecimal(int n) {
        int i = 0;
        int arr[] = new int[100];
        // arr[0] = 0;

        while (n > 0) {
            int remainder = n % 2;
            arr[i++] = remainder;

            n = n / 2;
        }

        for (int j = i - 1; j >= 0; j--) {
            System.out.print(arr[j] + " ");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        convertintodecimal(n);
    }
}
