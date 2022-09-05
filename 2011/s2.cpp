// code by savir singh

#include <bits/stdc++.h>
#define ll long long
#define del erase
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<string> stud (n);
    vector<string> ans (n);
    ll correct=0;
    for (ll i=0; i<n; i++) {
        cin >> stud[i];
    }
    for (ll i=0; i<n; i++) {
        cin >> ans[i];
    }
    for (ll j=0; j<n; j++) {
        if (stud[j]==ans[j]) {
            correct++;
        }
    }
    cout << correct;
}
