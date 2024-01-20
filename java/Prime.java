public class Prime {
    static boolean checkprime(int n) {
        if (n <= 1) {
            return false;
        }

        int c = 2;
        while (c * c <= n) {
            if (n % c == 0) {
                return false;
                
            }
            c++;
        }
        return true;
    }

    public static void main(String[] args) {
        int n = 20;
        for (int i = 1; i <= n; i++) {
            System.out.println(i + " " + checkprime(i));
        }

        // System.out.println(100 + 100 + " keep on coding");
        // System.out.println(" keep on coding" + 100 + 100);
    }
}
