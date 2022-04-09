import java.util.Scanner;

class column {
    public static void main(String[] args) {
        int rows, columns;
        System.out.println("How many rows and columns");
        Scanner scan = new Scanner(System.in);
        rows = scan.nextInt();
        columns = scan.nextInt();
        int[][] twodim = new int[rows][columns];
        // Input
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print("Enter Row" + i + " Columns " + j);
                twodim[i][j] = scan.nextInt();
                System.out.print("\n");
            }
        }
        // Column wise print
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print("|" + twodim[j][i] + "|");
            }
            System.out.print("\n");
        }
        scan.close();
    }
}