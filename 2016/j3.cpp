#include <bits/stdc++.h>
using namespace std;

vector<string> _sub(string s, int n)
{
    vector<string> v;
    for (int i = 0; i < n; i++) {
        for (int len = 1; len <= n - i; len++) {
            v.push_back(s.substr(i, len));
        }
    }
    return v;
}

bool is_pal(string s) {

    string str = s;
    reverse(str.begin(), str.end());
    if (str==s) {
        return true;
    }
    return false;

}

int main()
{
    int longest;
    string input;
    cin >> input;
    vector<string>substrings = _sub(input, input.size());
    for (int j=0; j<substrings.size(); j++) {
        if (is_pal(substrings[j]) && substrings[j].size()>longest) {
            longest=substrings[j].size();
        }
    }
    cout << longest;
}
