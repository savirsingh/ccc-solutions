// code by savir singh

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner x1 = new Scanner(System.in);
        int x = x1.nextInt();
        int y = x1.nextInt();
        int z = 0;

        if (x>0 && y>0) {
            System.out.println("1");
        }
        else if (x>0 && y<0) {
            System.out.println("4");
        }
        else if (x<0 && y>0) {
            System.out.println("2");
        }
        else {
            System.out.println("3");
        }
    }
}
