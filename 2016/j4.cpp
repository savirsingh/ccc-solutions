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

// driver code
bit32 main(){
    int a, b;
    char colon;
    cin >> a >> colon >> b;
    int mins=a*60+b;
    double cnt=0;
    while (true) {
        if (cnt==120) {
            break;
        }
        if (cnt>120) {
            mins--;
            break;
        }
        if (mins>1439) {
            mins=0;
        }
        if ((mins>=420 && mins<=600) || (mins>=900 && mins<=1140)) {
            cnt+=0.5;
        }
        else {
            cnt++;
        }
        mins++;
    }
    str shour=to_string(mins/60), smins=to_string(mins%60);
    if (shour.size()==1) {
        shour="0"+shour;
    }
    if (smins.size()==1) {
        smins="0"+smins;
    }
    if (shour=="24") {
        shour="00";
    }
    cout << shour << colon << smins;
}
