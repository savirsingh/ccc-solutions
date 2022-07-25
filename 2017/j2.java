// code by savir singh

import java.util.*;

public class j2 {
    public static void main(String[] args) {
        Scanner n1 = new Scanner(System.in);
        int n = n1.nextInt();
        int k = n1.nextInt();
        int new1 = n;

        for (int i=0; i<k; i++) {
            new1 = new1+n*10;
            n = n*10;
        }

    System.out.println(new1);
    }
}
