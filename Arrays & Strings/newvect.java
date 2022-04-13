import java.util.*;

public class newvect {
    public static void main(String[] args) {
        Vector<Integer> vect = new Vector<>();
        // Declaration method to use Vector in Java
        // In C++ we use vect.pushback(num) and add variable in C++ but in Java we'll
        // use vect.add(num) and add into it's function of add
        for (int i = 0; i < 20; i++) {
            vect.add(i);
        }
        for (int i = 0; i < 20; i++) {
            System.out.print("|" + i);
        }
        System.out.print("|");
        // To get size of this vector till used
        System.out.println("\nSize: " + vect.size());
        // To get capacity of this vector till used
        System.out.println("Capacity: " + vect.capacity());
    }
}
