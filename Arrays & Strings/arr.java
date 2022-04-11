import java.util.Scanner;

public class arr {
    public static void main(String[] args) {
        // Simple technique to reverse print array
        Scanner scan = new Scanner(System.in);
        short n;
        n = scan.nextShort();
        short[] arr = new short[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scan.nextShort();
        }
        for (int i = n - 1; i >= 0; i--) {
            System.out.print("|" + arr[i]);
        }
        scan.close();
    }
}
