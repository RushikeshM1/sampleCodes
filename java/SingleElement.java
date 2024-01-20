public class SingleElement {
    static int ans(int[] arr) {
        int n = arr.length;
        int missingNum = arr[0];
        for (int i = 1; i < n; i++) {
            missingNum ^= arr[i];
            
        }
        return missingNum;
    }

    public static void main(String[] args) {
        int[] arr = { 1, 1, 2, 2, 3 };

        System.out.println("The element that appears once is "+ans(arr));
    }

}
