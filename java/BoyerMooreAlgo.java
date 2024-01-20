public class BoyerMooreAlgo {
    static int majority(int[] arr) {
        int count = 0, element = -1, n = arr.length;

        for (int i = 0; i < n; i++) {
            if (count == 0) {
                element = arr[i];
                count = 1;
            } else if (element == arr[i]) {
                count++;
            } else {
                count--;
            }
        }
        return element;
    }

    public static void main(String[] args) {
        // BOYER-MOORE MAJORITY VOTE ALGORITHM....
        int[] arr = { 1, 2, 2, 2, 3, 4 };
        System.out.println(majority(arr));
    }
}
