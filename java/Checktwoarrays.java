import java.util.Arrays;

public class Checktwoarrays {

    static boolean checking(int[] arr1, int[] arr2) {
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        int n=arr1.length;
        int m=arr2.length;

        if(n!=m){
            return false;
        }
        
        for(int i=0;i<arr1.length;i++){
            if(arr1[i]!=arr2[i]){
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        int arr1[] = { 1, 2, 5, 3, 7 };
        int arr2[] = { 2, 3, 1, 4, 5 };

        System.out.println(checking(arr1, arr2));
    }
}
