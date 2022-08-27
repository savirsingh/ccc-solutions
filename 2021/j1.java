// code by savir singh

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Solve {
    public static void main(String[] args)
        throws IOException
    {
        BufferedReader b = new BufferedReader(
            new InputStreamReader(System.in));
        int bs = Integer.parseInt(b.readLine());
        int p = 5*bs-400;
        System.out.println(p);
        if (p==100) {
            System.out.println(0);
        }
        else if (p<100) {
            System.out.println(1);
        }
        else if (p>100) {
            System.out.println(-1);
        }
    }
}
