#include<bits/stdc++.h>

using namespace std;
int n, m;
int dp[200][200];
int num[70][70];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> num[i][j];
        }
    }
    dp[0][0] = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (num[i][j] != 0) {
                dp[i + num[i][j]][j] += dp[i][j];
                dp[i][j + num[i][j]] += dp[i][j];
            }
        }
    }
    cout << dp[n - 1][m - 1] << endl;
    return 0;
}
