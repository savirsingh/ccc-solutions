// code by savir singh

#pragma GCC optimize("O3")
#include <stdio.h>

// Shorthand Macros
#define int long long

//vars
#define mm 200002
int n, k, a[mm], psa[mm], ans = 0; //at least one (+)

int deq[2 * mm][2];
int deq_front = 0;
int deq_back = -1;

void push_back(int i, int val) {
    while (deq_front <= deq_back && deq[deq_back][1] > val)
        deq_back--;
    deq_back++;
    deq[deq_back][0] = i;
    deq[deq_back][1] = val;
}

void pop_front(int i) {
    if (deq_front <= deq_back && deq[deq_front][0] < i)
        deq_front++;
}

int front_value() {
    return deq[deq_front][1];
}

int readInt() {
    int x = 0, c, sign = 1;
    c = getchar();
    if (c == '-') {
        sign = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9') {
        x = x * 10 + (c - '0');
        c = getchar();
    }
    return x * sign;
}

void writeInt(int n) {
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n == 0) {
        putchar('0');
        return;
    }
    char buf[20];
    int i = 0;
    while (n) {
        buf[i++] = n % 10 + '0';
        n /= 10;
    }
    i--;
    while (i >= 0) {
        putchar(buf[i]);
        i--;
    }
}

signed main() {
    n = readInt();
    k = readInt();
    for (int i = 1; i <= n; i++)
        a[i] = readInt();

    //for circle just double the array
    for (int i = n + 1; i <= 2 * n; i++)
        a[i] = a[i - n];

    psa[0] = 0;
    for (int i = 1; i <= 2 * n; i++) {
        psa[i] = psa[i - 1] + a[i];
    }

    for (int i = 1; i <= 2 * n; i++) {
        pop_front(i - k);
        push_back(i, psa[i]);
        ans = ans > (psa[i] - front_value()) ? ans : (psa[i] - front_value());
    }
    writeInt(ans);
    putchar('\n');

    return 0;
}
