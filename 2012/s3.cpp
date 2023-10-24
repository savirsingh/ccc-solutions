// code by savir singh
// 50/50 on DMOJ.

#include <iostream>
#include <vector>
#include <set>
#include <cstring>
#include <algorithm>
using namespace std;
#define endl '\n'
#define pii pair<int, int>

const int mm = 2e6 + 1;
int N, freq[mm];
bool done[1001];

struct readdd {
        int num;
        friend bool operator<(const readdd &a, const readdd &b) {
                return freq[a.num] < freq[b.num];
        }
};
set<int> rdd;
vector<readdd> rd;
int readdding;

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
        }while (num > 0);

        fputs(&buffer[idx + 1], stdout);
        fputs(endline.c_str(), stdout);
}

// Fast Output for Strings
inline void fastprint(const string& s, const string& endline = "\n") {
        fputs(s.c_str(), stdout);
        fputs(endline.c_str(), stdout);
}

int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        memset(done, false, sizeof done);
        fastscan(N);
        while(N--) {
                fastscan(readdding);
                freq[readdding]++;
                rdd.insert(readdding);
        }
        for (int i : rdd) {
                if (!done[i]) {
                        done[i] = true;
                        readdd A; A.num = i;
                        rd.push_back(A);
                }
        }
        sort(rd.rbegin(), rd.rend());
        vector<int> second, first;
        int top = rd[0].num;
        int endd = 0;
        for (int i = 0; i < rd.size(); i++) {
                if (freq[top] == freq[rd[i].num]) {
                        first.push_back(rd[i].num);
                }
                else {
                        break;
                }
                int endd = i;
        }
        top = rd[endd + 1].num;
        for (int i = endd + 1; i < rd.size(); i++) {
                if (freq[top] == freq[rd[i].num]) {
                        second.push_back(rd[i].num);
                }
                else break;
        }
        sort(second.begin(), second.end());
        int ans = 0;
        for (int i : first) {
                int curdif;
                if (abs(i - second[0]) > abs(i - second[second.size() - 1])) {
                        curdif = abs(i - second[0]);
                }
                else {
                        curdif = abs(i - second[second.size() - 1]);
                }
                ans = max(ans, curdif);
        }
        fastprint(ans);
}
