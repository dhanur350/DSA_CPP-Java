import java.util.Scanner;

public class copy {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String input = new String();
        System.out.println("Enter your string input ");
        input = scan.nextLine();
        String copyInput = new String(input);
        System.out.println(copyInput);
    }
}
