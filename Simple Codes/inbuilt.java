import java.util.Scanner;

public class inbuilt {
    public static void main(String[] args) {
        char[] input = new char[10];
        int len;
        Scanner scan = new Scanner(System.in);
        input = scan.next().toCharArray();
        System.out.print(input.length);
    }
}
