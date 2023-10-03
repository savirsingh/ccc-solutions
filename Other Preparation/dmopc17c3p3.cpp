// code by savir singh
// https://dmoj.ca/problem/dmopc17c3p3
// 100/100

// throughout this code, I check if element k is in a subset by checking
// if the k-th bit of the subset (represented by an int) is set.

#include <bits/stdc++.h>
using namespace std;

const int mm = 21;
int N, S[mm], best = INT_MAX;

vector<int> subsets;
struct thing {
    int subset;
    int sum = 0;
    friend bool operator<(const thing& a, const thing& b) {
        return a.sum < b.sum;
    }
};

thing* ss;

int idx = 0;

inline void gens() {
    int tot = 1 << N;
    for (int i = 0; i < tot; i++)
        subsets[idx++] = i;
}

// Fast Input
template<typename T, typename... Args>
inline void fastscan(T& num, Args&... args) {
    int c = getchar();
    num = 0;
    bool neg = false;

    // Handle negative numbers
    if (c == '-') {
        neg = true;
        c = getchar();
    }

    // Process digits
    while (c >= '0' && c <= '9') {
        num = num * 10 + (c - '0');
        c = getchar();
    }

    if (neg)
        num = -num;

    if constexpr (sizeof...(args) > 0)
        fastscan(args...); // Recursively read the remaining arguments
}

// Fast Output For Integers
inline void fastprint(int num, const string& endline = "\n") {
    if (num < 0) {
        putchar('-');
        num = -num;
    }
    char buffer[20];
    int idx = 19;
    buffer[idx--] = '\0';

    do {
        buffer[idx--] = static_cast<char>('0' + num % 10);
        num /= 10;
    } while (num > 0);

    fputs(&buffer[idx + 1], stdout);
    fputs(endline.c_str(), stdout);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fastscan(N);
    subsets.resize(1 << N);
    vector<int> ans1(N), ans2(N);
    for (int i = 0; i < N; i++)
        fastscan(S[i]);
    gens();
    ss = new thing[idx];
    for (int i = 0; i < idx; i++) {
        int summ = 0;
        for (int j = 0; j < mm; j++)
                if (subsets[i] & 1 << j) summ += S[j];
        ss[i] = {subsets[i], summ};
    }
    sort(ss, ss + idx);
    ss[0].sum = INT_MAX;
    sort(ss, ss + idx);
    for (int i = 1; i < idx; i++) {
        vector<int> intersection, v1, v2;
        for (int j = 0; j < N; j++) {
                if (ss[i].subset & 1 << j) v1.push_back(j + 1);
                if (ss[i - 1].subset & 1 << j) v2.push_back(j + 1);
        }
        set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(intersection));
        if (best > ss[i].sum - ss[i - 1].sum && intersection.empty()) {
            best = ss[i].sum - ss[i - 1].sum;
            ans1 = v1;
            ans2 = v2;
        }
    }
    for (int i = 0; i < ans1.size() - 1; i++) {
        fastprint(ans1[i], " ");
    }
    fastprint(ans1[ans1.size() - 1]);
    for (int i = 0; i < ans2.size() - 1; i++) {
        fastprint(ans2[i], " ");
    }
    fastprint(ans2[ans2.size() - 1]);
}
