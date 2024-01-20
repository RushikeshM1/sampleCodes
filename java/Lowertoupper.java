public class Lowertoupper {
    public static String UpperCase(String name) {
        String ans = "";
        for (int i = 0; i < name.length(); i++) {
            if (name.charAt(i) >= 97 && name.charAt(i) <= 122) {
                char a = name.charAt(i);
                a -= 32;
                ans += a;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        String name = "rushikesh";

        String anss = UpperCase(name);

        System.out.println(anss);
    }
}
