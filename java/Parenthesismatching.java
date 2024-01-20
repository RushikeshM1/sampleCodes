import java.util.*;

public class Parenthesismatching {
    static boolean checkparenthesis(String s) {
        Stack<Character> stac = new Stack<>();

        if (s.length() % 2 != 0) {
            return false;
        }

        for (char c : s.toCharArray()) {
            if (c == '(' || c == '{' || c == '[') {
                stac.push(c);
            } else if (c == ')' && !stac.isEmpty() && stac.peek() == '(') {
                stac.pop();
            } else if (c == '}' && !stac.isEmpty() && stac.peek() == '{') {
                stac.pop();
            } else if (c == ']' && !stac.isEmpty() && stac.peek() == '[') {
                stac.pop();
            }
        }
        if (stac.isEmpty()) {
            return true;
        } else {
            return false;
        }

    }

    public static void main(String[] args) {
        // parenthesis matching problem
        String s = "{{[}}";
        System.out.println(checkparenthesis(s));

    }

}
