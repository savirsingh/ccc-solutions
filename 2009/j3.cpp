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

// driver code
bit32 main()
{
    int ottawa;
    scani(ottawa);
    printi(ottawa); print(" in Ottawa\n");
    int toronto=ottawa;
    int halifax=ottawa+100;
    int stjohns=ottawa+130;
    if (ottawa<1000) {
        ottawa+=2400;
    }
    int victoria=ottawa-300;
    int edmonton=ottawa-200;
    int winnipeg=ottawa-100;
    if (victoria>2400) {
        victoria-=2400;
    }
    if (edmonton>2400) {
        edmonton-=2400;
    }
    if (winnipeg>2400) {
        winnipeg-=2400;
    }
    if (to_string(ottawa).find("45")!=string::npos) {
        stjohns+=40;
    }
    printi(victoria); print(" in Victoria\n");
    printi(edmonton); print(" in Edmonton\n");
    printi(winnipeg); print(" in Winnipeg\n");
    printi(toronto); print(" in Toronto\n");
    printi(halifax); print(" in Halifax\n");
    printi(stjohns); print(" in St. John's");
}
