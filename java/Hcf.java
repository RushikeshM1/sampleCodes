public class Hcf {

    static int GcdofNumbers(int a, int b) {
        if (a == 0) {
            return b;
        }
        return GcdofNumbers(b % a, a);
    }

    public static void main(String[] args) {
        int a = 4;
        int b = 9;

        System.out.println(GcdofNumbers(a, b));
    }
}
