import java.util.*;

public class Union {
    static int Unionn(int arr1[], int arr2[]) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < arr1.length; i++) {
            set.add(arr1[i]);
        }
        for (int i = 0; i < arr2.length; i++) {
            set.add(arr2[i]);
        }

        return set.size();
    }

    public static void main(String[] args) {
        int arr[] = { 7, 3, 9 };
        int arr1[] = { 6, 3, 9, 2, 9, 4 };
        System.out.println(Unionn(arr, arr1));
    }
}