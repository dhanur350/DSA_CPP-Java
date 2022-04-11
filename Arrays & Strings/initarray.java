import java.util.Scanner;

public class initarray {
    public void returnFunction(int arr[][], int rows, int columns) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print(" " + arr[i][j]);
            }
            System.out.print("\n");
        }
    }

    public static void main(String[] args) {
        initarray init = new initarray();
        int[][] arr = { { 2, 3 }, { 4, 5 } };
        int rows, columns;
        // In Java Row dimension is compulsory to initialize , column is optional to be
        // declared.
        System.out.println("How many rows and columns ?");
        Scanner scan = new Scanner(System.in);
        rows = scan.nextInt();
        columns = scan.nextInt();
        init.returnFunction(arr, rows, columns);
        scan.close();
    }
}