package DSA;
import java.util.Scanner;

public class comparestr {
    boolean mystrcmp(char[] str1, char[] str2) {
        if (str1.length != str2.length) {
            return false;
        }
        for (int i = 0; str1[i] != '\0'; i++) {
            if (str1.length != str2.length) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        comparestr cmp = new comparestr();
        int n;
        try (Scanner scan = new Scanner(System.in)) {
            System.out.println("Length of string ?");
            n = scan.nextInt();
            char[] str1 = new char[n];
            char[] str2 = new char[n];
            System.out.print("Enter your 1st and 2nd string");
            str1 = scan.next().toCharArray();
            str2 = scan.next().toCharArray();
            if (cmp.mystrcmp(str1, str2)) {
                System.out.println(" Strings matched");
            } else {
                System.out.println(" String is not matching ");
            }
        }
    }
}
