import java.util.Scanner;

public class MultiplicationTable {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();

        System.out.println("The multiplication table of " + num + " is: ");
        for (int i = 1; i <= 10; i++) {
            System.out.println(num * i);
        }

    }
}
