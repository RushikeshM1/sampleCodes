public class PascalsTriangle {
    static int coloumnandrowelement(int n, int r) {
        int res = 1;
        for (int i = 0; i < r; i++) {
            res = res * (n - i);
            res = res / (i + 1);
        }
        return res;
    }

    public static void main(String[] args) {
        // int row = 5;

        // for (int i = 1; i <= row; i++) {
        // for (int j = 0; j <= row - i; j++) {
        // System.out.print(" ");
        // }
        // int c = 1;
        // for (int k = 1; k <= i; k++) {
        // System.out.print(c + " ");
        // c = c * (i - k) / k;

        // }
        // System.out.println();
        // }

        int row = 5, coloumn = 3;
        // ans ==6;

        System.out.println("The answer is "+ coloumnandrowelement(row - 1, coloumn - 1));
    }
}
