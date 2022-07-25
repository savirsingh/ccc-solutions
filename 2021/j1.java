// code by savir singh

import java.util.Scanner;

public class j1 {
    public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = 0;

        if (x==100) {
            y = 1;
        }

        else if (x<100) {
            y = 2;
        }

        else {
            ;
        }

        if (y==0) {
            System.out.println(5*x-400);
            System.out.println("-1");
        }

        else if (y==1) {
            System.out.println(5*x-400);
            System.out.println("0");
        }

        else {
            System.out.println(5*x-400);
            System.out.println("1");
        }


    }
}
