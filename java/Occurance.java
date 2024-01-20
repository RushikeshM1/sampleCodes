public class Occurance {

    static void countoccurance(String name) {
        int size = name.length();

        for (int i = 0; i < size; i++) {
            int count = 0;
            for (int j = 0; j < size; j++) {
                if (j < i && name.charAt(i) == name.charAt(j)) {
                    break;
                }
                if (name.charAt(i) == name.charAt(j)) {
                    count++;
                }
            }
            if (count != 0)
                System.out.println("The occurance of character " + name.charAt(i) + " is " + count);

        }
    }

    public static void main(String[] args) {
        String name = "rushikesh";

        countoccurance(name);
    }
}
