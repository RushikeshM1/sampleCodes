public class SpecialCharacter {
    public static int isSpecialcharacter(String name) {
        int count = 0;
        String ans = "";
        for (int i = 0; i < name.length(); i++) {
            if (Character.isDigit(name.charAt(i)) || Character.isLetter(name.charAt(i))) {
                continue;
            } else {
                // ans += name.charAt(i);
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        String Name = "rushikesh@#$";

        System.out.println(isSpecialcharacter(Name));
        // System.out.println(Character.isDigit('r'));
        // System.out.println(Character.isDigit(10));
        // System.out.println(!Character.isLetter('r'));
    }
}
