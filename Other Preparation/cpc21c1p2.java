// code by savir singh
// https://dmoj.ca/problem/cpc21c1p2
// 100/100

// java version:

import java.util.*;

public class Main {
    static final long MM = 200001L;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong();
        n *= 2;
        n += 1;
        long ret = 0;
        List<Long> a = new ArrayList<>();
        List<Long> b = new ArrayList<>();

        for (long i = 0; i < n; i++) {
            long x = scanner.nextLong();
            ret ^= x;
            a.add(x);
        }

        for (long i = 0; i < n; i++) {
            long x = scanner.nextLong();
            ret ^= x;
            b.add(x);
        }

        for (long i = 0; i < n; i++) {
            b.set((int) i, b.get((int) i) ^ ret);
        }

        Collections.sort(a);
        Collections.sort(b);

        for (long i = 0; i < n; i++) {
            if (!a.get((int) i).equals(b.get((int) i))) {
                ret = -1;
                break;
            }
        }

        System.out.println(ret);
    }
}
