// package DSA;

import java.util.Scanner;

class search{
    public static void main(String[] args) {
        int row,column;
        Scanner scan = new Scanner(System.in);
        // try {
            // System.out.println("Enter the input?");
            // row = scan.nextInt();
            row = 2; column = 2;
            // column = scan.nextInt();
            // System.out.println(row+column); 
            int[][] matrix = new int[row][column];

            // System.out.println(matrix[1][1]);
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < column; j++) {
                    matrix[i][j] = scan.nextInt();
                }
            }
            for (int i = 0; i < row - 1; i++) {
                for (int j = 0; j < column - 1; j++) {
                    System.out.println(matrix[i][j]);
                }
            }
            int count = 0;
            for (int i = 0; i < row - 1; i++) {
                for (int j = 0; j < column - 1; j++) {
                    if(matrix[i][j] == 1){
                        count = count + 1;
                    }
                    System.out.print("\n");
                }
            }
            System.out.println("no. of 1's" + count);
        // }
        scan.close();
        // System.out.println("hello");
    }
}