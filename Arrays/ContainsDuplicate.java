import java.util.*;

public class ContainsDuplicate {
    static int duplicateValue(int arr[]) {
        HashSet<Integer> set = new HashSet<>();
        int count=0;
        for (int i = 0; i < arr.length; i++) {

            if (set.contains(arr[i])) {
                count++;
            }
            set.add(arr[i]);
        }
        return count;
    }

    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4,4, 5, 5, 6 };
        System.out.println(duplicateValue(arr));
    }
}