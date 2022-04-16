import java.util.*;

public class vectstring {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Vector<String> strv = new Vector<>();
        int n;
        System.out.println("How many string u want to store?");
        n = scan.nextInt();
        String str;
        for (int i = 0; i < n; i++) {
            str = scan.next();
            strv.add(str);
        }
        // To see collection of strings
        for (int i = 0; i < strv.size(); i++) {
            System.out.print("|" + strv.get(i));
        }
        System.out.println();
        // To see particualr string entered at index
        System.out.println(strv.get(2));
        scan.close();
    }
}
