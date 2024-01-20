public class Eachcharoccurance {
    public static void Occurance(String name) {

        for (int i = 0; i < name.length(); i++) {
            int count = 0;
            for (int j = 0; j < name.length(); j++) {
                if (j < i && name.charAt(i) == name.charAt(j)) {
                    break;
                }
                if (name.charAt(i) == name.charAt(j)) {
                    count++;
                }

            }
            if (count != 0) {
                System.out.println("The occurane of character " + name.charAt(i) + " is " + count);
            }
        }
    }

    public static void main(String[] args) {
        String name = "rushikesh";

        Occurance(name);
    }
}
