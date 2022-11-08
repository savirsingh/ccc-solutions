// code by savir singh
// 15/15 on DMOJ & CCC Grader

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

// all vars
int n;

// make a struct
struct stu
{
    int a_count=0, b_count=0, c_count=0;
    void ins(char person)
    {
        if (person=='A') a_count++;
        else if (person=='B') b_count++;
        else c_count++;
    }
    void chg(char person)
    {
        if (person=='A') a_count--;
        else if (person=='B') b_count--;
        else c_count--;
    }
};

// find swaps function
int find_swaps(str s)
{
    stu main_struct, ga, gb, gc;
    int counter=0;
    for (int i=0; i<n; i++) {
        main_struct.ins(s[i]);
    }
    for (int i=0; i<main_struct.a_count; i++) {
        ga.ins(s[counter]);
        counter++;
    }
    for (int i=0; i<main_struct.b_count; i++) {
        gb.ins(s[counter]);
        counter++;
    }
    for (int i=0; i<main_struct.c_count; i++) {
        gc.ins(s[counter]);
        counter++;
    }
    int o_s=INT_MAX, r;
    for (int i=0; i<n; i++) {
        r=ga.b_count+ga.c_count+gb.a_count+gb.c_count-min(ga.b_count, gb.a_count);
        o_s=min(o_s, r);
        ga.chg(s[i]);
        ga.ins(s[i+main_struct.a_count]);
        gb.chg(s[i+main_struct.a_count]);
        gb.ins(s[i+main_struct.a_count+main_struct.b_count]);
        gc.chg(s[i+main_struct.a_count+main_struct.b_count+main_struct.c_count]);
    }
    return o_s;
}

// driver code
bit32 main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    str s; cin >> s;
    n=s.size();
    s+=s;
    int o_s=find_swaps(s);
    for (int i=0; i<2*n; i++) {
        if (s[i]=='A') {
            s[i]='C';
        }
        else if (s[i]=='C') {
            s[i]='A';
        }
    }
    o_s=min(o_s, find_swaps(s));
    cout << o_s;
}
