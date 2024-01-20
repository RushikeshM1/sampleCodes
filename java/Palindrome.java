public class Palindrome {

    public static boolean checkPalindrome(String name) {
        int length = name.length();

        int start = 0;
        int end = length - 1;

        while (start <= end) {
            if (name.charAt(start) != name.charAt(end)) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    public static void main(String[] args) {
        String palindrome = "abcba";

        boolean ans = checkPalindrome(palindrome);
        System.out.println(ans);

    }
}
