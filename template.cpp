// code by savir singh
// my current cpp template for ccc
// (and for everything else too lol)

#pragma GCC optimize("Ofast", "unroll-loops")
#pragma optimize( "", off )
#pragma optimize( "", on )
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
#define scanner(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

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
const int MM = 1e6 + 1;

// driver code
bit32 main() {
  
}

/*
 .----------------.  .----------------.  .----------------.  .----------------.  .----------------. 
| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |
| |    _______   | || |      __      | || | ____   ____  | || |     _____    | || |  _______     | |
| |   /  ___  |  | || |     /  \     | || ||_  _| |_  _| | || |    |_   _|   | || | |_   __ \    | |
| |  |  (__ \_|  | || |    / /\ \    | || |  \ \   / /   | || |      | |     | || |   | |__) |   | |
| |   '.___`-.   | || |   / ____ \   | || |   \ \ / /    | || |      | |     | || |   |  __ /    | |
| |  |`\____) |  | || | _/ /    \ \_ | || |    \ ' /     | || |     _| |_    | || |  _| |  \ \_  | |
| |  |_______.'  | || ||____|  |____|| || |     \_/      | || |    |_____|   | || | |____| |___| | |
| |              | || |              | || |              | || |              | || |              | |
| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |
 '----------------'  '----------------'  '----------------'  '----------------'  '----------------' 
*/

// - savir
/*
       /\     /\
      //\\___//\\
      \_  o o  _/
       /   ^   \
      /  '---'  \
     |__|_|_|__|
     |  | | |  |
     |__|_|_|__|
    /'-./  | \.-'\
   /   /   |   \   \
  (`-/-`)  |  (`-/-`)
   `"`"`"``|``"`"`"`
          \|/
           V
*/
