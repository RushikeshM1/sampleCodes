public class pattern12 {
    public static void main(String[] args) {
        // pattern
        // 1
        // 121
        // 12321
        // 1234321
        // 123454321
        int row = 5;

        System.out.println("I did this pattern on my own no help from others");
        for (int i = 1; i <= row; i++) {
            for (int j = 1; j <= row - i; j++) {
                System.out.print(" ");

            }
            for (int k = 1; k <= i; k++) {
                System.out.print(k);
            }
            for (int m = i; m > 1; m--) {
                System.out.print(m - 1);
            }
            System.out.println();
        }
    }
}
