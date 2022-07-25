import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner a = new Scanner(System.in);
        int month = a.nextInt();
        int day = a.nextInt();

        if (month < 2) {
            System.out.println("Before");
        }
        if (month > 2) {
            System.out.println("After");
        }
        if (month == 2 && day > 18) {
            System.out.println("After");
        }
        if (month == 2 && day < 18) {
            System.out.println("Before");
        }

        if (month == 2 && day == 18) {
            System.out.println("Special");
        }
    }
}
