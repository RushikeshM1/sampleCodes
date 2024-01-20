import java.util.HashSet;

public class RemoveDuplicates {
    static void returnname(String name) {
        HashSet<Character> set = new HashSet<>();

        for (int i = 0; i < name.length(); i++) {
            set.add(name.charAt(i));
        }

        System.out.println(set);

    }

    public static void main(String[] args) {
        String name = "rushikesh";
        
        returnname(name);
    }
}
