#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
int main() {
    int n, q;
    cin >> n >> q;
    ll dp[3001][501];
    for (int i = 1; 6 >= i; ++i) {
        dp[i][1] = 1;
    }
    ll sum = 0;
    for (int i = 1; 6 * n >= i; ++i) {
        for (int j = 2; n >= j; ++j) {
            for (int x = 1; 6 >= x; ++x) {
                if (i > x) { 
                    dp[i][j] += dp[i - x][j - 1];
                }
            }
        }
        sum += dp[i][n];
    }
    cout << setprecision(10) << ld(dp[q][n]) / ld(sum) << endl;
    return 0;
}
