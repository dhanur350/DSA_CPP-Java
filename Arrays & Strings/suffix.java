import java.util.*;

public class suffix {
    void printAllsuffix(char str[], int n) {
        int len = str.length;
        // System.out.println(len);
        for (int i = len - 1; i >= 0; i--) {
            for (int j = i; j < n; j++) {
                System.out.print(str[j]);
            }
            System.out.print("\n");
        }
    }

    public static void main(String[] args) {
        int n;
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        char[] str = new char[n];
        str = scan.next().toCharArray();
        suffix suf = new suffix();
        suf.printAllsuffix(str, n);
        scan.close();
    }
}
