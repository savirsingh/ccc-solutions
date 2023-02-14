// code by savir singh

#include <bits/stdc++.h>
using namespace std;

struct node {
    int left, right, gcd, min_, cnt;
};

const int MAX=1e5+5;
node seg[3*MAX];
int arr[MAX];

void construct(int pos, int lo, int hi) {
    seg[pos].left=lo, seg[pos].right=hi;
    if (lo==hi) {
        seg[pos].min_=arr[lo];
        seg[pos].gcd=arr[lo];
        seg[pos].cnt=1;
        return;
    }
    int mid=(lo+hi)>>1;
    construct(2*pos, lo, mid);
    construct(2*pos+1, mid+1, hi);
    seg[pos].gcd=__gcd(seg[2*pos].gcd, seg[2*pos+1].gcd);
    seg[pos].min_=min(seg[2*pos].min_, seg[2*pos+1].min_);
    seg[pos].cnt=0;
    if (seg[pos].gcd==seg[2*pos].gcd) {
        seg[pos].cnt+=seg[2*pos].cnt;
    }
    if (seg[pos].gcd==seg[2*pos+1].gcd) {
        seg[pos].cnt+=seg[2*pos+1].cnt;
    }
}

void update(int pos, int x, int v) {
    int lo=seg[pos].left, hi=seg[pos].right;
    if (lo==hi) {
        seg[pos].min_=v;
        seg[pos].gcd=v;
        seg[pos].cnt=1;
        return;
    }
    int mid=(lo+hi)>>1;
    if (x<=mid) {
        update(2*pos, x, v);
    }
    else {
        update(2*pos+1, x, v);
    }
    seg[pos].gcd=__gcd(seg[2*pos].gcd, seg[2*pos+1].gcd);
    seg[pos].min_=min(seg[2*pos].min_, seg[2*pos+1].min_);
    seg[pos].cnt=0;
    if (seg[pos].gcd==seg[2*pos].gcd) {
        seg[pos].cnt+=seg[2*pos].cnt;
    }
    if (seg[pos].gcd==seg[2*pos+1].gcd) {
        seg[pos].cnt+=seg[2*pos+1].cnt;
    }
}

int minrangequery(int pos, int qlo, int qhi) {
    int lo=seg[pos].left, hi=seg[pos].right;
    int mid=(lo+hi)>>1;
    if (qlo<=lo && qhi>=hi) return seg[pos].min_;
    if (qhi<=mid) return minrangequery(2*pos, qlo, qhi);
    if (qlo>mid) return minrangequery(2*pos+1, qlo, qhi);
    return min(minrangequery(2*pos, qlo, mid), minrangequery(2*pos+1, mid+1, qhi));
}

int gcdrangequery(int pos, int qlo, int qhi) {
    int lo=seg[pos].left, hi=seg[pos].right;
    int mid=(lo+hi)>>1;
    if (lo==qlo && hi==qhi) return seg[pos].gcd;
    if (qhi<=mid) return gcdrangequery(2*pos, qlo, qhi);
    if (qlo>mid) return gcdrangequery(2*pos+1, qlo, qhi);
    return __gcd(gcdrangequery(2*pos, qlo, mid), gcdrangequery(2*pos+1, mid+1, qhi));
}

int cntrangequery(int pos, int qlo, int qhi, int gcd) {
    int lo=seg[pos].left, hi=seg[pos].right;
    int mid=(lo+hi)>>1;
    if (lo==qlo && hi==qhi) {
        if (seg[pos].gcd==gcd) return seg[pos].cnt;
        else return 0;
    }
    if (qhi<=mid) return cntrangequery(2*pos, qlo, qhi, gcd);
    if (qlo>mid) return cntrangequery(2*pos+1, qlo, qhi, gcd);
    return cntrangequery(2*pos, qlo, mid, gcd)+cntrangequery(2*pos+1, mid+1, qhi, gcd);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin >> n >> m;
    for (int i=1; i<=n; i++) cin >> arr[i];
    construct(1, 1, n);
    for (int i=0; i<m; i++) {
        char op;
        int x, v;
        cin >> op >> x >> v;
        if (op=='C') {
            arr[x]=v;
            update(1, x, v);
        }
        else if (op=='M') {
            cout << minrangequery(1, x, v) << endl;
        }
        else if (op=='G') {
            cout << gcdrangequery(1, x, v) << endl;
        }
        else {
            cout << cntrangequery(1, x, v, gcdrangequery(1, x, v)) << endl;
        }
    }
}
