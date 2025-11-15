#include<bits/stdc++.h>

using namespace std;

using ll = long long;

struct mx {
    __int128 m[2][2];
};

ll n, k, mod;
mx c, ans, until;

void mx_mul(mx a, mx b) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            until.m[i][j] = 0;
            for (int p = 0; p < 2; ++p) {
                until.m[i][j] = ll((__int128(until.m[i][j] + a.m[i][p] * b.m[p][j])) % mod);
            }
        }
    }
}

void dp(ll len) {
    while (len != 0) {
        if (len % 2 == 1) {
            mx_mul(ans, c);
            memcpy(ans.m, until.m, sizeof(until.m));
        }
        len /= 2;
        mx_mul(c, c);
        memcpy(c.m, until.m, sizeof(until.m));
    }
}

int main(){
    cin >> n >> k >> mod;

    c.m[0][0] = k - 1;
    c.m[1][0] = k - 1;
    c.m[0][1] = 1;
    c.m[1][1] = 0;

    ans.m[0][0] = 1;
    ans.m[1][0] = 0;
    ans.m[0][1] = 0;
    ans.m[1][1] = 1;
    

    dp(n - 1);

    cout << ll(((__int128(ans.m[0][0] + ans.m[0][1]) * (k - 1))) % mod) << endl;

    return 0;
}
