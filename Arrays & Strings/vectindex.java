import java.util.*;

public class vectindex {
    public static void main(String[] args) {
        Vector<Integer> vect = new Vector<>();
        int n;
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        for (int i = 0; i < n; i++) {
            vect.add(i + 100);
        }
        // Let's see what array looks like
        for (int i = 0; i < vect.size(); i++) {
            System.out.print("|" + vect.get(i));
        }
        System.out.println();
        // To add element at particular index direct use
        // vect.insertElementAt(obj,index);
        vect.insertElementAt(2000, 3);
        for (int i = 0; i < vect.size(); i++) {
            System.out.print("|" + vect.get(i));
        }
        System.out.println();
        // We can still add some elements of our own using vect.add(element);
        vect.add(5000);
        vect.add(6000);
        // After that vector prints new elements
        for (int i = 0; i < vect.size(); i++) {
            System.out.print("|" + vect.get(i));
        }
        scan.close();
    }
}
