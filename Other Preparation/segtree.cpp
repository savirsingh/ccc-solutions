// code by savir singh
// https://dmoj.ca/problem/segtree
// 100/100

#include <bits/stdc++.h>
using namespace std;

struct node {
        int left, right, min_;
};

const int MAX=1e5+5;
node seg[3*MAX];
int arr[MAX];

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

inline void construct(int pos, int lo, int hi) {
        seg[pos].left=lo, seg[pos].right=hi;
        if (lo==hi) {
            seg[pos].min_=arr[lo];
            return;
        }
        int mid=(lo+hi)>>1;
        construct(2*pos, lo, mid);
        construct(2*pos+1, mid+1, hi);
        seg[pos].min_=min(seg[2*pos].min_, seg[2*pos+1].min_);
}

inline void update(int pos, int x, int v) {
        int lo=seg[pos].left, hi=seg[pos].right;
        if (lo==hi) {
            seg[pos].min_=v;
            return;
        }
        int mid=(lo+hi)>>1;
        if (x<=mid) {
            update(2*pos, x, v);
        }
        else {
            update(2*pos+1, x, v);
        }
        seg[pos].min_=min(seg[2*pos].min_, seg[2*pos+1].min_);
}

inline int minrangequery(int pos, int qlo, int qhi) {
        int lo=seg[pos].left, hi=seg[pos].right;
        int mid=(lo+hi)>>1;
        if (qlo<=lo && qhi>=hi) return seg[pos].min_;
        if (qhi<=mid) return minrangequery(2*pos, qlo, qhi);
        if (qlo>mid) return minrangequery(2*pos+1, qlo, qhi);
        return min(minrangequery(2*pos, qlo, mid), minrangequery(2*pos+1, mid+1, qhi));
}

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int n, m; cin >> n >> m;
        for (int i=1; i<=n; i++) cin >> arr[i];
        construct(1, 1, n);
        for (int i=0; i<m; i++) {
            char op;
            int x, v;
            cin >> op >> x >> v;x++;
            if (op=='M') {
                arr[x]=v;
                update(1, x, v);
            }
            else {
                v++;fastprint(minrangequery(1, x, v));
            }
        }
}
