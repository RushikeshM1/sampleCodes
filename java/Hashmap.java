import java.util.HashMap;

public class Hashmap {
    // static void hashmappcount(int arr[]) {
    // HashMap<Integer, Integer> map = new HashMap<>();

    // for (int i = 0; i < arr.length; i++) {
    // if (map.containsKey(arr[i])) {
    // map.put(arr[i], map.get(arr[i]) + 1);
    // } else {
    // map.put(arr[i], 1);
    // }
    // }
    // System.out.println(map);
    // }

    public static void main(String[] args) {

        int[] arr = { 1, 2, 3, 1, 2, 2, 2, 1 };
        HashMap<Integer, Integer> map = new HashMap<>();
        // System.out.println(hashmappcount(arr));

        // hashmappcount(arr);

        for (int i = 0; i < arr.length; i++) {
            map.put(arr[i], 0);
        }
        System.out.println(map);

        System.out.println(map.get(arr[0]) + 1);
    }
}
