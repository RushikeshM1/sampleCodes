import java.util.*;

class Pen {
    public String name;

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

}

public class OOps {
    public static void main(String[] args) {
        Pen pen1 = new Pen();
        pen1.setName("Reynolds");
        System.out.println(pen1.getName());
    }
}
