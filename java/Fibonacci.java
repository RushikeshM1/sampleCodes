public class Fibonacci {

    static int fibonaccinumber(int n) {

        int FirstTerm = 0;
        int SecondTerm = 1;
        int nextterm = 0;
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        for (int i = 3; i <= n; i++) {

            nextterm = FirstTerm + SecondTerm;
            FirstTerm = SecondTerm;
            SecondTerm = nextterm;
        }
        return nextterm;
    }

    public static void main(String[] args) {
        int n = 7;
        System.out.println(fibonaccinumber(n));
    }
}
