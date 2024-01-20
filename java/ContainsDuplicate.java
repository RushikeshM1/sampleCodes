import java.util.*;

public class ContainsDuplicate {

    public static boolean checkDuplicates(int[] arr) {
        HashSet<Integer> set = new HashSet<>();

        for (int i = 0; i < arr.length; i++) {
            if (set.contains(arr[i])) {
                return true;
            } else {
                set.add(arr[i]);
            }
        }
        return false;
    }

    public static void main(String[] args) {
        int[] arr = { 1, 2, 3 };

        boolean ans = checkDuplicates(arr);
        System.out.println(ans);
    }
}
