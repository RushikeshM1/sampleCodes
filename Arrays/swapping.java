import java.util.*;

public class swapping {
    public static void change(int a, int b) {
        int temp = a;
        a = b;
        b = temp;
        System.out.println(a + " " + b);

    }

    public static void main(String[] args) {
        int a = 3;
        int b = 5;
        change(a, b);

    }
}
