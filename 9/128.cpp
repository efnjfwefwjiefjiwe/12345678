#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
bool dp[50001][100];
int main() {
    cin >> n;
    vector<int>p(n, 0);
    int sum = 0;
    for (int i = 0; n > i; ++i) {
        cin >> p[i];
        sum += p[i];
    }
    dp[0][0] = true;
    for (int i = 0; n > i; ++i) {
        dp[p[i]][i] = true;
    }
    for (int i = 1; 50000 >= i; ++i) {
        for (int j = 1; n > j; ++j) { 
            for (int e = 0; j > e; ++e) {
                if (i - p[j] >= 0 && dp[i][j] != true)
                    dp[i][j] = dp[i - p[j]][e];
            }
        }
    }
    ll cnt = 0;
    for (int i = 0; 50000 >= i; ++i) {
        bool pr = true;
        for (int j = 0; n > j && pr; ++j) {
            if (dp[i][j]) {
                ++cnt;
                pr = false;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
