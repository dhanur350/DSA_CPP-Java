import java.util.Scanner;

public class inbuilt {
    public static void main(String[] args) {
        char[] input = new char[10];
        final int len = 1;
        System.out.println(len);
        Scanner scan = new Scanner(System.in);
        input = scan.next().toCharArray();
        System.out.print(input.length);
        scan.close();
    }
}
