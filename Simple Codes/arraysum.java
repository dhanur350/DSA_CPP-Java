import java.util.Scanner;

public class arraysum {
    public static void main(String[] args) {
        int i, n, sum = 0;
        System.out.print("\n How many items you want to enter ?");
        try (Scanner scn = new Scanner(System.in)) {
            n = scn.nextInt();
            int[] arr = new int[n];
            System.out.print("\n Enter " + n + " items");
            for (i = 0; i < n; i++) {
                arr[i] = scn.nextInt();
            }
            for (i = 0; i < n; i++) {
                sum = sum + arr[i];
            }
            System.out.print("\n Sum is " + sum);
            scn.close();
        }
    }
}
