#include<bits/stdc++.h>

using namespace std;

using ll = long long;
string l, r;
ll goi = 0;
const ll mod = 1e9 + 7;
ll dp[102][10];
int sum(ll a, ll b) {
    return (a + b + mod) % mod;
}
void dp_tail() {
    for (int i = 0; i < 10; ++i) {
        dp[1][i] = 1;
    }
    for (int i = 2; i < 102; ++i) {
         for (int j = 0; j < 10; ++j) {
            for (int k = j; k < 10; ++k) {
                dp[i][j] = sum(dp[i][j], dp[i - 1][k]);
            }
        }
    } 
}
ll cnt_in_num(string &z, int posl) {
    ll num = 1e9 + 6;
    bool p = true;
    for (int i = 1; i <= z.size() && p; ++i) {
        for (int j = 0; j < 10 && p; ++j) {
            if (char(int('0') + j) < z[i - 1] && ((i == 1) || (z[i - 2] <= char(int('0') + j)))) {
                if (i > 2 && z[i - 3] > z[i - 2]) {
                    p = false;
                } else {
                    num = sum(num, dp[z.size() - i + 1][j]);
                }
            }
        }
    }
    bool prof = true;
    for (int i = 1; i <= z.size() && prof; ++i) {
        if (z[i - 1] < z[i - 2]) {
            prof = false;
        }
    }
    if (prof && posl == 1) {
        ++num;
    }
    return num % mod;
}
int main(){
    dp_tail();
    cin >> l >> r;
    cout << (cnt_in_num(r, 1) - cnt_in_num(l, 0) + mod) % mod << endl;
    return 0;
}

