#include<bits/stdc++.h>
using namespace std;
int dp[20][20];
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; n > i; ++i) {
        for  (int j = 0; m > j; ++j) {
            cin >> dp[i][j];
        }
    }
    for (int i = 0; n > i; ++i) {
        for  (int j = 0; m > j; ++j) {
            if (not(i == 0 && j == 0)) {
                if (i != 0 && j != 0) { 
                    dp[i][j] = min(dp[i - 1][j] + dp[i][j], dp[i][j - 1] + dp[i][j]);
                } else if (i == 0 && j != 0) {
                    dp[i][j] = dp[i][j - 1] + dp[i][j];      
                } else {
                    dp[i][j] = dp[i - 1][j] + dp[i][j];
                }
            }
        }
    }
    cout << dp[n - 1][m - 1] << endl;
    return 0;
}
