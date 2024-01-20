import java.util.HashSet;
import java.util.*;

public class Longestcommon {

    public static int longestsub(String s) {
        int i = 0;
        int j = 0;
        int maxi = 0;
        HashSet<Character> set = new HashSet<>();
        while (j < s.length()) {
            if (!set.contains(s.charAt(j))) {
                 set.add(s.charAt(j));
                 j++;
                 maxi=Math.max(maxi, set.size());
            }
            else{
                set.remove(s.charAt(i));
                i++;
            }
        }
        return maxi;
    }

    public static void main(String[] args) {
        String longest = "pwwkew";

        System.out.println(longestsub(longest));
    }
}
