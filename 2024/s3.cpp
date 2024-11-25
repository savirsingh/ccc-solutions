// code by savir singh
// https://dmoj.ca/problem/ccc24s3
// 7/15
// i did fix this at some point in feb '24
// but i'm too lazy to find the right code
// got cooked during the contest due to segfault kek

#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mm = 3e5 + 2;
int N, a[mm], b[mm], freqa[mm], freqb[mm];

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N;
    //works when:
    //either before any ops the "chunked" version is the same
    //or if there is the right one beside it
    for (int i = 1; i <= N; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= N; i++) {
        cin >> b[i];
    }
    vector<int> chunka, chunkb;
    chunka.push_back(a[1]); chunkb.push_back(b[1]);
    for (int i = 2; i <= N; i++) {
        if (a[i] != chunka[chunka.size() - 1]) chunka.push_back(a[i]);
        if (b[i] != chunkb[chunkb.size() - 1]) chunkb.push_back(b[i]);
    }
    //you are able to take away "chunks" from the "chunked" version
    if (chunka.size() == chunkb.size()) {
        int ans = 0;
        for (int i = 0; i < chunka.size(); i++) {
            if (chunka[i] == chunkb[i]) ans++;
        }
        if (ans == chunka.size()) {
            cout << "YES" << endl;
            return 0;
        }
    }
    if (chunka.size() < chunkb.size()) {
        cout << "NO" << endl;
        return 0;
    }
    deque<int> deq;
    deq.push_back(chunka[0]);
    int ind = 1;
    for (int i = 0; i < chunkb.size(); i++) {
        while (deq.back() != chunkb[i]) {
            deq.pop_back();
            deq.push_back(chunka[ind]);
            if (ind == chunka.size()) {
                cout << "NO" << endl;
                return 0;
            }
            ind++;
        }
    }
    cout << "YES" << endl;

    return 0;
}
