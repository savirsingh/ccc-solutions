// code by savir singh
// https://dmoj.ca/problem/invperm
// 100/100

#include <bits/stdc++.h>
using namespace std;
//#define int long long

int N, K;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> K;
    vector<int> v;
    for (int i = 0; i <= N; i++) {
        v.push_back(i);
    }
    for (int i = 1; i <= min(K, (N/2)); i++) {
        int A = i, B=N-i+1;
        swap(v[A], v[B]);
    }
    if (K < N/2) {
        for(int i=1;i<=N;i++) cout<<v[i]<<" ";
        return 0;
    }
    for (int i = N/2+N-K; i < N; i++) {
        int A = i, B = i+1;
        swap(v[A], v[B]);
    }
    for(int i=1;i<=N;i++) cout<<v[i]<<" ";

    return 0;
}
