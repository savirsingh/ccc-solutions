// code by savir singh
// https://dmoj.ca/problem/dpo
// 100/100
// Olympiads Homework

import java.util.Scanner;

public class Main {
    static final int MM = 21;
    static final int MOD = 1000000007;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[][] a = new int[MM][MM];
        int[] dp = new int[1 << MM];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = scanner.nextInt();
            }
        }

        dp[0] = 1;
        for (int m = 0; m < (1 << n) - 1; m++) {
            int i = Integer.bitCount(m);
            for (int j = 0; j < n; j++) {
                if (((m >> j) & 1) == 1) continue;
                if (a[i][j] != 0) {
                    dp[m | (1 << j)] = (dp[m | (1 << j)] + dp[m]) % MOD;
                }
            }
        }

        System.out.println(dp[(1 << n) - 1]);
    }
}
