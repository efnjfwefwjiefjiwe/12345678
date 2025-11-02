#include<bits/stdc++.h>
using namespace std;
using ld = long double;
using ll = long long;
ll dp[1001];
ll solve[1001];
int n;
int main() {
    cin >> n;
    for (int i = 1; n >= i; ++i) {
        cin >> dp[i];
    }
    solve[1] = 0;
    for (int i = 2; n >= i; ++i) {
        if (dp[i - 1] >= dp[i - 2]) {
            dp[i] += dp[i - 1];
            solve[i] = i - 1;
        } else {
            dp[i] += dp[i - 2];
            solve[i] = i - 2;
        }
    }
    cout << dp[n] << endl; 
    vector<int>v;
    v.push_back(n);
    int i = n;
    while (solve[i] != 0) {
        v.push_back(solve[i]);
        i = solve[i];
    }
    for (int i = v.size() - 1; i > - 1; --i) {
        cout << v[i] << " ";
    }
    return 0;
}
