#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    int n;
    cin >> n;
    ll dp[6767];
    dp[1] = 2;
    for (int i = 2; n >= i; ++i) {
        dp[i] = dp[i - 1] + i;
    }
    cout << dp[n] << endl;
    return 0;
}
