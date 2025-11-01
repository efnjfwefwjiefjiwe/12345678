#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n;
    cin >> n;
    vector<vector<int>>cost_stations(n + 1);
    for (int i = n; i > 0; --i) {
        for (int j = 1; i >= j; ++j) {
            int d;
            cin >> d;
            cost_stations[n - i].push_back(d);
        }
    }
    vector<int>dp(n + 1, 1e9);
    dp[0] = 0;
    for (int i = 1; n >= i; ++i) {
        for (int j = 0; i > j; ++j) {
            dp[i] = min(dp[j] + cost_stations[j][i - j - 1], dp[i]);
        }
    }
    cout << dp[n] << endl;
    return 0;
}
