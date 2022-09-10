#include <bits/stdc++.h>
#define ll long long
#define int long long
#define del erase
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll m, n, k;
    cin >> m >> n >> k;
    vector<char> grid (m*n, 'B');
    vector<pair<char, int>> instructions;
    vector<pair<char, int>> rowin;
    vector<pair<char, int>> colin;
    for (int i=0; i<k; i++) {
        pair<char, int> instruction;

        cin >> get<0>(instruction) >> get<1>(instruction);
        if (find(instructions.begin(), instructions.end(), instruction)!=instructions.end()) {
            instructions.erase(remove(instructions.begin(), instructions.end(), instruction), instructions.end());
        }
        else {
            instructions.push_back(instruction);
        }
    }
    for (int i=0; i<instructions.size(); i++) {
        if (get<0>(instructions[i])=='R') {
            for (int j=(get<1>(instructions[i])-1)*n; j<=get<1>(instructions[i])*n-1; j++) {
                if (grid[j]=='B') {
                    grid[j]='G';
                }
                else {
                    grid[j]='B';
                }
            }
        }
        else {
            for (int j=get<1>(instructions[i])-1; j<=get<1>(instructions[i])+(m-1)*n-1; j+=n) {
                if (grid[j]=='G') {
                    grid[j]='B';
                }
                else {
                    grid[j] = 'G';
                }
            }
        }
    }
    cout << count(grid.begin(), grid.end(), 'G');
}
