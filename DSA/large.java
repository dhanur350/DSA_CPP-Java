import java.util.Scanner;

public class large {
    public static void main(String[] args) {
        try (Scanner scan = new Scanner(System.in)) {
            int n, i, largest = 0;
            n = scan.nextInt();
            int[] arr = new int[n];
            System.out.print("Enter numbers");
            for (i = 0; i < n; i++) {
                arr[i] = scan.nextInt();
            }
            for (i = 0; i < n; i++) {
                if (arr[i] > largest) {
                    largest = arr[i];
                }
            }
            System.out.print(" " + largest);
            scan.close();
        }
    }
}
