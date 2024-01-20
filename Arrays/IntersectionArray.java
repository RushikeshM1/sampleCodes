import java.util.*;

public class IntersectionArray {
    static int intersection(int arr[], int arr1[]) {
        HashSet<Integer> set = new HashSet<>();

        for (int i = 0; i < arr.length; i++) {
            set.add(arr[i]);
        }
        int count = 0;
        for (int i = 0; i < arr1.length; i++) {
            if (set.contains(arr1[i])) {
                count++;
                set.remove(arr[i]);
            }
        }
        return count;
    }

    public static void main(String[] args) {
        int arr[] = { 7, 3, 9 };
        int arr1[] = { 6, 3, 9, 2, 9, 4 };
        System.out.println(intersection(arr, arr1));
    }
}
