#include<bits/stdc++.h>
using namespace std;
vector<int>dp(1e6 + 1,1e6 + 1);
int main() {
    int n;
    cin >> n;
    dp[n] = 0;
    for (int i = n - 1; i > 0; --i) {
        if (2 * i < n + 1) {
            dp[i] = min(dp[i], dp[2 * i] + 1);
        } 
        if (3 * i < n + 1) {
            dp[i] = min(dp[i], dp[3 * i] + 1);
        }
        if (1 + i < n + 1) {
            dp[i] = min(dp[i], dp[1 + i] + 1);
        }
    }
    cout << dp[1] << endl;
    return 0;
}
