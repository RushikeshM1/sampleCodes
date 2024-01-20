public class Anagram {
    public static boolean checkAnagram(String s, String t) {
        int[] count = new int[26];
        if(s.length()!=t.length()){
            return false;
        }
        for (int i = 0; i < s.length(); i++) {
            count[s.charAt(i) - 'a']++;
            count[t.charAt(i) - 'a']--;
        }
        for(int countt:count){
            if(countt!=0){
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        String s = "anagram";
        String t = "nagaram";

        System.out.println(checkAnagram(s, t));
    }

}
