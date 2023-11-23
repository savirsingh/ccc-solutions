// code by savir singh
// https://dmoj.ca/problem/dpi
// 100/100

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    double probabilities[N];
    for (int i = 0; i < N; ++i) {
        scanf("%lf", &probabilities[i]);
    }

    double dp[N+1][N+1];
    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= N; ++j) {
            dp[i][j] = 0.0;
        }
    }
    dp[0][0] = 1.0;

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= N; ++j) {
            dp[i][j] = probabilities[i-1] * dp[i-1][j-1] + (1 - probabilities[i-1]) * dp[i-1][j];
        }
    }

    double answer = 0.0;
    for (int j = (N+1)/2; j <= N; ++j) {
        answer += dp[N][j];
    }

    printf("%.9f\n", answer);

    return 0;
}
