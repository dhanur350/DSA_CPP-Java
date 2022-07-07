import java.util.Scanner;

public class arrstr {
    public static void main(String[] args) {
        System.out.print("String input with spaces");
        Scanner scan = new Scanner(System.in);
        String str;
        str = scan.nextLine();
        // scan.nextLine() will take input with spaces till user enteres the enter
        // button
        System.out.println(str);
        scan.close();
    }
}
