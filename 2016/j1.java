// code by savir singh

import java.util.*;

public class Main {
    public static void main(String[] args) {
        List<String> results = new ArrayList<String>();

        for (int i=0; i<6; i++) {
            Scanner a1 = new Scanner(System.in);
            results.add(a1.nextLine());
        }

        int countw = Collections.frequency(results, "W");

        if (countw == 5 || countw == 6) {
            System.out.println("1");
        }
        else if (countw == 3 || countw == 4) {
            System.out.println("2");
        }
        else if (countw == 1 || countw == 2) {
            System.out.println("3");
        }
        else if (countw == 0) {
            System.out.println("-1");
        }


    }
}
