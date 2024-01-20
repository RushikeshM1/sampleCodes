public class Armstrong {
    public static boolean checkisArmstrong(int num) {
        int n = num;
        int sum = 0;
        while (n > 0) {
            int lastDigit = n % 10;
            sum += lastDigit * lastDigit * lastDigit;
            n = n / 10;
        }

        if (num == sum) {
            return true;
        } else {
            return false;
        }

    }

    public static void main(String[] args) {
        int num = 370;
        boolean ans = checkisArmstrong(num);
        System.out.println(ans);
    }
}
