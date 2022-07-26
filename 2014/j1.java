// code by savir singh

import java.util.*;

public class j1 {
    public static void main(String[] args) {
        Scanner a1 = new Scanner(System.in);
        int a = a1.nextInt();
        int b = a1.nextInt();
        int c = a1.nextInt();

        if (a==60 && b==60 && c==60) {
            System.out.println("Equilateral");
        }
        else if (a+b+c == 180 && a == b) {
            System.out.println("Isosceles");
        }
        else if (a+b+c == 180 && a == c) {
            System.out.println("Isosceles");
        }
        else if (a+b+c == 180 && b == c) {
            System.out.println("Isosceles");
        }
        else if (a+b+c == 180 && a != b && a != c && b != c) {
            System.out.println("Scalene");
        }
        else if (a+b+c != 180) {
            System.out.println("Error");
        }
    }
}
