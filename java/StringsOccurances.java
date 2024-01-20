import java.util.HashMap;
import java.util.*;

public class StringsOccurances {
    // static void OccuranceCount(String Name) {
    // HashMap<Character, Integer> map = new HashMap<>();

    // for(int i=0;i<Name.length();i++){
    // map.put(Name.charAt(i), 1);
    // }
    // for(map.Entry<Character,Integer>e:map.entrySet()){

    // }

    // }

    public static void main(String[] args) {
        HashMap<Character, Integer> map = new HashMap<>();

        map.put('a', 1);
        map.put('b', 2);

        for (Map.Entry<Character, Integer> e : map.entrySet()) {
            System.out.println(e.getKey());
        }
    }

}
