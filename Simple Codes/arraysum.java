import java.util.Scanner;

public class arraysum {
    public static void main(String[] args) {
        int i, n, sum = 0;
        System.out.print("\n How many items you want to enter ?");
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        int[] arr = new int[n];
        System.out.print("\n Enter " + n + " items");
        for (i = 0; i < n; i++) {
            arr[i] = scan.nextInt();
        }
        for (i = 0; i < n; i++) {
            sum = sum + arr[i];
        }
        System.out.print("\n Sum is " + sum);
    }
}
