public class DiamondPattern {
    //DIAMOND PATTERN I DID IT ON MY OWN BRO LETS GO BRO......
    public static void main(String[] args) {
        int row = 5;

        for (int i = 1; i <= row; i++) {
            for (int j = 0; j <= row - i; j++) {
                System.out.print("*");
            }
            for (int k = 1; k < i; k++) {
                System.out.print(" ");
            }
            for (int k = 1; k <= i; k++) {
                System.out.print(" ");
            }
            for (int j = 0; j <= row - i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
            for (int i = row; i >0; i--) {
            for (int j = 0; j <= row - i; j++) {
                System.out.print("*");
            }
            for (int k = 1; k < i; k++) {
                System.out.print(" ");
            }
            for (int k = 1; k <= i; k++) {
                System.out.print(" ");
            }
            for (int j = 0; j <= row - i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
