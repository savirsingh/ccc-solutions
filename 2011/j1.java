// code by savir singh

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner a1 = new Scanner(System.in);
        int antennae = a1.nextInt();
        int eyes = a1.nextInt();

        if (antennae >= 3 && eyes <= 4) {
            System.out.println("TroyMartian");
        }
        if (antennae <= 6 && eyes >= 2) {
            System.out.println("VladSaturnian");
        }
        if (antennae <= 2 && eyes <= 3) {
            System.out.println("GraemeMercurian");
        }
    }
}
