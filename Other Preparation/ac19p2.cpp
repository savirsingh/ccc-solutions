// code by savir singh
// https://dmoj.ca/problem/ac19p2
// 100/100

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

int getIndex(vector<char> v, char ch)
{
    auto it = find(v.begin(), v.end(), ch);

    if (it != v.end())
    {
        int index = it - v.begin();
        return index;
    }
    else {
        return -1;
    }
}

// driver code
bit32 main()
{
    vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f','g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q','r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int n, l;
    cin >> n >> l;
    char s[n-1];
    for (int i=0; i<=n; i++) {
        scanc(s[i]);
    }
    for (int i=1; i<=sizeof(s)+1; i++) {
        int x = getIndex(alphabet, s[i])+l;
        if (s[i]==' ') {
            continue;
        }
        if (x<=25) {
            s[i]=alphabet[x];
        }
        else {
            while (x>25) {
                x-=26;
            }
            s[i]=alphabet[x];
        }
    }
    for (int i=1; i<=sizeof(s)+1; i++) {
        printc(s[i]);
    }
}
