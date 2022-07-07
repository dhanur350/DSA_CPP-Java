import java.util.*;

public class vect {
    public static void main(String[] args) {
        Vector<Integer> vect = new Vector<>();
        Scanner scan = new Scanner(System.in);
        int n;
        n = scan.nextInt();
        for (int i = 0; i < n; i++) {
            vect.add(i + 100);
        }
        System.out.println();
        for (int i = 0; i < vect.size(); i++) {
            System.out.print(" " + vect.get(i));
        }
        scan.close();
    }
}
