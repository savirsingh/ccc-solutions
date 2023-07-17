// code by savir singh
// coci20c5p2
// 70/70
// Po, oly homework

#include <iostream>
#include <stack>

const int MM = 1e5 + 2;
int n, ans = 0;
std::stack<int> mono;

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

int32_t main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    read(n);
    for (int i = 0, a; i < n; i++) {
        read(a);
        while (!mono.empty() && mono.top() > a) mono.pop();
        if (!mono.empty() && mono.top() == a)continue;
        if(a){mono.push(a);ans++;}
    }
    std::cout<<ans<<std::endl;
}
