#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
struct point{
    int x, y;
};
bool dp[1001];
int main() {
    ios::sync_with_stdio(0);
    cout.tie(0), cin.tie(0);
    int n, k;
    cin >> n;
    int minp = 1001;
    vector<int>p(n);
    for (int i = 0; n > i; ++i)  {
        cin >> p[i];
        minp = min(minp, p[i]);
        dp[p[i]] = true;
    }
    cin >> k;
    vector<int>sum(k);
    for (int i = 0; k > i; ++i)  {
        cin >> sum[i];
    }
    for (int i = minp * 2; 1000 >= i; ++i) {
        if (dp[i] == false) {
            for (int j = 1; i / 2 >= j && dp[i] == false; ++j) {
                dp[i] = dp[j] && dp[i - j];
            }
        }
    }
    for (int i = 0; k > i; ++i) {
        cout << dp[sum[i]] << " ";
    }
    return 0;
}
