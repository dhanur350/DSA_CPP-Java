package DSA;

import java.util.Scanner;

class search{
    public static void main(String[] args) {
        int row,column;
        Scanner scan = new Scanner(System.in);
        try {
            System.out.println("Enter the input?");
            row = scan.nextInt();
            column = scan.nextInt();
            // System.out.println(row+column); 
            int matrix[][] = new int[row][column];
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < column; j++) {
                    matrix[row][column] = scan.nextInt();
                }
            }
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < column; j++) {
                    System.out.println(matrix[row][column]);
                }
            }
        } catch (Exception e) {
            // TODO: handle exception
            System.err.println(e);
        }
        scan.close();
        // System.out.println("hello");
    }
}