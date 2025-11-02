#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using de = double;
int main() {
    int n, q;
    cin >> n >> q;
    de dp[3001][501];
    for (int i = 1; 6 >= i; ++i) {
        dp[i][1] = de(1) / de(6);
    }
    for (int i = 1; 6 * n >= i; ++i) {
        for (int j = 2; n >= j; ++j) {
            for (int x = 1; 6 >= x; ++x) {
                if (i > x) { 
                    dp[i][j] += dp[i - x][j - 1];
                }
            }
            dp[i][j] /= de(6);
        }
    }
    cout << setprecision(10) << dp[q][n] << endl;
    return 0;
}
