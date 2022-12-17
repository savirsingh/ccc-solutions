// code by savir singh

#include <bits/stdc++.h>
using namespace std;
// macros
#define int long long
#define double long double
#define bit32 int32_t
#define del erase
#define pb push_back
#define str string
#define scani(x) scanf("%lld", &x)
#define scan(x) scanf("%s", &x)
#define scanc(x) scanf("%c", &x)
#define printi(x) printf("%lld", x);
#define print(x) printf("%s", x);
#define printc(x) printf("%c", x);
#define pii pair<int, int>

// fast i/o
void read(int &number)
{
    bool negative = false;
    register int c;

    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;

        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}

// all vars
const int MAX=1e5+2;
int N, M;
vector<int> edges;
int cnt=0;

// disjoint struct
struct disjoint{
    int set[MAX], ranks[MAX], size;

    disjoint(int siz){
        size = siz;
        for(int i = 0; i < size; i++){
            set[i] = i;
        }
        fill(ranks, ranks + siz, 1);
    }

    int root(int val){
        if(set[val] == val){
            return val;
        }
        return root(set[val]);
    }

    void unite(int v1, int v2){
        v1 = root(v1);
        v2 = root(v2);

        if(ranks[v1] < ranks[v2]){
            set[v1] = v2;
        }
        else if(ranks[v1] > ranks[v2]){
            set[v2] = v1;
        }
        else{
            set[v2] = v1;
            ranks[v1]++;
        }
    }

    bool same(int u, int v){
        return root(u) == root(v);
    }
};

// driver code
bit32 main(){
    read(N); read(M);

    disjoint disset(N);

    for (int i=1; i<=M; i++) {
        int u, v;
        read(u); read(v);

        if(!disset.same(u, v)){
            edges.pb(i);
            disset.unite(u, v);
            cnt++;
        }
    }

    if(cnt==N-1){
        for(int i : edges){
            cout << i << "\n";
        }
    }
    else{
        cout << "Disconnected Graph\n";
    }
}
