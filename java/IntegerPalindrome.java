public class IntegerPalindrome {
    public static boolean checkpalindrome(int num) {
        int Newnum = num;
        int number = 0;
        while (Newnum > 0) {
            int ans = Newnum % 10;
            number = number * 10 + ans;
            Newnum = Newnum / 10;
        }

        if (number == num) {
            return true;
        } else {
            return false;
        }

    }

    public static void main(String[] args) {
        int num = 12321;
        boolean ans = checkpalindrome(num);
        System.out.println(ans);
    }
}
