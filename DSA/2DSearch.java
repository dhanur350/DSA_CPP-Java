package DSA;

import java.util.Scanner;

class search{
    public static void main(String[] args) {
        int row,column;
        try {
            Scanner scan = new Scanner(System.in);
            System.out.println("Enter the input?");
            row = scan.nextInt();
            column = scan.nextInt();
            System.out.println(row+column);            
        } catch (Exception e) {
            // TODO: handle exception
        }
        // System.out.println("hello");
    }
}